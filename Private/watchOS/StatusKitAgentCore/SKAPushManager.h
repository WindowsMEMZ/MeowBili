//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKAPushManager_h
#define SKAPushManager_h
@import Foundation;

#include "APSConnectionDelegate-Protocol.h"
#include "SKAPushManaging-Protocol.h"
#include "SKAPushManagingDelegate-Protocol.h"
#include "SKASystemMonitor.h"
#include "SKASystemMonitorListener-Protocol.h"

@class APSConnection, FTMessageDelivery, NSString;
@protocol OS_dispatch_queue;

@interface SKAPushManager : NSObject<APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAPushManagingDelegate> *delegate;

/* class methods */
+ (id)logger;

/* instance methods */
- (id)initWithQueue:(id)queue systemMonitor:(id)monitor inTrafficMode:(BOOL)mode;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)_initializeAPSConnection;
- (id)_pushEnvironment;
- (void)createChannelWithProtoData:(id)data completion:(id /* block */)completion;
- (void)switchStatusFilterToNonwaking;
- (void)switchStatusFilterToEnabled;
- (void)switchPresenceFilterToNonwaking;
- (void)switchPresenceFilterToEnabled;
- (void)_switchFilterToNonwakingForTopic:(id)topic;
- (void)_switchFilterToEnabledForTopic:(id)topic;
- (void)publishStatus:(id)status completion:(id /* block */)completion;
- (void)enableActivityTracking;
- (void)disableActivityTracking;
- (id)pushToken;
- (void)sendPresenceMessage:(id)message completion:(id /* block */)completion;
- (void)subscribeToStatusChannels:(id)channels;
- (void)unsubscribeFromStatusChannels:(id)channels;
- (void)subscribedStatusChannelsWithCompletion:(id /* block */)completion;
- (void)subscribeToPresenceChannels:(id)channels;
- (void)unsubscribeFromPresenceChannels:(id)channels;
- (void)subscribedPresenceChannelsWithCompletion:(id /* block */)completion;
- (void)_subscribeToChannels:(id)channels forTopic:(id)topic;
- (void)_unsubscribeFromChannels:(id)channels forTopic:(id)topic;
- (void)_subscribedChannelsForTopic:(id)topic WithCompletion:(id /* block */)completion;
- (id)serverTime;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveIncomingMessage:(id)message;
- (void)connection:(id)connection channelSubscriptionsFailedWithFailures:(id)failures;
- (BOOL)_sharedChannelsIsDisabledByServer;
@end

#endif /* SKAPushManager_h */