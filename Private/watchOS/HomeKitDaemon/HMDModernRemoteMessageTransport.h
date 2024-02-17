//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDModernRemoteMessageTransport_h
#define HMDModernRemoteMessageTransport_h
@import Foundation;

#include "HMDRemoteMessageTransport.h"
#include "HMDDateProvider-Protocol.h"
#include "HMDDeviceResidencyProvider-Protocol.h"
#include "HMDModernTransportMessageContextManager.h"
#include "HMDRemoteMessageTransport.h"
#include "HMDRemoteMessageTransportReachabilityDelegate-Protocol.h"
#include "HMDTimerProvider-Protocol.h"
#include "HMFMessageTransportDelegate-Protocol.h"

@class NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport<HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate>

@property BOOL started;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport;
@property (readonly, nonatomic) HMDRemoteMessageTransport *idsTransport;
@property (readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager;
@property (readonly, nonatomic) NSObject<HMDDateProvider> *systemDateProvider;
@property (readonly, nonatomic) NSObject<HMDDateProvider> *idsDateProvider;
@property (readonly, nonatomic) NSObject<HMDTimerProvider> *timerProvider;
@property (readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer;
@property (nonatomic) BOOL rapportLinkSlow;
@property (readonly, nonatomic) BOOL isWatch;
@property (weak) NSObject<HMDDeviceResidencyProvider> *residencyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requestStartTimeHeaderKey;
+ (id)timeToLiveHeaderKey;
+ (id)logCategory;

/* instance methods */
- (id)initWithAccountRegistry:(id)registry;
- (id)initWithAccountRegistry:(id)registry rapportTransport:(id)transport idsTransport:(id)transport contextManager:(id)manager systemDateProvider:(id)provider idsDateProvider:(id)provider timerProvider:(id)provider isWatch:(BOOL)watch;
- (BOOL)isSecure;
- (long long)qualityOfService;
- (id)start;
- (BOOL)canSendMessage:(id)message;
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
- (void)messageTransport:(id)transport didReceiveMessage:(id)message;
- (void)transport:(id)transport idsIdentifier:(id)identifier didAppearReachable:(BOOL)reachable;
- (void)configureWithHomeMembershipVerifier:(id)verifier;
- (BOOL)isStarted;
- (BOOL)isRapportLinkSlow;
@end

#endif /* HMDModernRemoteMessageTransport_h */