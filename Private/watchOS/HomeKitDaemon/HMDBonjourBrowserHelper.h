//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBonjourBrowserHelper_h
#define HMDBonjourBrowserHelper_h
@import Foundation;

#include "HMFObject.h"
#include "HMFNetServiceBrowserDelegate-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMDBonjourBrowserHelper : HMFObject<HMFNetServiceBrowserDelegate, HMFTimerDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) double browsingInterval;
@property (nonatomic) double browsingPeriodicity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) NSMutableArray *browsers;
@property (retain, nonatomic) NSDictionary *latestDiscoveredServices;
@property (retain, nonatomic) NSMutableDictionary *internalDiscoveredServices;
@property (retain, nonatomic) NSMutableArray *browsingCompletions;
@property (readonly, nonatomic) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServicesOfTypes:(id)types browsingTimeInterval:(double)interval browsingPeriodicity:(double)periodicity workQueue:(id)queue;
- (void)startWithBrowsingCompletion:(id /* block */)completion;
- (BOOL)_startBrowsers;
- (void)stop;
- (void)_stopBrowsers;
- (unsigned long long)discoveredServicesCountForServiceType:(id)type;
- (BOOL)isStarted;
- (void)_addBrowser:(id)browser;
- (void)_removeBrowser:(id)browser;
- (void)_updateTimerWithTimeout:(double)timeout;
- (void)timerDidFire:(id)fire;
- (void)netServiceBrowser:(id)browser didAddService:(id)service;
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service;
- (void)netServiceBrowser:(id)browser didStopBrowsingWithError:(id)error;
@end

#endif /* HMDBonjourBrowserHelper_h */