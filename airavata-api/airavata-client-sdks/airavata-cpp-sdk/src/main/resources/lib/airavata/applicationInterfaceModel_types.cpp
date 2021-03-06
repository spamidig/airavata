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
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "applicationInterfaceModel_types.h"

#include <algorithm>

namespace apache { namespace airavata { namespace model { namespace appcatalog { namespace appinterface {

int _kDataTypeValues[] = {
  DataType::STRING,
  DataType::INTEGER,
  DataType::FLOAT,
  DataType::URI,
  DataType::STDOUT,
  DataType::STDERR
};
const char* _kDataTypeNames[] = {
  "STRING",
  "INTEGER",
  "FLOAT",
  "URI",
  "STDOUT",
  "STDERR"
};
const std::map<int, const char*> _DataType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kDataTypeValues, _kDataTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* InputDataObjectType::ascii_fingerprint = "22DB8CAA7C1FBBFDD0CA6E19790BA799";
const uint8_t InputDataObjectType::binary_fingerprint[16] = {0x22,0xDB,0x8C,0xAA,0x7C,0x1F,0xBB,0xFD,0xD0,0xCA,0x6E,0x19,0x79,0x0B,0xA7,0x99};

uint32_t InputDataObjectType::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_name = false;

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
          xfer += iprot->readString(this->name);
          isset_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type = (DataType::type)ecast0;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationArgument);
          this->__isset.applicationArgument = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->standardInput);
          this->__isset.standardInput = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userFriendlyDescription);
          this->__isset.userFriendlyDescription = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->metaData);
          this->__isset.metaData = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->inputOrder);
          this->__isset.inputOrder = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isRequired);
          this->__isset.isRequired = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->requiredToAddedToCommandLine);
          this->__isset.requiredToAddedToCommandLine = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->dataStaged);
          this->__isset.dataStaged = true;
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

  if (!isset_name)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t InputDataObjectType::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("InputDataObjectType");

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.value) {
    xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->value);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.type) {
    xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32((int32_t)this->type);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.applicationArgument) {
    xfer += oprot->writeFieldBegin("applicationArgument", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->applicationArgument);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.standardInput) {
    xfer += oprot->writeFieldBegin("standardInput", ::apache::thrift::protocol::T_BOOL, 5);
    xfer += oprot->writeBool(this->standardInput);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.userFriendlyDescription) {
    xfer += oprot->writeFieldBegin("userFriendlyDescription", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->userFriendlyDescription);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.metaData) {
    xfer += oprot->writeFieldBegin("metaData", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->metaData);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.inputOrder) {
    xfer += oprot->writeFieldBegin("inputOrder", ::apache::thrift::protocol::T_I32, 8);
    xfer += oprot->writeI32(this->inputOrder);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.isRequired) {
    xfer += oprot->writeFieldBegin("isRequired", ::apache::thrift::protocol::T_BOOL, 9);
    xfer += oprot->writeBool(this->isRequired);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.requiredToAddedToCommandLine) {
    xfer += oprot->writeFieldBegin("requiredToAddedToCommandLine", ::apache::thrift::protocol::T_BOOL, 10);
    xfer += oprot->writeBool(this->requiredToAddedToCommandLine);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.dataStaged) {
    xfer += oprot->writeFieldBegin("dataStaged", ::apache::thrift::protocol::T_BOOL, 11);
    xfer += oprot->writeBool(this->dataStaged);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InputDataObjectType &a, InputDataObjectType &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.value, b.value);
  swap(a.type, b.type);
  swap(a.applicationArgument, b.applicationArgument);
  swap(a.standardInput, b.standardInput);
  swap(a.userFriendlyDescription, b.userFriendlyDescription);
  swap(a.metaData, b.metaData);
  swap(a.inputOrder, b.inputOrder);
  swap(a.isRequired, b.isRequired);
  swap(a.requiredToAddedToCommandLine, b.requiredToAddedToCommandLine);
  swap(a.dataStaged, b.dataStaged);
  swap(a.__isset, b.__isset);
}

const char* OutputDataObjectType::ascii_fingerprint = "3259D81CA906AEEBC4D76ED47386A18B";
const uint8_t OutputDataObjectType::binary_fingerprint[16] = {0x32,0x59,0xD8,0x1C,0xA9,0x06,0xAE,0xEB,0xC4,0xD7,0x6E,0xD4,0x73,0x86,0xA1,0x8B};

uint32_t OutputDataObjectType::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_name = false;

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
          xfer += iprot->readString(this->name);
          isset_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->type = (DataType::type)ecast1;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationArgument);
          this->__isset.applicationArgument = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isRequired);
          this->__isset.isRequired = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->requiredToAddedToCommandLine);
          this->__isset.requiredToAddedToCommandLine = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->dataMovement);
          this->__isset.dataMovement = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->location);
          this->__isset.location = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->searchQuery);
          this->__isset.searchQuery = true;
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

  if (!isset_name)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t OutputDataObjectType::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("OutputDataObjectType");

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.value) {
    xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->value);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.type) {
    xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32((int32_t)this->type);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.applicationArgument) {
    xfer += oprot->writeFieldBegin("applicationArgument", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->applicationArgument);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.isRequired) {
    xfer += oprot->writeFieldBegin("isRequired", ::apache::thrift::protocol::T_BOOL, 5);
    xfer += oprot->writeBool(this->isRequired);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.requiredToAddedToCommandLine) {
    xfer += oprot->writeFieldBegin("requiredToAddedToCommandLine", ::apache::thrift::protocol::T_BOOL, 6);
    xfer += oprot->writeBool(this->requiredToAddedToCommandLine);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.dataMovement) {
    xfer += oprot->writeFieldBegin("dataMovement", ::apache::thrift::protocol::T_BOOL, 7);
    xfer += oprot->writeBool(this->dataMovement);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.location) {
    xfer += oprot->writeFieldBegin("location", ::apache::thrift::protocol::T_STRING, 8);
    xfer += oprot->writeString(this->location);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.searchQuery) {
    xfer += oprot->writeFieldBegin("searchQuery", ::apache::thrift::protocol::T_STRING, 9);
    xfer += oprot->writeString(this->searchQuery);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OutputDataObjectType &a, OutputDataObjectType &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.value, b.value);
  swap(a.type, b.type);
  swap(a.applicationArgument, b.applicationArgument);
  swap(a.isRequired, b.isRequired);
  swap(a.requiredToAddedToCommandLine, b.requiredToAddedToCommandLine);
  swap(a.dataMovement, b.dataMovement);
  swap(a.location, b.location);
  swap(a.searchQuery, b.searchQuery);
  swap(a.__isset, b.__isset);
}

const char* ApplicationInterfaceDescription::ascii_fingerprint = "C21011258B830B950ECA4A73DCB61630";
const uint8_t ApplicationInterfaceDescription::binary_fingerprint[16] = {0xC2,0x10,0x11,0x25,0x8B,0x83,0x0B,0x95,0x0E,0xCA,0x4A,0x73,0xDC,0xB6,0x16,0x30};

uint32_t ApplicationInterfaceDescription::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_applicationInterfaceId = false;
  bool isset_applicationName = false;

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
          xfer += iprot->readString(this->applicationInterfaceId);
          isset_applicationInterfaceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationName);
          isset_applicationName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->applicationDescription);
          this->__isset.applicationDescription = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->applicationModules.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->applicationModules.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += iprot->readString(this->applicationModules[_i6]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.applicationModules = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->applicationInputs.clear();
            uint32_t _size7;
            ::apache::thrift::protocol::TType _etype10;
            xfer += iprot->readListBegin(_etype10, _size7);
            this->applicationInputs.resize(_size7);
            uint32_t _i11;
            for (_i11 = 0; _i11 < _size7; ++_i11)
            {
              xfer += this->applicationInputs[_i11].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.applicationInputs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->applicationOutputs.clear();
            uint32_t _size12;
            ::apache::thrift::protocol::TType _etype15;
            xfer += iprot->readListBegin(_etype15, _size12);
            this->applicationOutputs.resize(_size12);
            uint32_t _i16;
            for (_i16 = 0; _i16 < _size12; ++_i16)
            {
              xfer += this->applicationOutputs[_i16].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.applicationOutputs = true;
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

  if (!isset_applicationInterfaceId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_applicationName)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ApplicationInterfaceDescription::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ApplicationInterfaceDescription");

  xfer += oprot->writeFieldBegin("applicationInterfaceId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->applicationInterfaceId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.applicationDescription) {
    xfer += oprot->writeFieldBegin("applicationDescription", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->applicationDescription);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.applicationModules) {
    xfer += oprot->writeFieldBegin("applicationModules", ::apache::thrift::protocol::T_LIST, 4);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->applicationModules.size()));
      std::vector<std::string> ::const_iterator _iter17;
      for (_iter17 = this->applicationModules.begin(); _iter17 != this->applicationModules.end(); ++_iter17)
      {
        xfer += oprot->writeString((*_iter17));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.applicationInputs) {
    xfer += oprot->writeFieldBegin("applicationInputs", ::apache::thrift::protocol::T_LIST, 5);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->applicationInputs.size()));
      std::vector<InputDataObjectType> ::const_iterator _iter18;
      for (_iter18 = this->applicationInputs.begin(); _iter18 != this->applicationInputs.end(); ++_iter18)
      {
        xfer += (*_iter18).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.applicationOutputs) {
    xfer += oprot->writeFieldBegin("applicationOutputs", ::apache::thrift::protocol::T_LIST, 6);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->applicationOutputs.size()));
      std::vector<OutputDataObjectType> ::const_iterator _iter19;
      for (_iter19 = this->applicationOutputs.begin(); _iter19 != this->applicationOutputs.end(); ++_iter19)
      {
        xfer += (*_iter19).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ApplicationInterfaceDescription &a, ApplicationInterfaceDescription &b) {
  using ::std::swap;
  swap(a.applicationInterfaceId, b.applicationInterfaceId);
  swap(a.applicationName, b.applicationName);
  swap(a.applicationDescription, b.applicationDescription);
  swap(a.applicationModules, b.applicationModules);
  swap(a.applicationInputs, b.applicationInputs);
  swap(a.applicationOutputs, b.applicationOutputs);
  swap(a.__isset, b.__isset);
}

}}}}} // namespace
