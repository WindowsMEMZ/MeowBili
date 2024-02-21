//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.5.0.0.0
//
#ifndef _TtP12FindMyLocate20FriendshipXPCService__Protocol_h
#define _TtP12FindMyLocate20FriendshipXPCService__Protocol_h
@import Foundation;

@protocol FindMyLocate.FriendshipXPCService 
/* instance methods */
- (void)respondToInviteRequest:(id)request completion:(id /* block */)completion;
- (void)startFriendsUpdateWithCompletion:(id /* block */)completion;
- (void)friendsWithTypes:(id)types completion:(id /* block */)completion;
- (void)friendshipStateWithRequest:(id)request completion:(id /* block */)completion;
- (void)offerExpirationForHandle:(id)handle fromHandle:(id)handle completion:(id /* block */)completion;
- (void)offerExpirationForHandle:(id)handle groupId:(id)id completion:(id /* block */)completion;
- (void)sendFriendshipOffer:(id)offer completion:(id /* block */)completion;
- (void)sendFriendshipInvite:(id)invite completion:(id /* block */)completion;
- (void)stopSharingMyLocation:(id)location completion:(id /* block */)completion;
@end

#endif /* _TtP12FindMyLocate20FriendshipXPCService__Protocol_h */