//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANAnnouncementCoordinator_h
#define ANAnnouncementCoordinator_h
@import Foundation;

#include "ANAnnouncementManagerDelegte-Protocol.h"
#include "ANAnnouncementStatePublisher.h"
#include "ANCompanionConnection.h"
#include "ANCompanionConnectionDelegate-Protocol.h"
#include "ANMessenger.h"
#include "ANMessengerDelegate-Protocol.h"
#include "ANPlaybackManagerDataSource-Protocol.h"
#include "ANPlaybackManagerDelegate-Protocol.h"
#include "ANRemotePlaybackStatusProvider-Protocol.h"

@class ANParticipant, NSMapTable, NSMutableDictionary, NSSet, NSString, _TtC14AnnounceDaemon31SiriReferenceResolutionDonation;
@protocol OS_dispatch_queue, OS_os_log;

@interface ANAnnouncementCoordinator : NSObject<ANAnnouncementManagerDelegte, ANPlaybackManagerDelegate, ANPlaybackManagerDataSource, ANMessengerDelegate, ANCompanionConnectionDelegate>

@property (readonly, nonatomic) ANParticipant *localParticipant;
@property (readonly, nonatomic) NSSet *scanningDeviceCandidates;
@property (readonly, nonatomic) ANMessenger *messenger;
@property (readonly, nonatomic) NSMutableDictionary *announcementManagers;
@property (readonly, nonatomic) NSMutableDictionary *playbackManagers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *delegatesToQueues;
@property (retain, nonatomic) ANCompanionConnection *companionConnection;
@property (retain, nonatomic) ANAnnouncementStatePublisher *playbackStatePublisher;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) AnnounceDaemon.SiriReferenceResolutionDonation *siriRRDonation;
@property (weak, nonatomic) NSObject<ANRemotePlaybackStatusProvider> *remotePlaybackStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedCoordinator;
+ (id)localDeviceIdentifier;

/* instance methods */
- (id)resolveIdentifier:(id)identifier;
- (void)pauseAllTimersForEndpointID:(id)id;
- (void)resumeAllTimersForEndpointID:(id)id;
- (void)resetAllTimersForEndpointID:(id)id;
- (void)performPlaybackCommand:(id)command endpointID:(id)id completionHandler:(id /* block */)handler;
- (id)lastPlayedAnnouncementInfoForEndpointID:(id)id;
- (unsigned long long)playbackStateForEndpointID:(id)id;
- (void)setPlaybackStartedForAnnouncement:(id)announcement endpointID:(id)id;
- (void)setPlaybackStoppedForAnnouncement:(id)announcement endpointID:(id)id;
- (id)announcementsForGroupID:(id)id endpointID:(id)id;
- (id)announcementForID:(id)id endpointID:(id)id;
- (id)allAnnouncementsSortedByReceiptForEndpointID:(id)id;
- (id)announcementsForIDs:(id)ids endpointID:(id)id;
- (void)updateAnnouncement:(id)announcement statusFlags:(unsigned long long)flags endpointID:(id)id;
- (void)removeOldAnnouncementsForEndpointID:(id)id;
- (void)cleanForExit;
- (void)addAnnouncement:(id)announcement forEndpointID:(id)id completion:(id /* block */)completion;
- (void)sendRequest:(id)request sentHandler:(id /* block */)handler;
- (void)mockAnnouncement:(id)announcement playbackDeadline:(id)deadline sentHandler:(id /* block */)handler;
- (void)addDelegate:(id)delegate queue:(id)queue;
- (id)init;
- (void)_initializeManagers;
- (id)_createAnnouncementManagerForIdentifier:(id)identifier;
- (BOOL)_removeAnnouncementManagerForIdentifier:(id)identifier;
- (id)_createPlaybackManagerForIdentifier:(id)identifier;
- (BOOL)_removePlaybackManagerForIdentifier:(id)identifier;
- (void)_removeManagersForIdentifier:(id)identifier;
- (id)_endpointIDForAnnouncementManager:(id)manager;
- (id)_endpointIDForPlaybackManager:(id)manager;
- (void)_handleReceivedAnnouncement:(id)announcement;
- (void)_notifyDidReceiveAnnouncement:(id)announcement forEndpointID:(id)id;
- (void)_executeBlockForDelegates:(id /* block */)delegates;
- (void)announcementManager:(id)manager announcements:(id)announcements didChangeForGroupID:(id)id;
- (void)receivedAnnouncement:(id)announcement;
- (void)failedToDeliverAnnouncement:(id)announcement error:(id)error;
- (void)companionDidPlayAnnouncement:(id)announcement;
- (void)playbackManager:(id)manager didStartPlayingAnnouncement:(id)announcement;
- (void)playbackManager:(id)manager didFinishPlayingAnnouncement:(id)announcement withOptions:(unsigned long long)options;
- (void)playbackManager:(id)manager didUpdatePlaybackState:(unsigned long long)state announcement:(id)announcement;
- (void)playbackManager:(id)manager didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)time;
- (void)playbackManagerDidFinishPlayingAnnouncements:(id)announcements;
- (void)cleanUpOldAnnouncementsForPlaybackManager:(id)manager;
- (id)announcementsForPlaybackManager:(id)manager;
- (id)playbackManager:(id)manager announcementsForIdentifiers:(id)identifiers;
@end

#endif /* ANAnnouncementCoordinator_h */