/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef DiagDeleteValueXml_h_
#define DiagDeleteValueXml_h_

namespace Caf {

	/// Streams the DiagDeleteValue class to/from XML
	namespace DiagDeleteValueXml {

		/// Adds the DiagDeleteValueDoc into the XML.
		void DIAGTYPESXML_LINKAGE add(
			const SmartPtrCDiagDeleteValueDoc diagDeleteValueDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the DiagDeleteValueDoc from the XML.
		SmartPtrCDiagDeleteValueDoc DIAGTYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif