//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelQueueFeeder_h
#define MPCModelQueueFeeder_h
@import Foundation;

#include "MPQueueFeeder.h"
#include "MPCModelGenericAVItemUserIdentityPropertySet.h"
#include "MPCModelPlaybackContext.h"
#include "MPCPlaybackRequestEnvironment.h"
#include "MPCQueueControllerBehaviorMusicDataSource-Protocol.h"
#include "MPMutableIdentifierListSection-Protocol.h"
#include "MPRTCReportingItemSessionContaining-Protocol.h"
#include "MPRequestResponseControllerDelegate-Protocol.h"

@class MPIdentifierSet, MPModelGenericObject, MPPropertySet, MPRequestResponseController, NSDictionary, NSHashTable, NSLock, NSString;
@protocol MPModelRequest<MPCModelPlaybackRequest, MPModelResponse<MPCModelPlaybackResponse, OS_dispatch_queue;

@interface MPCModelQueueFeeder : MPQueueFeeder<MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate, MPCQueueControllerBehaviorMusicDataSource> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSObject<OS_dispatch_queue> *_diffQueue;
  NSLock *_diffLock;
  NSHashTable *_activeModelGenericAVItems;
  NSDictionary *_assetStoreFronts;
  NSDictionary *_endTimeModifications;
  id /* block */ _loadingCompletionHandler;
  MPRequestResponseController *_requestController;
  MPModelRequest<MPCModelPlaybackRequest> *_request;
  BOOL _isSiriInitiated;
  MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
  MPIdentifierSet *_startItemIdentifiers;
  NSDictionary *_startTimeModifications;
  NSObject<MPMutableIdentifierListSection> *_section;
  MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
  MPCModelPlaybackContext *_playbackContext;
  MPPropertySet *_representativeMetadataPropertySet;
  unsigned long long _backgroundTaskIdentifier;
  unsigned long long _backgroundTasks;
}

@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)applyVolumeNormalizationForItem:(id)item;
- (id)playbackInfoForItem:(id)item;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)reason;
- (id)updatedPlaybackContext;
- (id)uniqueIdentifier;
- (id)firstModelPlayEvent;
- (id)modelPlayEventForItem:(id)item inSection:(id)section;
- (void)getRepresentativeMetadataForPlaybackContext:(id)context properties:(id)properties completion:(id /* block */)completion;
- (BOOL)controller:(id)controller shouldRetryFailedRequestWithError:(id)error;
- (void)controller:(id)controller defersResponseReplacement:(id /* block */)replacement;
- (void)willBeginLoadingRequestForController:(id)controller;
- (void)didFinishLoadingRequestForController:(id)controller;
- (BOOL)canJumpToItem:(id)item reason:(id *)reason;
- (BOOL)containsTransportableContentWithReason:(id *)reason;
- (BOOL)supportsAutoPlayForItem:(id)item inSection:(id)section;
- (id)firstItemIntersectingIdentifierSet:(id)set;
- (void)loadPlaybackContext:(id)context completion:(id /* block */)completion;
- (id)identifiersForItem:(id)item inSection:(id)section;
- (id)itemForItem:(id)item inSection:(id)section;
- (BOOL)shouldUsePlaceholderForItem:(id)item inSection:(id)section;
- (void)reloadSection:(id)section completion:(id /* block */)completion;
- (BOOL)section:(id)section supportsShuffleType:(long long)type;
- (BOOL)section:(id)section shouldShuffleExcludeItem:(id)item;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)set;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)collection;
- (id)_supplementalLibraryRequestWithError:(id *)error;
@end

#endif /* MPCModelQueueFeeder_h */