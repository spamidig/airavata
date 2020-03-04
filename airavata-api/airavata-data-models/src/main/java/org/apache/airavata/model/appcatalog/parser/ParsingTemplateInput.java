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
package org.apache.airavata.model.appcatalog.parser;

@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked", "unused"})
@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.10.0)")
public class ParsingTemplateInput implements org.apache.thrift.TBase<ParsingTemplateInput, ParsingTemplateInput._Fields>, java.io.Serializable, Cloneable, Comparable<ParsingTemplateInput> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("ParsingTemplateInput");

  private static final org.apache.thrift.protocol.TField ID_FIELD_DESC = new org.apache.thrift.protocol.TField("id", org.apache.thrift.protocol.TType.STRING, (short)1);
  private static final org.apache.thrift.protocol.TField TARGET_INPUT_ID_FIELD_DESC = new org.apache.thrift.protocol.TField("targetInputId", org.apache.thrift.protocol.TType.STRING, (short)2);
  private static final org.apache.thrift.protocol.TField APPLICATION_OUTPUT_NAME_FIELD_DESC = new org.apache.thrift.protocol.TField("applicationOutputName", org.apache.thrift.protocol.TType.STRING, (short)3);
  private static final org.apache.thrift.protocol.TField VALUE_FIELD_DESC = new org.apache.thrift.protocol.TField("value", org.apache.thrift.protocol.TType.STRING, (short)4);
  private static final org.apache.thrift.protocol.TField PARSING_TEMPLATE_ID_FIELD_DESC = new org.apache.thrift.protocol.TField("parsingTemplateId", org.apache.thrift.protocol.TType.STRING, (short)5);

  private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new ParsingTemplateInputStandardSchemeFactory();
  private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new ParsingTemplateInputTupleSchemeFactory();

  private java.lang.String id; // required
  private java.lang.String targetInputId; // required
  private java.lang.String applicationOutputName; // required
  private java.lang.String value; // required
  private java.lang.String parsingTemplateId; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    ID((short)1, "id"),
    TARGET_INPUT_ID((short)2, "targetInputId"),
    APPLICATION_OUTPUT_NAME((short)3, "applicationOutputName"),
    VALUE((short)4, "value"),
    PARSING_TEMPLATE_ID((short)5, "parsingTemplateId");

    private static final java.util.Map<java.lang.String, _Fields> byName = new java.util.HashMap<java.lang.String, _Fields>();

    static {
      for (_Fields field : java.util.EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // ID
          return ID;
        case 2: // TARGET_INPUT_ID
          return TARGET_INPUT_ID;
        case 3: // APPLICATION_OUTPUT_NAME
          return APPLICATION_OUTPUT_NAME;
        case 4: // VALUE
          return VALUE;
        case 5: // PARSING_TEMPLATE_ID
          return PARSING_TEMPLATE_ID;
        default:
          return null;
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, throwing an exception
     * if it is not found.
     */
    public static _Fields findByThriftIdOrThrow(int fieldId) {
      _Fields fields = findByThriftId(fieldId);
      if (fields == null) throw new java.lang.IllegalArgumentException("Field " + fieldId + " doesn't exist!");
      return fields;
    }

    /**
     * Find the _Fields constant that matches name, or null if its not found.
     */
    public static _Fields findByName(java.lang.String name) {
      return byName.get(name);
    }

    private final short _thriftId;
    private final java.lang.String _fieldName;

    _Fields(short thriftId, java.lang.String fieldName) {
      _thriftId = thriftId;
      _fieldName = fieldName;
    }

    public short getThriftFieldId() {
      return _thriftId;
    }

    public java.lang.String getFieldName() {
      return _fieldName;
    }
  }

  // isset id assignments
  public static final java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new java.util.EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.ID, new org.apache.thrift.meta_data.FieldMetaData("id", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.TARGET_INPUT_ID, new org.apache.thrift.meta_data.FieldMetaData("targetInputId", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.APPLICATION_OUTPUT_NAME, new org.apache.thrift.meta_data.FieldMetaData("applicationOutputName", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.VALUE, new org.apache.thrift.meta_data.FieldMetaData("value", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.PARSING_TEMPLATE_ID, new org.apache.thrift.meta_data.FieldMetaData("parsingTemplateId", org.apache.thrift.TFieldRequirementType.REQUIRED, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(ParsingTemplateInput.class, metaDataMap);
  }

  public ParsingTemplateInput() {
  }

  public ParsingTemplateInput(
    java.lang.String id,
    java.lang.String targetInputId,
    java.lang.String applicationOutputName,
    java.lang.String value,
    java.lang.String parsingTemplateId)
  {
    this();
    this.id = id;
    this.targetInputId = targetInputId;
    this.applicationOutputName = applicationOutputName;
    this.value = value;
    this.parsingTemplateId = parsingTemplateId;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public ParsingTemplateInput(ParsingTemplateInput other) {
    if (other.isSetId()) {
      this.id = other.id;
    }
    if (other.isSetTargetInputId()) {
      this.targetInputId = other.targetInputId;
    }
    if (other.isSetApplicationOutputName()) {
      this.applicationOutputName = other.applicationOutputName;
    }
    if (other.isSetValue()) {
      this.value = other.value;
    }
    if (other.isSetParsingTemplateId()) {
      this.parsingTemplateId = other.parsingTemplateId;
    }
  }

  public ParsingTemplateInput deepCopy() {
    return new ParsingTemplateInput(this);
  }

  @Override
  public void clear() {
    this.id = null;
    this.targetInputId = null;
    this.applicationOutputName = null;
    this.value = null;
    this.parsingTemplateId = null;
  }

  public java.lang.String getId() {
    return this.id;
  }

  public void setId(java.lang.String id) {
    this.id = id;
  }

  public void unsetId() {
    this.id = null;
  }

  /** Returns true if field id is set (has been assigned a value) and false otherwise */
  public boolean isSetId() {
    return this.id != null;
  }

  public void setIdIsSet(boolean value) {
    if (!value) {
      this.id = null;
    }
  }

  public java.lang.String getTargetInputId() {
    return this.targetInputId;
  }

  public void setTargetInputId(java.lang.String targetInputId) {
    this.targetInputId = targetInputId;
  }

  public void unsetTargetInputId() {
    this.targetInputId = null;
  }

  /** Returns true if field targetInputId is set (has been assigned a value) and false otherwise */
  public boolean isSetTargetInputId() {
    return this.targetInputId != null;
  }

  public void setTargetInputIdIsSet(boolean value) {
    if (!value) {
      this.targetInputId = null;
    }
  }

  public java.lang.String getApplicationOutputName() {
    return this.applicationOutputName;
  }

  public void setApplicationOutputName(java.lang.String applicationOutputName) {
    this.applicationOutputName = applicationOutputName;
  }

  public void unsetApplicationOutputName() {
    this.applicationOutputName = null;
  }

  /** Returns true if field applicationOutputName is set (has been assigned a value) and false otherwise */
  public boolean isSetApplicationOutputName() {
    return this.applicationOutputName != null;
  }

  public void setApplicationOutputNameIsSet(boolean value) {
    if (!value) {
      this.applicationOutputName = null;
    }
  }

  public java.lang.String getValue() {
    return this.value;
  }

  public void setValue(java.lang.String value) {
    this.value = value;
  }

  public void unsetValue() {
    this.value = null;
  }

  /** Returns true if field value is set (has been assigned a value) and false otherwise */
  public boolean isSetValue() {
    return this.value != null;
  }

  public void setValueIsSet(boolean value) {
    if (!value) {
      this.value = null;
    }
  }

  public java.lang.String getParsingTemplateId() {
    return this.parsingTemplateId;
  }

  public void setParsingTemplateId(java.lang.String parsingTemplateId) {
    this.parsingTemplateId = parsingTemplateId;
  }

  public void unsetParsingTemplateId() {
    this.parsingTemplateId = null;
  }

  /** Returns true if field parsingTemplateId is set (has been assigned a value) and false otherwise */
  public boolean isSetParsingTemplateId() {
    return this.parsingTemplateId != null;
  }

  public void setParsingTemplateIdIsSet(boolean value) {
    if (!value) {
      this.parsingTemplateId = null;
    }
  }

  public void setFieldValue(_Fields field, java.lang.Object value) {
    switch (field) {
    case ID:
      if (value == null) {
        unsetId();
      } else {
        setId((java.lang.String)value);
      }
      break;

    case TARGET_INPUT_ID:
      if (value == null) {
        unsetTargetInputId();
      } else {
        setTargetInputId((java.lang.String)value);
      }
      break;

    case APPLICATION_OUTPUT_NAME:
      if (value == null) {
        unsetApplicationOutputName();
      } else {
        setApplicationOutputName((java.lang.String)value);
      }
      break;

    case VALUE:
      if (value == null) {
        unsetValue();
      } else {
        setValue((java.lang.String)value);
      }
      break;

    case PARSING_TEMPLATE_ID:
      if (value == null) {
        unsetParsingTemplateId();
      } else {
        setParsingTemplateId((java.lang.String)value);
      }
      break;

    }
  }

  public java.lang.Object getFieldValue(_Fields field) {
    switch (field) {
    case ID:
      return getId();

    case TARGET_INPUT_ID:
      return getTargetInputId();

    case APPLICATION_OUTPUT_NAME:
      return getApplicationOutputName();

    case VALUE:
      return getValue();

    case PARSING_TEMPLATE_ID:
      return getParsingTemplateId();

    }
    throw new java.lang.IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new java.lang.IllegalArgumentException();
    }

    switch (field) {
    case ID:
      return isSetId();
    case TARGET_INPUT_ID:
      return isSetTargetInputId();
    case APPLICATION_OUTPUT_NAME:
      return isSetApplicationOutputName();
    case VALUE:
      return isSetValue();
    case PARSING_TEMPLATE_ID:
      return isSetParsingTemplateId();
    }
    throw new java.lang.IllegalStateException();
  }

  @Override
  public boolean equals(java.lang.Object that) {
    if (that == null)
      return false;
    if (that instanceof ParsingTemplateInput)
      return this.equals((ParsingTemplateInput)that);
    return false;
  }

  public boolean equals(ParsingTemplateInput that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_id = true && this.isSetId();
    boolean that_present_id = true && that.isSetId();
    if (this_present_id || that_present_id) {
      if (!(this_present_id && that_present_id))
        return false;
      if (!this.id.equals(that.id))
        return false;
    }

    boolean this_present_targetInputId = true && this.isSetTargetInputId();
    boolean that_present_targetInputId = true && that.isSetTargetInputId();
    if (this_present_targetInputId || that_present_targetInputId) {
      if (!(this_present_targetInputId && that_present_targetInputId))
        return false;
      if (!this.targetInputId.equals(that.targetInputId))
        return false;
    }

    boolean this_present_applicationOutputName = true && this.isSetApplicationOutputName();
    boolean that_present_applicationOutputName = true && that.isSetApplicationOutputName();
    if (this_present_applicationOutputName || that_present_applicationOutputName) {
      if (!(this_present_applicationOutputName && that_present_applicationOutputName))
        return false;
      if (!this.applicationOutputName.equals(that.applicationOutputName))
        return false;
    }

    boolean this_present_value = true && this.isSetValue();
    boolean that_present_value = true && that.isSetValue();
    if (this_present_value || that_present_value) {
      if (!(this_present_value && that_present_value))
        return false;
      if (!this.value.equals(that.value))
        return false;
    }

    boolean this_present_parsingTemplateId = true && this.isSetParsingTemplateId();
    boolean that_present_parsingTemplateId = true && that.isSetParsingTemplateId();
    if (this_present_parsingTemplateId || that_present_parsingTemplateId) {
      if (!(this_present_parsingTemplateId && that_present_parsingTemplateId))
        return false;
      if (!this.parsingTemplateId.equals(that.parsingTemplateId))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    int hashCode = 1;

    hashCode = hashCode * 8191 + ((isSetId()) ? 131071 : 524287);
    if (isSetId())
      hashCode = hashCode * 8191 + id.hashCode();

    hashCode = hashCode * 8191 + ((isSetTargetInputId()) ? 131071 : 524287);
    if (isSetTargetInputId())
      hashCode = hashCode * 8191 + targetInputId.hashCode();

    hashCode = hashCode * 8191 + ((isSetApplicationOutputName()) ? 131071 : 524287);
    if (isSetApplicationOutputName())
      hashCode = hashCode * 8191 + applicationOutputName.hashCode();

    hashCode = hashCode * 8191 + ((isSetValue()) ? 131071 : 524287);
    if (isSetValue())
      hashCode = hashCode * 8191 + value.hashCode();

    hashCode = hashCode * 8191 + ((isSetParsingTemplateId()) ? 131071 : 524287);
    if (isSetParsingTemplateId())
      hashCode = hashCode * 8191 + parsingTemplateId.hashCode();

    return hashCode;
  }

  @Override
  public int compareTo(ParsingTemplateInput other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = java.lang.Boolean.valueOf(isSetId()).compareTo(other.isSetId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.id, other.id);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetTargetInputId()).compareTo(other.isSetTargetInputId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetTargetInputId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.targetInputId, other.targetInputId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetApplicationOutputName()).compareTo(other.isSetApplicationOutputName());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetApplicationOutputName()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.applicationOutputName, other.applicationOutputName);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetValue()).compareTo(other.isSetValue());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetValue()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.value, other.value);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetParsingTemplateId()).compareTo(other.isSetParsingTemplateId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetParsingTemplateId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.parsingTemplateId, other.parsingTemplateId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  public _Fields fieldForId(int fieldId) {
    return _Fields.findByThriftId(fieldId);
  }

  public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
    scheme(iprot).read(iprot, this);
  }

  public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
    scheme(oprot).write(oprot, this);
  }

  @Override
  public java.lang.String toString() {
    java.lang.StringBuilder sb = new java.lang.StringBuilder("ParsingTemplateInput(");
    boolean first = true;

    sb.append("id:");
    if (this.id == null) {
      sb.append("null");
    } else {
      sb.append(this.id);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("targetInputId:");
    if (this.targetInputId == null) {
      sb.append("null");
    } else {
      sb.append(this.targetInputId);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("applicationOutputName:");
    if (this.applicationOutputName == null) {
      sb.append("null");
    } else {
      sb.append(this.applicationOutputName);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("value:");
    if (this.value == null) {
      sb.append("null");
    } else {
      sb.append(this.value);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("parsingTemplateId:");
    if (this.parsingTemplateId == null) {
      sb.append("null");
    } else {
      sb.append(this.parsingTemplateId);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    if (!isSetId()) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'id' is unset! Struct:" + toString());
    }

    if (!isSetTargetInputId()) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'targetInputId' is unset! Struct:" + toString());
    }

    if (!isSetParsingTemplateId()) {
      throw new org.apache.thrift.protocol.TProtocolException("Required field 'parsingTemplateId' is unset! Struct:" + toString());
    }

    // check for sub-struct validity
  }

  private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
    try {
      write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, java.lang.ClassNotFoundException {
    try {
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class ParsingTemplateInputStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public ParsingTemplateInputStandardScheme getScheme() {
      return new ParsingTemplateInputStandardScheme();
    }
  }

  private static class ParsingTemplateInputStandardScheme extends org.apache.thrift.scheme.StandardScheme<ParsingTemplateInput> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, ParsingTemplateInput struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.id = iprot.readString();
              struct.setIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // TARGET_INPUT_ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.targetInputId = iprot.readString();
              struct.setTargetInputIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // APPLICATION_OUTPUT_NAME
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.applicationOutputName = iprot.readString();
              struct.setApplicationOutputNameIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // VALUE
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.value = iprot.readString();
              struct.setValueIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // PARSING_TEMPLATE_ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.parsingTemplateId = iprot.readString();
              struct.setParsingTemplateIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          default:
            org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, ParsingTemplateInput struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.id != null) {
        oprot.writeFieldBegin(ID_FIELD_DESC);
        oprot.writeString(struct.id);
        oprot.writeFieldEnd();
      }
      if (struct.targetInputId != null) {
        oprot.writeFieldBegin(TARGET_INPUT_ID_FIELD_DESC);
        oprot.writeString(struct.targetInputId);
        oprot.writeFieldEnd();
      }
      if (struct.applicationOutputName != null) {
        oprot.writeFieldBegin(APPLICATION_OUTPUT_NAME_FIELD_DESC);
        oprot.writeString(struct.applicationOutputName);
        oprot.writeFieldEnd();
      }
      if (struct.value != null) {
        oprot.writeFieldBegin(VALUE_FIELD_DESC);
        oprot.writeString(struct.value);
        oprot.writeFieldEnd();
      }
      if (struct.parsingTemplateId != null) {
        oprot.writeFieldBegin(PARSING_TEMPLATE_ID_FIELD_DESC);
        oprot.writeString(struct.parsingTemplateId);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class ParsingTemplateInputTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public ParsingTemplateInputTupleScheme getScheme() {
      return new ParsingTemplateInputTupleScheme();
    }
  }

  private static class ParsingTemplateInputTupleScheme extends org.apache.thrift.scheme.TupleScheme<ParsingTemplateInput> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, ParsingTemplateInput struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      oprot.writeString(struct.id);
      oprot.writeString(struct.targetInputId);
      oprot.writeString(struct.parsingTemplateId);
      java.util.BitSet optionals = new java.util.BitSet();
      if (struct.isSetApplicationOutputName()) {
        optionals.set(0);
      }
      if (struct.isSetValue()) {
        optionals.set(1);
      }
      oprot.writeBitSet(optionals, 2);
      if (struct.isSetApplicationOutputName()) {
        oprot.writeString(struct.applicationOutputName);
      }
      if (struct.isSetValue()) {
        oprot.writeString(struct.value);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, ParsingTemplateInput struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      struct.id = iprot.readString();
      struct.setIdIsSet(true);
      struct.targetInputId = iprot.readString();
      struct.setTargetInputIdIsSet(true);
      struct.parsingTemplateId = iprot.readString();
      struct.setParsingTemplateIdIsSet(true);
      java.util.BitSet incoming = iprot.readBitSet(2);
      if (incoming.get(0)) {
        struct.applicationOutputName = iprot.readString();
        struct.setApplicationOutputNameIsSet(true);
      }
      if (incoming.get(1)) {
        struct.value = iprot.readString();
        struct.setValueIsSet(true);
      }
    }
  }

  private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
    return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
  }
}

