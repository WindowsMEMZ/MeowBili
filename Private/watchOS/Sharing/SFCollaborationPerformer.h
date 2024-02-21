//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCollaborationPerformer_h
#define SFCollaborationPerformer_h
@import Foundation;

#include "SFCollaborationCloudSharingResult.h"
#include "SFCollaborationItem-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SFCollaborationCreationDelegate, SFCollaborationPerformerDelegate;

@interface SFCollaborationPerformer : NSObject

@property (nonatomic) BOOL requiresParticipants;
@property (nonatomic) BOOL didCancel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *performQueue;
@property (readonly, nonatomic) NSObject<SFCollaborationItem> *collaborationItem;
@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, nonatomic) double deviceScreenScale;
@property (weak, nonatomic) NSObject<SFCollaborationPerformerDelegate> *delegate;
@property (weak, nonatomic) NSObject<SFCollaborationCreationDelegate> *creationDelegate;
@property (readonly, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) BOOL isRunning;

/* instance methods */
- (id)initWithCollaborationItem:(id)item activityType:(id)type deviceScreenScale:(double)scale;
- (id)initWithCollaborationItem:(id)item activityType:(id)type requiresParticipants:(BOOL)participants deviceScreenScale:(double)scale;
- (id)initWithCollaborationItem:(id)item activityType:(id)type context:(id)context;
- (void)perform;
- (void)_performWithAddParticipantsAllowed:(BOOL)allowed;
- (void)_handleUnsharedFolderWithSharedSubitems;
- (void)_handleSubitemInSharedFolder;
- (void)_createSharingURLForCollaborationRequest:(id)request;
- (void)_performAfterFolderCheck;
- (void)cancel;
- (void)_createCollaborationRequestWithCompletionHandler:(id /* block */)handler;
- (void)_fetchCollaborationAppInfoIfNeeded:(id /* block */)needed;
- (void)_didCreateCollaborationWithResult:(id)result;
@end

#endif /* SFCollaborationPerformer_h */