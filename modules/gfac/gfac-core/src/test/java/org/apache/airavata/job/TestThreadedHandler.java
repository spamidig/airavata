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
package org.apache.airavata.job;

import junit.framework.Assert;
import org.apache.airavata.gfac.handler.GFacHandlerException;
import org.apache.airavata.gfac.handler.ThreadedHandler;

import java.util.Map;

public class TestThreadedHandler extends ThreadedHandler {


    public void initProperties(Map<String, String> properties) throws GFacHandlerException {
    }

    public void run() {
        System.out.println("Invoking TestThreadedHandler");
        Assert.assertTrue(true);
    }
}
