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

#ifndef CStatisticsDoc_h_
#define CStatisticsDoc_h_

namespace Caf {

/// A simple container for objects of type Statistics
class CStatisticsDoc {
public:
	CStatisticsDoc() :
		_providerJobNum(0),
		_providerJobTotal(0),
		_providerJobDurationSecs(0),
		_pmeNum(0),
		_pmeTotal(0),
		_pmeDurationSecs(0),
		_isInitialized(false) {}
	virtual ~CStatisticsDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const SmartPtrCPropertyCollectionDoc propertyCollection,
		const int32 providerJobNum,
		const int32 providerJobTotal,
		const int32 providerJobDurationSecs,
		const int32 pmeNum,
		const int32 pmeTotal,
		const int32 pmeDurationSecs) {
		if (! _isInitialized) {
			_propertyCollection = propertyCollection;
			_providerJobNum = providerJobNum;
			_providerJobTotal = providerJobTotal;
			_providerJobDurationSecs = providerJobDurationSecs;
			_pmeNum = pmeNum;
			_pmeTotal = pmeTotal;
			_pmeDurationSecs = pmeDurationSecs;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the PropertyCollection
	SmartPtrCPropertyCollectionDoc getPropertyCollection() const {
		return _propertyCollection;
	}

	/// Accessor for the ProviderJobNum
	int32 getProviderJobNum() const {
		return _providerJobNum;
	}

	/// Accessor for the ProviderJobTotal
	int32 getProviderJobTotal() const {
		return _providerJobTotal;
	}

	/// Accessor for the ProviderJobDurationSecs
	int32 getProviderJobDurationSecs() const {
		return _providerJobDurationSecs;
	}

	/// Accessor for the PmeNum
	int32 getPmeNum() const {
		return _pmeNum;
	}

	/// Accessor for the PmeTotal
	int32 getPmeTotal() const {
		return _pmeTotal;
	}

	/// Accessor for the PmeDurationSecs
	int32 getPmeDurationSecs() const {
		return _pmeDurationSecs;
	}

private:
	SmartPtrCPropertyCollectionDoc _propertyCollection;
	int32 _providerJobNum;
	int32 _providerJobTotal;
	int32 _providerJobDurationSecs;
	int32 _pmeNum;
	int32 _pmeTotal;
	int32 _pmeDurationSecs;
	bool _isInitialized;

private:
	CAF_CM_DECLARE_NOCOPY(CStatisticsDoc);
};

CAF_DECLARE_SMART_POINTER(CStatisticsDoc);

}

#endif
