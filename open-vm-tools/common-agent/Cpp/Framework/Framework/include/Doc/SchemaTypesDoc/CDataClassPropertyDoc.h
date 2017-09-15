/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CDataClassPropertyDoc_h_
#define CDataClassPropertyDoc_h_

namespace Caf {

/// A simple container for objects of type DataClassProperty
class CDataClassPropertyDoc {
public:
	CDataClassPropertyDoc() :
		_isInitialized(false) {}
	virtual ~CDataClassPropertyDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string name,
		const std::deque<SmartPtrCCmdlMetadataDoc> cmdlMetadata,
		const std::string value) {
		if (! _isInitialized) {
			_name = name;
			_cmdlMetadata = cmdlMetadata;
			_value = value;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the Name
	std::string getName() const {
		return _name;
	}

	/// Accessor for the CmdlMetadata
	std::deque<SmartPtrCCmdlMetadataDoc> getCmdlMetadata() const {
		return _cmdlMetadata;
	}

	/// Accessor for the Value
	std::string getValue() const {
		return _value;
	}

private:
	bool _isInitialized;

	std::string _name;
	std::deque<SmartPtrCCmdlMetadataDoc> _cmdlMetadata;
	std::string _value;

private:
	CAF_CM_DECLARE_NOCOPY(CDataClassPropertyDoc);
};

CAF_DECLARE_SMART_POINTER(CDataClassPropertyDoc);

}

#endif
