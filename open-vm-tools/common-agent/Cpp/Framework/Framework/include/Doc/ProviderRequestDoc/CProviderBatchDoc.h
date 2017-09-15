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

#ifndef CProviderBatchDoc_h_
#define CProviderBatchDoc_h_

namespace Caf {

/// A simple container for objects of type ProviderBatch
class CProviderBatchDoc {
public:
	CProviderBatchDoc() :
		_isInitialized(false) {}
	virtual ~CProviderBatchDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string outputDir,
		const SmartPtrCProviderCollectInstancesCollectionDoc collectInstancesCollection,
		const SmartPtrCProviderInvokeOperationCollectionDoc invokeOperationCollection) {
		if (! _isInitialized) {
			_outputDir = outputDir;
			_collectInstancesCollection = collectInstancesCollection;
			_invokeOperationCollection = invokeOperationCollection;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the OutputDir
	std::string getOutputDir() const {
		return _outputDir;
	}

	/// Accessor for the CollectInstancesCollection
	SmartPtrCProviderCollectInstancesCollectionDoc getCollectInstancesCollection() const {
		return _collectInstancesCollection;
	}

	/// Accessor for the InvokeOperationCollection
	SmartPtrCProviderInvokeOperationCollectionDoc getInvokeOperationCollection() const {
		return _invokeOperationCollection;
	}

private:
	bool _isInitialized;

	std::string _outputDir;
	SmartPtrCProviderCollectInstancesCollectionDoc _collectInstancesCollection;
	SmartPtrCProviderInvokeOperationCollectionDoc _invokeOperationCollection;

private:
	CAF_CM_DECLARE_NOCOPY(CProviderBatchDoc);
};

CAF_DECLARE_SMART_POINTER(CProviderBatchDoc);

}

#endif
