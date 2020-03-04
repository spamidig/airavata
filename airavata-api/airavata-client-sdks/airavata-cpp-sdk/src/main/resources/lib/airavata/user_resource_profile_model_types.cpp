/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "user_resource_profile_model_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace apache { namespace airavata { namespace model { namespace appcatalog { namespace userresourceprofile {


UserComputeResourcePreference::~UserComputeResourcePreference() throw() {
}


void UserComputeResourcePreference::__set_computeResourceId(const std::string& val) {
  this->computeResourceId = val;
}

void UserComputeResourcePreference::__set_loginUserName(const std::string& val) {
  this->loginUserName = val;
__isset.loginUserName = true;
}

void UserComputeResourcePreference::__set_preferredBatchQueue(const std::string& val) {
  this->preferredBatchQueue = val;
__isset.preferredBatchQueue = true;
}

void UserComputeResourcePreference::__set_scratchLocation(const std::string& val) {
  this->scratchLocation = val;
__isset.scratchLocation = true;
}

void UserComputeResourcePreference::__set_allocationProjectNumber(const std::string& val) {
  this->allocationProjectNumber = val;
__isset.allocationProjectNumber = true;
}

void UserComputeResourcePreference::__set_resourceSpecificCredentialStoreToken(const std::string& val) {
  this->resourceSpecificCredentialStoreToken = val;
__isset.resourceSpecificCredentialStoreToken = true;
}

void UserComputeResourcePreference::__set_qualityOfService(const std::string& val) {
  this->qualityOfService = val;
__isset.qualityOfService = true;
}

void UserComputeResourcePreference::__set_reservation(const std::string& val) {
  this->reservation = val;
__isset.reservation = true;
}

void UserComputeResourcePreference::__set_reservationStartTime(const int64_t val) {
  this->reservationStartTime = val;
__isset.reservationStartTime = true;
}

void UserComputeResourcePreference::__set_reservationEndTime(const int64_t val) {
  this->reservationEndTime = val;
__isset.reservationEndTime = true;
}

void UserComputeResourcePreference::__set_validated(const bool val) {
  this->validated = val;
__isset.validated = true;
}

uint32_t UserComputeResourcePreference::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_computeResourceId = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->computeResourceId);
          isset_computeResourceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->loginUserName);
          this->__isset.loginUserName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->preferredBatchQueue);
          this->__isset.preferredBatchQueue = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->scratchLocation);
          this->__isset.scratchLocation = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->allocationProjectNumber);
          this->__isset.allocationProjectNumber = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->resourceSpecificCredentialStoreToken);
          this->__isset.resourceSpecificCredentialStoreToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->qualityOfService);
          this->__isset.qualityOfService = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->reservation);
          this->__isset.reservation = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->reservationStartTime);
          this->__isset.reservationStartTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->reservationEndTime);
          this->__isset.reservationEndTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->validated);
          this->__isset.validated = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_computeResourceId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t UserComputeResourcePreference::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserComputeResourcePreference");

  xfer += oprot->writeFieldBegin("computeResourceId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->computeResourceId);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.loginUserName) {
    xfer += oprot->writeFieldBegin("loginUserName", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->loginUserName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.preferredBatchQueue) {
    xfer += oprot->writeFieldBegin("preferredBatchQueue", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->preferredBatchQueue);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.scratchLocation) {
    xfer += oprot->writeFieldBegin("scratchLocation", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->scratchLocation);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.allocationProjectNumber) {
    xfer += oprot->writeFieldBegin("allocationProjectNumber", ::apache::thrift::protocol::T_STRING, 5);
    xfer += oprot->writeString(this->allocationProjectNumber);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.resourceSpecificCredentialStoreToken) {
    xfer += oprot->writeFieldBegin("resourceSpecificCredentialStoreToken", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->resourceSpecificCredentialStoreToken);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.qualityOfService) {
    xfer += oprot->writeFieldBegin("qualityOfService", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->qualityOfService);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.reservation) {
    xfer += oprot->writeFieldBegin("reservation", ::apache::thrift::protocol::T_STRING, 8);
    xfer += oprot->writeString(this->reservation);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.reservationStartTime) {
    xfer += oprot->writeFieldBegin("reservationStartTime", ::apache::thrift::protocol::T_I64, 9);
    xfer += oprot->writeI64(this->reservationStartTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.reservationEndTime) {
    xfer += oprot->writeFieldBegin("reservationEndTime", ::apache::thrift::protocol::T_I64, 10);
    xfer += oprot->writeI64(this->reservationEndTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.validated) {
    xfer += oprot->writeFieldBegin("validated", ::apache::thrift::protocol::T_BOOL, 11);
    xfer += oprot->writeBool(this->validated);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(UserComputeResourcePreference &a, UserComputeResourcePreference &b) {
  using ::std::swap;
  swap(a.computeResourceId, b.computeResourceId);
  swap(a.loginUserName, b.loginUserName);
  swap(a.preferredBatchQueue, b.preferredBatchQueue);
  swap(a.scratchLocation, b.scratchLocation);
  swap(a.allocationProjectNumber, b.allocationProjectNumber);
  swap(a.resourceSpecificCredentialStoreToken, b.resourceSpecificCredentialStoreToken);
  swap(a.qualityOfService, b.qualityOfService);
  swap(a.reservation, b.reservation);
  swap(a.reservationStartTime, b.reservationStartTime);
  swap(a.reservationEndTime, b.reservationEndTime);
  swap(a.validated, b.validated);
  swap(a.__isset, b.__isset);
}

UserComputeResourcePreference::UserComputeResourcePreference(const UserComputeResourcePreference& other0) {
  computeResourceId = other0.computeResourceId;
  loginUserName = other0.loginUserName;
  preferredBatchQueue = other0.preferredBatchQueue;
  scratchLocation = other0.scratchLocation;
  allocationProjectNumber = other0.allocationProjectNumber;
  resourceSpecificCredentialStoreToken = other0.resourceSpecificCredentialStoreToken;
  qualityOfService = other0.qualityOfService;
  reservation = other0.reservation;
  reservationStartTime = other0.reservationStartTime;
  reservationEndTime = other0.reservationEndTime;
  validated = other0.validated;
  __isset = other0.__isset;
}
UserComputeResourcePreference& UserComputeResourcePreference::operator=(const UserComputeResourcePreference& other1) {
  computeResourceId = other1.computeResourceId;
  loginUserName = other1.loginUserName;
  preferredBatchQueue = other1.preferredBatchQueue;
  scratchLocation = other1.scratchLocation;
  allocationProjectNumber = other1.allocationProjectNumber;
  resourceSpecificCredentialStoreToken = other1.resourceSpecificCredentialStoreToken;
  qualityOfService = other1.qualityOfService;
  reservation = other1.reservation;
  reservationStartTime = other1.reservationStartTime;
  reservationEndTime = other1.reservationEndTime;
  validated = other1.validated;
  __isset = other1.__isset;
  return *this;
}
void UserComputeResourcePreference::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "UserComputeResourcePreference(";
  out << "computeResourceId=" << to_string(computeResourceId);
  out << ", " << "loginUserName="; (__isset.loginUserName ? (out << to_string(loginUserName)) : (out << "<null>"));
  out << ", " << "preferredBatchQueue="; (__isset.preferredBatchQueue ? (out << to_string(preferredBatchQueue)) : (out << "<null>"));
  out << ", " << "scratchLocation="; (__isset.scratchLocation ? (out << to_string(scratchLocation)) : (out << "<null>"));
  out << ", " << "allocationProjectNumber="; (__isset.allocationProjectNumber ? (out << to_string(allocationProjectNumber)) : (out << "<null>"));
  out << ", " << "resourceSpecificCredentialStoreToken="; (__isset.resourceSpecificCredentialStoreToken ? (out << to_string(resourceSpecificCredentialStoreToken)) : (out << "<null>"));
  out << ", " << "qualityOfService="; (__isset.qualityOfService ? (out << to_string(qualityOfService)) : (out << "<null>"));
  out << ", " << "reservation="; (__isset.reservation ? (out << to_string(reservation)) : (out << "<null>"));
  out << ", " << "reservationStartTime="; (__isset.reservationStartTime ? (out << to_string(reservationStartTime)) : (out << "<null>"));
  out << ", " << "reservationEndTime="; (__isset.reservationEndTime ? (out << to_string(reservationEndTime)) : (out << "<null>"));
  out << ", " << "validated="; (__isset.validated ? (out << to_string(validated)) : (out << "<null>"));
  out << ")";
}


UserStoragePreference::~UserStoragePreference() throw() {
}


void UserStoragePreference::__set_storageResourceId(const std::string& val) {
  this->storageResourceId = val;
}

void UserStoragePreference::__set_loginUserName(const std::string& val) {
  this->loginUserName = val;
__isset.loginUserName = true;
}

void UserStoragePreference::__set_fileSystemRootLocation(const std::string& val) {
  this->fileSystemRootLocation = val;
__isset.fileSystemRootLocation = true;
}

void UserStoragePreference::__set_resourceSpecificCredentialStoreToken(const std::string& val) {
  this->resourceSpecificCredentialStoreToken = val;
__isset.resourceSpecificCredentialStoreToken = true;
}

uint32_t UserStoragePreference::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_storageResourceId = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->storageResourceId);
          isset_storageResourceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->loginUserName);
          this->__isset.loginUserName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fileSystemRootLocation);
          this->__isset.fileSystemRootLocation = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->resourceSpecificCredentialStoreToken);
          this->__isset.resourceSpecificCredentialStoreToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_storageResourceId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t UserStoragePreference::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserStoragePreference");

  xfer += oprot->writeFieldBegin("storageResourceId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->storageResourceId);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.loginUserName) {
    xfer += oprot->writeFieldBegin("loginUserName", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->loginUserName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.fileSystemRootLocation) {
    xfer += oprot->writeFieldBegin("fileSystemRootLocation", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->fileSystemRootLocation);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.resourceSpecificCredentialStoreToken) {
    xfer += oprot->writeFieldBegin("resourceSpecificCredentialStoreToken", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->resourceSpecificCredentialStoreToken);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(UserStoragePreference &a, UserStoragePreference &b) {
  using ::std::swap;
  swap(a.storageResourceId, b.storageResourceId);
  swap(a.loginUserName, b.loginUserName);
  swap(a.fileSystemRootLocation, b.fileSystemRootLocation);
  swap(a.resourceSpecificCredentialStoreToken, b.resourceSpecificCredentialStoreToken);
  swap(a.__isset, b.__isset);
}

UserStoragePreference::UserStoragePreference(const UserStoragePreference& other2) {
  storageResourceId = other2.storageResourceId;
  loginUserName = other2.loginUserName;
  fileSystemRootLocation = other2.fileSystemRootLocation;
  resourceSpecificCredentialStoreToken = other2.resourceSpecificCredentialStoreToken;
  __isset = other2.__isset;
}
UserStoragePreference& UserStoragePreference::operator=(const UserStoragePreference& other3) {
  storageResourceId = other3.storageResourceId;
  loginUserName = other3.loginUserName;
  fileSystemRootLocation = other3.fileSystemRootLocation;
  resourceSpecificCredentialStoreToken = other3.resourceSpecificCredentialStoreToken;
  __isset = other3.__isset;
  return *this;
}
void UserStoragePreference::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "UserStoragePreference(";
  out << "storageResourceId=" << to_string(storageResourceId);
  out << ", " << "loginUserName="; (__isset.loginUserName ? (out << to_string(loginUserName)) : (out << "<null>"));
  out << ", " << "fileSystemRootLocation="; (__isset.fileSystemRootLocation ? (out << to_string(fileSystemRootLocation)) : (out << "<null>"));
  out << ", " << "resourceSpecificCredentialStoreToken="; (__isset.resourceSpecificCredentialStoreToken ? (out << to_string(resourceSpecificCredentialStoreToken)) : (out << "<null>"));
  out << ")";
}


UserResourceProfile::~UserResourceProfile() throw() {
}


void UserResourceProfile::__set_userId(const std::string& val) {
  this->userId = val;
}

void UserResourceProfile::__set_gatewayID(const std::string& val) {
  this->gatewayID = val;
}

void UserResourceProfile::__set_credentialStoreToken(const std::string& val) {
  this->credentialStoreToken = val;
__isset.credentialStoreToken = true;
}

void UserResourceProfile::__set_userComputeResourcePreferences(const std::vector<UserComputeResourcePreference> & val) {
  this->userComputeResourcePreferences = val;
__isset.userComputeResourcePreferences = true;
}

void UserResourceProfile::__set_userStoragePreferences(const std::vector<UserStoragePreference> & val) {
  this->userStoragePreferences = val;
__isset.userStoragePreferences = true;
}

void UserResourceProfile::__set_identityServerTenant(const std::string& val) {
  this->identityServerTenant = val;
__isset.identityServerTenant = true;
}

void UserResourceProfile::__set_identityServerPwdCredToken(const std::string& val) {
  this->identityServerPwdCredToken = val;
__isset.identityServerPwdCredToken = true;
}

uint32_t UserResourceProfile::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_userId = false;
  bool isset_gatewayID = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userId);
          isset_userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->gatewayID);
          isset_gatewayID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->credentialStoreToken);
          this->__isset.credentialStoreToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->userComputeResourcePreferences.clear();
            uint32_t _size4;
            ::apache::thrift::protocol::TType _etype7;
            xfer += iprot->readListBegin(_etype7, _size4);
            this->userComputeResourcePreferences.resize(_size4);
            uint32_t _i8;
            for (_i8 = 0; _i8 < _size4; ++_i8)
            {
              xfer += this->userComputeResourcePreferences[_i8].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.userComputeResourcePreferences = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->userStoragePreferences.clear();
            uint32_t _size9;
            ::apache::thrift::protocol::TType _etype12;
            xfer += iprot->readListBegin(_etype12, _size9);
            this->userStoragePreferences.resize(_size9);
            uint32_t _i13;
            for (_i13 = 0; _i13 < _size9; ++_i13)
            {
              xfer += this->userStoragePreferences[_i13].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.userStoragePreferences = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->identityServerTenant);
          this->__isset.identityServerTenant = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->identityServerPwdCredToken);
          this->__isset.identityServerPwdCredToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_userId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_gatewayID)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t UserResourceProfile::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserResourceProfile");

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gatewayID", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->gatewayID);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.credentialStoreToken) {
    xfer += oprot->writeFieldBegin("credentialStoreToken", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->credentialStoreToken);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.userComputeResourcePreferences) {
    xfer += oprot->writeFieldBegin("userComputeResourcePreferences", ::apache::thrift::protocol::T_LIST, 4);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->userComputeResourcePreferences.size()));
      std::vector<UserComputeResourcePreference> ::const_iterator _iter14;
      for (_iter14 = this->userComputeResourcePreferences.begin(); _iter14 != this->userComputeResourcePreferences.end(); ++_iter14)
      {
        xfer += (*_iter14).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.userStoragePreferences) {
    xfer += oprot->writeFieldBegin("userStoragePreferences", ::apache::thrift::protocol::T_LIST, 5);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->userStoragePreferences.size()));
      std::vector<UserStoragePreference> ::const_iterator _iter15;
      for (_iter15 = this->userStoragePreferences.begin(); _iter15 != this->userStoragePreferences.end(); ++_iter15)
      {
        xfer += (*_iter15).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.identityServerTenant) {
    xfer += oprot->writeFieldBegin("identityServerTenant", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->identityServerTenant);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.identityServerPwdCredToken) {
    xfer += oprot->writeFieldBegin("identityServerPwdCredToken", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->identityServerPwdCredToken);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(UserResourceProfile &a, UserResourceProfile &b) {
  using ::std::swap;
  swap(a.userId, b.userId);
  swap(a.gatewayID, b.gatewayID);
  swap(a.credentialStoreToken, b.credentialStoreToken);
  swap(a.userComputeResourcePreferences, b.userComputeResourcePreferences);
  swap(a.userStoragePreferences, b.userStoragePreferences);
  swap(a.identityServerTenant, b.identityServerTenant);
  swap(a.identityServerPwdCredToken, b.identityServerPwdCredToken);
  swap(a.__isset, b.__isset);
}

UserResourceProfile::UserResourceProfile(const UserResourceProfile& other16) {
  userId = other16.userId;
  gatewayID = other16.gatewayID;
  credentialStoreToken = other16.credentialStoreToken;
  userComputeResourcePreferences = other16.userComputeResourcePreferences;
  userStoragePreferences = other16.userStoragePreferences;
  identityServerTenant = other16.identityServerTenant;
  identityServerPwdCredToken = other16.identityServerPwdCredToken;
  __isset = other16.__isset;
}
UserResourceProfile& UserResourceProfile::operator=(const UserResourceProfile& other17) {
  userId = other17.userId;
  gatewayID = other17.gatewayID;
  credentialStoreToken = other17.credentialStoreToken;
  userComputeResourcePreferences = other17.userComputeResourcePreferences;
  userStoragePreferences = other17.userStoragePreferences;
  identityServerTenant = other17.identityServerTenant;
  identityServerPwdCredToken = other17.identityServerPwdCredToken;
  __isset = other17.__isset;
  return *this;
}
void UserResourceProfile::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "UserResourceProfile(";
  out << "userId=" << to_string(userId);
  out << ", " << "gatewayID=" << to_string(gatewayID);
  out << ", " << "credentialStoreToken="; (__isset.credentialStoreToken ? (out << to_string(credentialStoreToken)) : (out << "<null>"));
  out << ", " << "userComputeResourcePreferences="; (__isset.userComputeResourcePreferences ? (out << to_string(userComputeResourcePreferences)) : (out << "<null>"));
  out << ", " << "userStoragePreferences="; (__isset.userStoragePreferences ? (out << to_string(userStoragePreferences)) : (out << "<null>"));
  out << ", " << "identityServerTenant="; (__isset.identityServerTenant ? (out << to_string(identityServerTenant)) : (out << "<null>"));
  out << ", " << "identityServerPwdCredToken="; (__isset.identityServerPwdCredToken ? (out << to_string(identityServerPwdCredToken)) : (out << "<null>"));
  out << ")";
}

}}}}} // namespace
