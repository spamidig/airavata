/*
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

package org.apache.airavata.accountprovisioning.provisioner;

import org.apache.airavata.accountprovisioning.ConfigParam;
import org.apache.airavata.accountprovisioning.SSHAccountProvisioner;

import java.util.Map;

public class TestSSHAccountProvisioner implements SSHAccountProvisioner {

    private Map<ConfigParam, String> config;

    @Override
    public void init(Map<ConfigParam, String> config) {

        this.config = config;
    }

    @Override
    public boolean hasAccount(String username) {
        return false;
    }

    @Override
    public void createAccount(String username, String sshPublicKey) {

    }

    @Override
    public void installSSHKey(String username, String sshPublicKey) {

    }

    @Override
    public String getScratchLocation(String username) {
        return null;
    }

    public Map<ConfigParam, String> getConfig() {
        return config;
    }
}
