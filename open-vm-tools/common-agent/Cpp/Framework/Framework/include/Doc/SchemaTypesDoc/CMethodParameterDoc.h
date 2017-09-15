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

#ifndef CMethodParameterDoc_h_
#define CMethodParameterDoc_h_

namespace Caf {

/// A parameter containing a simple type used by a method to control the outcome
class CMethodParameterDoc {
public:
	CMethodParameterDoc() :
		_type(PARAMETER_NONE),
		_isOptional(false),
		_isList(false),
		_isInitialized(false) {}
	virtual ~CMethodParameterDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string name,
		const PARAMETER_TYPE type,
		const bool isOptional = false,
		const bool isList = false,
		const std::string defaultVal = std::string(),
		const std::string displayName = std::string(),
		const std::string description = std::string()) {
		if (! _isInitialized) {
			_name = name;
			_type = type;
			_isOptional = isOptional;
			_isList = isList;
			_defaultVal = defaultVal;
			_displayName = displayName;
			_description = description;

			_isInitialized = true;
		}
	}

public:
	/// Name of parameter
	std::string getName() const {
		return _name;
	}

	/// Describes the data type of the property
	PARAMETER_TYPE getType() const {
		return _type;
	}

	/// Indicates this parameter need not be passed
	bool getIsOptional() const {
		return _isOptional;
	}

	/// Indicates whether to expect a list of values as opposed to a single value (the default if this attribute is not present)
	bool getIsList() const {
		return _isList;
	}

	/// Accessor for the DefaultVal
	std::string getDefaultVal() const {
		return _defaultVal;
	}

	/// Human-readable version of the parameter name
	std::string getDisplayName() const {
		return _displayName;
	}

	/// Short description of what the parameter is for
	std::string getDescription() const {
		return _description;
	}

private:
	std::string _name;
	PARAMETER_TYPE _type;
	bool _isOptional;
	bool _isList;
	std::string _defaultVal;
	std::string _displayName;
	std::string _description;
	bool _isInitialized;

private:
	CAF_CM_DECLARE_NOCOPY(CMethodParameterDoc);
};

CAF_DECLARE_SMART_POINTER(CMethodParameterDoc);

}

#endif
