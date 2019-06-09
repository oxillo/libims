// File generated from <vistas_config.xsd> at 2019-06-09T09:53:32
static const char* vistas_config_xsd =
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"\n"
"<!-- \n"
"    * Copyright (c) 2018 Airbus Operations S.A.S                                  *\n"
"    *                                                                             *\n"
"    * This program and the accompanying materials are made available under the    *\n"
"    * terms of the Eclipse Public License v. 2.0 which is available at            *\n"
"    * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License   *\n"
"    * v. 1.0 which is available at                                                *\n"
"    * http://www.eclipse.org/org/documents/edl-v10.php.                           *\n"
"    *                                                                             *\n"
"    * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause                            *\n"
"-->\n"
"\n"
"<xs:schema xmlns:xs=\"http://www.w3.org/2001/XMLSchema\" elementFormDefault=\"unqualified\" attributeFormDefault=\"unqualified\" version=\"1.0\">\n"
"\n"
"  <!-- Network node -->\n"
"  <xs:element name=\"Network\">\n"
"    <xs:complexType>\n"
"      <xs:sequence>\n"
"        <xs:element name=\"ControlServers\" type=\"servers-type\" minOccurs=\"0\" />\n"
"        <xs:element name=\"VirtualComponent\" type=\"virtual-component-type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      </xs:sequence>\n"
"      <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"    </xs:complexType>\n"
"  </xs:element>\n"
"\n"
"\n"
"  <!-- Servers -->\n"
"  <xs:complexType name=\"servers-type\">\n"
"    <xs:all>\n"
"      <xs:element name=\"PowerSupply\" type=\"server-type\" minOccurs=\"0\" />\n"
"      <xs:element name=\"SignalOverriding\" type=\"server-type\" minOccurs=\"0\" />\n"
"      <xs:element name=\"Synchronization\" type=\"server-type\" minOccurs=\"0\" />\n"
"      <xs:element name=\"Modes\" type=\"server-type\" minOccurs=\"0\" />\n"
"    </xs:all>\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"\n"
"  <!-- Server -->\n"
"  <xs:complexType name=\"server-type\">\n"
"    <xs:attribute name=\"IPAddress\" type=\"ip-type\" use=\"required\" />\n"
"    <xs:attribute name=\"Port\" type=\"xs:positiveInteger\" use=\"required\" />\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"\n"
"  <!-- VirtualComponent node -->\n"
"  <xs:complexType name=\"virtual-component-type\">\n"
"    <xs:choice minOccurs=\"1\" maxOccurs=\"unbounded\">\n"
"      <xs:element name=\"A429_Channel\" type=\"base-channel-type\" />\n"
"      <xs:element name=\"A664_Channel\" type=\"base-channel-type\" />\n"
"      <xs:element name=\"A825_Channel\" type=\"base-channel-type\" />\n"
"      <xs:element name=\"MIL_BUS_Channel\" type=\"base-channel-type\" />\n"
"      <xs:element name=\"Discrete_Channel\" type=\"extended-channel-type\" />\n"
"      <xs:element name=\"Analog_Channel\" type=\"extended-channel-type\" />\n"
"      <xs:element name=\"NAD_Channel\" type=\"extended-channel-type\" />\n"
"    </xs:choice>\n"
"    <xs:attribute name=\"Name\" type=\"non-empty-type\" use=\"required\" />\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"\n"
"  <xs:complexType name=\"base-channel-type\">\n"
"    <xs:sequence>\n"
"      <xs:element name=\"Socket\" type=\"socket-type\" maxOccurs=\"unbounded\" />\n"
"      <xs:element name=\"Header\" type=\"header-type\" />\n"
"    </xs:sequence>\n"
"    <xs:attribute name=\"Name\" type=\"non-empty-type\" use=\"required\" />\n"
"    <xs:attribute name=\"Direction\" type=\"direction-type\" use=\"required\" />\n"
"    <xs:attribute name=\"MessageMaxSize\" type=\"xs:positiveInteger\" use=\"required\" />\n"
"    <xs:attribute name=\"FifoSize\" type=\"xs:positiveInteger\" use=\"required\" />\n"
"    <xs:attribute name=\"Comment\" type=\"xs:string\" use=\"optional\" />\n"
"    <xs:attribute name=\"Speed\" type=\"speed-type\" use=\"optional\" />\n"
"    <xs:attribute name=\"ICD\" type=\"xs:string\" use=\"optional\" />\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"  <xs:complexType name=\"extended-channel-type\">\n"
"    <xs:complexContent>\n"
"      <xs:extension base=\"base-channel-type\">\n"
"        <xs:sequence>\n"
"          <xs:element name=\"Signals\" type=\"signals-type\" />\n"
"        </xs:sequence>\n"
"      </xs:extension>\n"
"    </xs:complexContent>\n"
"  </xs:complexType>\n"
"\n"
"  <xs:complexType name=\"socket-type\">\n"
"    <xs:attribute name=\"DstIP\" type=\"ip-type\" use=\"required\" />\n"
"    <xs:attribute name=\"DstPort\" type=\"xs:positiveInteger\" use=\"required\" />\n"
"    <xs:attribute name=\"SrcIP\" type=\"ip-type\" use=\"optional\" />\n"
"    <xs:attribute name=\"SrcPort\" type=\"xs:positiveInteger\" use=\"optional\" />\n"
"    <xs:attribute name=\"MulticastInterfaceIP\" type=\"ip-type\" use=\"optional\" />\n"
"    <xs:attribute name=\"TTL\" type=\"xs:positiveInteger\" use=\"optional\" />\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"  <xs:complexType name=\"header-type\">\n"
"    <xs:attribute name=\"Src_Id\" type=\"yes-no-type\" use=\"optional\" />\n"
"    <xs:attribute name=\"SN\" type=\"yes-no-type\" use=\"optional\" />\n"
"    <xs:attribute name=\"QoS_Timestamp\" type=\"yes-no-type\" use=\"optional\" />\n"
"    <xs:attribute name=\"Data_Timestamp\" type=\"yes-no-type\" use=\"optional\" />\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"  <xs:complexType name=\"signals-type\">\n"
"    <xs:sequence>\n"
"      <xs:element name=\"Signal\" type=\"signal-type\" maxOccurs=\"unbounded\" />\n"
"    </xs:sequence>\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"\n"
"  <xs:complexType name=\"signal-type\">\n"
"    <xs:attribute name=\"Name\" type=\"non-empty-type\" use=\"required\" />\n"
"    <xs:attribute name=\"ByteOffset\" type=\"xs:nonNegativeInteger\" use=\"required\" />\n"
"    <xs:attribute name=\"Type\" type=\"xs:string\" use=\"optional\" />\n"
"    <xs:attribute name=\"Size\" type=\"xs:positiveInteger\" use=\"optional\" />\n"
"    <xs:attribute name=\"Unit\" type=\"xs:string\" use=\"optional\" />\n"
"    <xs:anyAttribute namespace=\"##other\" processContents=\"skip\" />\n"
"  </xs:complexType>\n"
"\n"
"\n"
"\n"
"  <!-- Direction type -->\n"
"  <xs:simpleType name='direction-type'>\n"
"    <xs:restriction base=\"xs:string\">\n"
"      <xs:enumeration value=\"In\" />\n"
"      <xs:enumeration value=\"Out\" />\n"
"    </xs:restriction>\n"
"  </xs:simpleType>\n"
"\n"
"\n"
"  <!-- Yes No type -->\n"
"  <xs:simpleType name='yes-no-type'>\n"
"    <xs:restriction base=\"xs:string\">\n"
"      <xs:enumeration value=\"Yes\" />\n"
"      <xs:enumeration value=\"No\" />\n"
"    </xs:restriction>\n"
"  </xs:simpleType>\n"
"\n"
"  <xs:simpleType name='speed-type'>\n"
"    <xs:restriction base=\"xs:string\">\n"
"      <xs:enumeration value=\"Low\" />\n"
"      <xs:enumeration value=\"High\" />\n"
"    </xs:restriction>\n"
"  </xs:simpleType>\n"
"\n"
"\n"
"\n"
"  <!-- * * Standard simple types * -->\n"
"  <xs:simpleType name='non-empty-type'>\n"
"    <xs:restriction base='xs:token'>\n"
"      <xs:minLength value='1' />\n"
"    </xs:restriction>\n"
"  </xs:simpleType>\n"
"\n"
"\n"
"  <!-- * * IP type * -->\n"
"  <xs:simpleType name=\"ip-type\">\n"
"    <xs:restriction base=\"xs:string\">\n"
"      <xs:pattern value=\"([0-9]{1,3}\\.){3}[0-9]{1,3}\" />\n"
"    </xs:restriction>\n"
"  </xs:simpleType>\n"
"\n"
"\n"
"</xs:schema>\n"
"\n";
