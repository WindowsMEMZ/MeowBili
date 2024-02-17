//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraRecordingBulkSendSessionReader_h
#define HMDCameraRecordingBulkSendSessionReader_h
@import Foundation;

#include "HMFObject.h"
#include "HMDDataStreamBulkSendSession-Protocol.h"
#include "HMDDataStreamFragmentAssembler.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSString;
@protocol HMDCameraRecordingBulkSendSessionReaderDelegate, OS_dispatch_queue;

@interface HMDCameraRecordingBulkSendSessionReader : HMFObject<HMFTimerDelegate, HMFLogging> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  HMFTimer *_readCallbackTimer;
  HMDDataStreamFragmentAssembler *_fragmentChunkAssembler;
}

@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSObject<HMDDataStreamBulkSendSession> *session;
@property (weak) NSObject<HMDCameraRecordingBulkSendSessionReaderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithWorkQueue:(id)queue session:(id)session readTimeout:(double)timeout logIdentifier:(id)identifier;
- (id)initWithWorkQueue:(id)queue session:(id)session readCallbackTimer:(id)timer logIdentifier:(id)identifier;
- (void)start;
- (void)stopWithReason:(unsigned short)reason;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDCameraRecordingBulkSendSessionReader_h */