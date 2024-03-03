//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDResidentCommunicationHandler_h
#define HMDResidentCommunicationHandler_h
@import Foundation;

#include "HMFObject.h"
#include "HMDDevice.h"
#include "HMDMessageDispatcher.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSMapTable, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDResidentCommunicationHandler : HMFObject<HMFLogging, HMFTimerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMapTable *deviceMapping;
@property (readonly, nonatomic) NSMutableArray *pendingReadRequests;
@property (readonly, nonatomic) NSMapTable *dispatchedReadRequests;
@property (retain, nonatomic) HMFTimer *multiReadCoalesceTimer;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) BOOL ownerUser;
@property (readonly, weak, nonatomic) HMDMessageDispatcher *remoteDispatcher;
@property (nonatomic) int numOutstandingReadRequests;
@property (readonly, nonatomic) HMDDevice *preferredDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_processResponseForMultireadRequest:(id)request overallError:(id)error response:(id)response;
+ (id)createResponseSubset:(id)subset overallError:(id)error readRequest:(id)request error:(id *)error;
+ (void)_clearAllGeneratedRequests:(id)requests error:(id)error;
+ (void)_clearAllPendingRequests:(id)requests error:(id)error;
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home remoteDispatcher:(id)dispatcher;
- (void)dealloc;
- (void)setDevice:(id)device forType:(long long)type;
- (void)removeDeviceForType:(long long)type;
- (BOOL)containsDevice:(id)device;
- (id)deviceForType:(long long)type;
- (long long)preferredDeviceType;
- (void)redispatchMessage:(id)message target:(id)target responseQueue:(id)queue;
- (void)timerDidFire:(id)fire;
- (void)_sendMultipleCharacteristicRead;
- (void)_processResponse:(id)response overallError:(id)error messageIdentifier:(id)identifier;
- (id)logIdentifier;
- (BOOL)isOwnerUser;
@end

#endif /* HMDResidentCommunicationHandler_h */