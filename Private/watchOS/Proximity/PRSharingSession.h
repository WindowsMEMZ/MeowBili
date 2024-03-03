//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRSharingSession_h
#define PRSharingSession_h
@import Foundation;

#include "PRBeacon.h"
#include "PRBeaconDelegate-Protocol.h"
#include "PRProximityEstimator.h"
#include "PRProximityEstimatorDelegate-Protocol.h"
#include "PRSharingChoice.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log, PRSharingSessionDelegate;

@interface PRSharingSession : NSObject<PRProximityEstimatorDelegate, PRBeaconDelegate> {
  /* instance variables */
  NSObject<OS_os_log> *_logger;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  PRProximityEstimator *_btProxEstimator;
  NSMutableDictionary *_trackedBTPeers;
  NSMutableDictionary *_trackedBTPeersDevice;
  PRBeacon *_nearbyDaemonSession;
  BOOL _needToRestart;
  id /* block */ _reportWatchdog;
  BOOL _scoresReported;
  PRSharingChoice *_sharingChoiceEstimator;
}

@property (weak) NSObject<PRSharingSessionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)watchDogTimedOut;
- (void)startWatchDogWithDuration:(long long)duration;
- (id)initWithDelegate:(id)delegate delegateQueue:(id)queue;
- (void)startInitiating;
- (void)stopInitiating;
- (BOOL)addRssiSample:(double)sample channel:(unsigned int)channel forPeer:(id)peer peerDeviceModel:(id)model withError:(id *)error;
- (BOOL)trackNewBTPeer:(id)btpeer withDviceModel:(id)model error:(id *)error;
- (void)stopProx;
- (void)logScores:(id)scores;
- (void)estimator:(id)estimator didEstimateProximity:(long long)proximity toPeer:(id)peer;
- (void)beacon:(id)beacon didOutputRangeResults:(id)results;
- (void)beacon:(id)beacon didChangeState:(unsigned long long)state;
- (void)beacon:(id)beacon didFailWithError:(id)error;
- (void)didFailWithError:(id)error;
- (void)onNewSharingChoiceScores:(id)scores;
- (void)invokeDelegateBlock:(id /* block */)block;
@end

#endif /* PRSharingSession_h */