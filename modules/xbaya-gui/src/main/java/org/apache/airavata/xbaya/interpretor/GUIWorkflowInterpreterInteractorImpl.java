/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

package org.apache.airavata.xbaya.interpretor;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import org.apache.airavata.workflow.model.graph.Node;
import org.apache.airavata.workflow.model.graph.ws.WSGraph;
import org.apache.airavata.workflow.model.wf.Workflow;
import org.apache.airavata.workflow.model.wf.WorkflowExecutionState;
import org.apache.airavata.xbaya.XBayaEngine;
import org.apache.airavata.xbaya.graph.controller.NodeController;
import org.apache.airavata.xbaya.monitor.MonitorException;
import org.apache.airavata.xbaya.ui.XBayaGUI;
import org.apache.airavata.xbaya.ui.dialogs.WaitDialog;
import org.apache.airavata.xbaya.ui.graph.subworkflow.SubWorkflowNodeGUI;
import org.apache.airavata.xbaya.ui.graph.system.DifferedInputHandler;
import org.apache.airavata.xbaya.ui.utils.Cancelable;
import org.apache.airavata.xbaya.ui.utils.MyProxyChecker;
import org.apache.airavata.xbaya.util.InterpreterUtil;

public class GUIWorkflowInterpreterInteractorImpl implements
		WorkflowInterpreterInteractor {
	private XBayaGUI xbayaGUI;
	private Workflow workflow;
	private XBayaEngine engine;

	private Map<String, WaitDialog> taskDialogs = new HashMap<String, WaitDialog>();

	public GUIWorkflowInterpreterInteractorImpl(XBayaEngine engine,
			Workflow workflow) {
		this.engine = engine;
		this.xbayaGUI = engine.getGUI();
		this.setWorkflow(workflow);
	}

	@Override
	public boolean notify(WorkflowExecutionMessage messageType, WorkflowInterpreterConfiguration config, Object data) {
		switch (messageType) {
		case NODE_STATE_CHANGED:
			xbayaGUI.getGraphCanvas().repaint();
			break;
		case EXECUTION_STATE_CHANGED:
			WorkflowExecutionState state = (WorkflowExecutionState) data;
			// if (state==WorkflowExecutionState.PAUSED ||
			// state==WorkflowExecutionState.STOPPED) {
			// if (getWorkflow().getExecutionState() ==
			// WorkflowExecutionState.RUNNING
			// || getWorkflow().getExecutionState() ==
			// WorkflowExecutionState.STEP) {
			// } else {
			// throw new WorkflowRuntimeException(
			// "Cannot pause when not running");
			// }
			// }
			getWorkflow().setExecutionState(state);
			if (state==WorkflowExecutionState.PAUSED){
				if (config.getWorkflow().getExecutionState() == WorkflowExecutionState.RUNNING
						|| config.getWorkflow().getExecutionState() == WorkflowExecutionState.STEP) {
					config.getGUI().getToolbar().getPlayAction()
							.actionPerformed(null);
				}
			}
			break;
		case EXECUTION_TASK_START:
			TaskNotification task = (TaskNotification) data;
			final WaitDialog waitDialog = new WaitDialog(new Cancelable() {
				@Override
				public void cancel() {
					// Do nothing
				}
			}, task.messageTitle, task.message, this.xbayaGUI);
			new Thread(new Runnable() {
				@Override
				public void run() {
					waitDialog.show();
				}
			}).start();
			taskDialogs.put(task.messageId, waitDialog);
			break;
		case EXECUTION_TASK_END:
			task = (TaskNotification) data;
			if (taskDialogs.containsKey(task.messageId)) {
				taskDialogs.get(task.messageId).hide();
				taskDialogs.remove(task.messageId);
			}
			break;
		case EXECUTION_ERROR:
			xbayaGUI.getErrorWindow().error((Exception) data);
			break;
		case OPEN_SUBWORKFLOW:
			((SubWorkflowNodeGUI) NodeController.getGUI((Node) data))
					.openWorkflowTab(config.getGUI());
			break;
		case EXECUTION_CLEANUP:
			this.engine.resetWorkflowInterpreter();
			try {
				config.getMonitor().stop();
			} catch (MonitorException e) {
				e.printStackTrace();
			} finally {
				this.engine.getMonitor().reset();
			}
			break;
		case HANDLE_DEPENDENT_NODES_DIFFERED_INPUTS:
			ArrayList<Node> waitingNodes = InterpreterUtil.getWaitingNodesDynamically((WSGraph)data);
			for (Node readyNode : waitingNodes) {
				DifferedInputHandler.handleDifferredInputsofDependentNodes(
						readyNode, config.getGUI());
			}
			break;
		default:
			return false;	
		}
		return true;
	}

	@Override
	public Object retrieveData(WorkflowExecutionMessage messageType, WorkflowInterpreterConfiguration config, Object data)
			throws Exception {
		Object result = null;
		switch (messageType) {
		case INPUT_WORKFLOWINTERPRETER_FOR_WORKFLOW:
            WorkflowInterpreterConfiguration workflowInterpreterConfiguration = new WorkflowInterpreterConfiguration(config.getWorkflow(),config.getTopic(),config.getMessageBoxURL(), config.getMessageBrokerURL(), config.getRegistry(), config.getConfiguration(), config.getGUI(), new MyProxyChecker(this.engine), this.engine.getMonitor());
            workflowInterpreterConfiguration.setActOnProvenance(false);
            workflowInterpreterConfiguration.setSubWorkflow(true);
			result = new WorkflowInterpreter(workflowInterpreterConfiguration, 
					new GUIWorkflowInterpreterInteractorImpl(engine,
							config.getWorkflow()));
			this.engine.registerWorkflowInterpreter((WorkflowInterpreter)result);
			break;
//		case INPUT_GSS_CREDENTIAL:
//			MyProxyChecker myProxyChecker = new MyProxyChecker(this.engine);
//			myProxyChecker.loadIfNecessary();
//			MyProxyClient myProxyClient = this.engine.getMyProxyClient();
//			result = myProxyClient.getProxy();
//			break;
//		case INPUT_LEAD_CONTEXT_HEADER:
//			Node node = (Node) data;
//			result = XBayaUtil.buildLeadContextHeader(this.getWorkflow(),
//					config.getConfiguration(),
//					new MonitorConfiguration(config.getMessageBrokerURL(),
//							config.getTopic(), true,
//							config
//									.getMessageBoxURL()), node.getID(),
//					null);
//			break;
		}
		return result;
	}

	public Workflow getWorkflow() {
		return workflow;
	}

	public void setWorkflow(Workflow workflow) {
		this.workflow = workflow;
	}

}
