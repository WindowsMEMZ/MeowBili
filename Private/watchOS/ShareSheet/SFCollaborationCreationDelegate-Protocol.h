//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCollaborationCreationDelegate_Protocol_h
#define SFCollaborationCreationDelegate_Protocol_h
@import Foundation;

@protocol SFCollaborationCreationDelegate <NSObject>
/* instance methods */
- (void)createSharingURLForCollaborationRequest:(id)request completionHandler:(id /* block */)handler;
@optional
/* instance methods */
- (void)createSharingURLWithParticipantsForCollaborationRequest:(id)request completionHandler:(id /* block */)handler;
- (void)addParticipantsAllowedForCollaborationItem:(id)item completionHandler:(id /* block */)handler;
- (void)shareStatusForURL:(id)url completionHandler:(id /* block */)handler;
- (void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id /* block */)handler;
- (void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(id /* block */)handler;
- (void)manageShareForDocumentInSharedFolder;
@end

#endif /* SFCollaborationCreationDelegate_Protocol_h */