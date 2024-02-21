//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSnapshotSender_h
#define HMDCameraSnapshotSender_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccessory.h"
#include "HMDCameraSnapshotSessionID.h"
#include "HMDDevice.h"
#include "HMFLogging-Protocol.h"

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotSender : HMFObject<HMFLogging>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id workQueue:(id)queue device:(id)device accessory:(id)accessory delegateQueue:(id)queue uniqueIdentifier:(id)identifier;
- (id)logIdentifier;
- (void)_sendImageSendFailure:(id)failure;
@end

#endif /* HMDCameraSnapshotSender_h */