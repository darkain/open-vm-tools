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

#ifndef CMgmtInvokeOperationCollectionDoc_h_
#define CMgmtInvokeOperationCollectionDoc_h_

namespace Caf {

/// A simple container for objects of type MgmtInvokeOperationCollection
class CMgmtInvokeOperationCollectionDoc {
public:
	CMgmtInvokeOperationCollectionDoc() :
		_isInitialized(false) {}
	virtual ~CMgmtInvokeOperationCollectionDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::deque<SmartPtrCMgmtInvokeOperationDoc> invokeOperationCollection) {
		if (! _isInitialized) {
			_invokeOperationCollection = invokeOperationCollection;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the InvokeOperation
	std::deque<SmartPtrCMgmtInvokeOperationDoc> getInvokeOperationCollection() const {
		return _invokeOperationCollection;
	}

private:
	bool _isInitialized;

	std::deque<SmartPtrCMgmtInvokeOperationDoc> _invokeOperationCollection;

private:
	CAF_CM_DECLARE_NOCOPY(CMgmtInvokeOperationCollectionDoc);
};

CAF_DECLARE_SMART_POINTER(CMgmtInvokeOperationCollectionDoc);

}

#endif
