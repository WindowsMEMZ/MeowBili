//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKPlayer_h
#define GKPlayer_h
@import Foundation;

#include "GKBasePlayer.h"
#include "GKGame.h"
#include "GKPlayerInternal.h"
#include "NSCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSAttributedString, NSDate, NSNumber, NSString;

@interface GKPlayer : GKBasePlayer<NSCoding, NSSecureCoding>

@property (retain, @dynamic, nonatomic) NSString *reason;
@property (retain, @dynamic, nonatomic) NSString *reason2;
@property (@dynamic, nonatomic) unsigned int rid;
@property (@dynamic, nonatomic) int source;
@property (readonly) NSString *referenceKey;
@property (retain, nonatomic) NSArray *friends;
@property (@dynamic, nonatomic) BOOL isFriend;
@property (retain, @dynamic, nonatomic) NSString *playerID;
@property (retain) GKPlayerInternal *internal;
@property (copy, @dynamic, nonatomic) NSString *status;
@property (copy, @dynamic, nonatomic) NSString *alias;
@property (readonly, @dynamic, nonatomic) NSString *firstName;
@property (readonly, @dynamic, nonatomic) NSString *lastName;
@property (readonly, @dynamic, nonatomic) NSNumber *friendLevel;
@property (readonly, @dynamic, nonatomic) NSNumber *friendBiDirectional;
@property (readonly, @dynamic, nonatomic) NSNumber *friendPlayedWith;
@property (readonly, @dynamic, nonatomic) NSNumber *friendPlayedNearby;
@property (readonly, @dynamic, nonatomic) NSNumber *acceptedGameInviteFromThisFriend;
@property (readonly, @dynamic, nonatomic) NSNumber *initiatedGameInviteToThisFriend;
@property (readonly, @dynamic, nonatomic) NSNumber *automatchedTogether;
@property (readonly, @dynamic, nonatomic) long long avatarType;
@property (readonly, @dynamic, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) GKGame *lastPlayedGame;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (readonly, @dynamic, nonatomic) BOOL loaded;
@property (readonly, nonatomic) BOOL isFamiliarFriend;
@property (@dynamic, nonatomic) unsigned long long numberOfFriends;
@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; } stats;
@property (readonly, nonatomic) NSString *messagesID;
@property (readonly, nonatomic) BOOL isInContacts;
@property (readonly, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSAttributedString *whenString;
@property (readonly, @dynamic, nonatomic) BOOL isLocalPlayer;
@property (readonly, @dynamic, nonatomic) BOOL isAnonymousPlayer;
@property (readonly, @dynamic, nonatomic) BOOL isUnknownPlayer;
@property (readonly, @dynamic, nonatomic) BOOL isAutomatchPlayer;
@property (readonly, @dynamic, nonatomic) BOOL isGuestPlayer;
@property (retain) GKPlayerInternal *internal;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSNumber *friendLevel;
@property (readonly, nonatomic) NSNumber *friendBiDirectional;
@property (readonly, nonatomic) NSNumber *friendPlayedWith;
@property (readonly, nonatomic) NSNumber *friendPlayedNearby;
@property (readonly, nonatomic) NSNumber *acceptedGameInviteFromThisFriend;
@property (readonly, nonatomic) NSNumber *initiatedGameInviteToThisFriend;
@property (readonly, nonatomic) NSNumber *automatchedTogether;
@property (readonly, nonatomic) long long avatarType;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) GKGame *lastPlayedGame;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (readonly, nonatomic) BOOL loaded;
@property (readonly, nonatomic) BOOL isFamiliarFriend;
@property (nonatomic) unsigned long long numberOfFriends;
@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; } stats;
@property (readonly, nonatomic) NSString *messagesID;
@property (readonly, nonatomic) BOOL isInContacts;
@property (readonly, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSAttributedString *whenString;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) BOOL isAnonymousPlayer;
@property (readonly, nonatomic) BOOL isUnknownPlayer;
@property (readonly, nonatomic) BOOL isAutomatchPlayer;
@property (readonly, nonatomic) BOOL isGuestPlayer;
@property (readonly, retain, nonatomic) NSString *gameBundleID;
@property (readonly, retain, nonatomic) NSString *gamePlayerID;
@property (readonly, retain, nonatomic) NSString *teamPlayerID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, @dynamic, nonatomic) NSString *guestIdentifier;
@property (readonly, nonatomic) BOOL isInvitable;

/* class methods */
+ (id)playerFromPlayerID:(id)id;
+ (id)canonicalizedPlayerForInternal:(id)internal;
+ (id)anonymousPlayer;
+ (id)unknownPlayer;
+ (id)automatchPlayer;
+ (id)anonymousGuestPlayerWithIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;
+ (id)gameBundleID;
+ (void)loadScopedIDsForPlayerIDs:(id)ids gameBundleID:(id)id handler:(id /* block */)handler;
+ (id)cacheKeyForPlayerID:(id)id;
+ (void)loadPlayersForLegacyIdentifiers:(id)identifiers withCompletionHandler:(id /* block */)handler;
+ (void)loadPlayersForIdentifiers:(id)identifiers withCompletionHandler:(id /* block */)handler;
+ (void)loadPlayersForIdentifiersPrivate:(id)private withCompletionHandler:(id /* block */)handler;
+ (void)_loadPlayersForIdentifiers:(id)identifiers withCompletionHandler:(id /* block */)handler;
+ (void)loadCompletePlayersForPlayers:(id)players completionHandler:(id /* block */)handler;
+ (id)instanceMethodSignatureForSelector:(SEL)selector;
+ (BOOL)instancesRespondToSelector:(SEL)selector;
+ (BOOL)isGuestPlayerID:(id)id;

/* instance methods */
- (id)minimalPlayer;
- (id)initWithInternalRepresentation:(id)representation;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (BOOL)isArcadeGame;
- (void)logAndReportIllegalArcadeAccessTo:(id)to;
- (BOOL)scopedIDsArePersistent;
- (id)vendibleScopedIDs;
- (void)logAndReportScopedIDsError:(id)error;
- (void)updateScopedIDs:(id /* block */)ids;
- (void)updateScopedIDsWithHandler:(id /* block */)handler;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)_postChangeNotification;
- (void)postChangeNotification;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id /* block */)handler;
- (void)loadFriendsWithFilter:(id)filter withCompletionHandler:(id /* block */)handler;
- (void)loadCommonFriends:(BOOL)friends asPlayersWithCompletionHandler:(id /* block */)handler;
- (void)loadRecentMatchesForGame:(id)game block:(id /* block */)block;
- (void)loadGamesPlayed:(id /* block */)played;
- (void)loadGamesPlayedIncludingInstalledGames:(BOOL)games completionHandler:(id /* block */)handler;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(id /* block */)handler;
- (id)identifierForIDS;
- (void)loadProfileWithCompletionHandler:(id /* block */)handler;
- (void)loadProfileDiscardingStaleData:(BOOL)data completionHandler:(id /* block */)handler;
- (id)displayNameWithOptions:(unsigned char)options;
- (id)sortName;
- (id)searchName;
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)valueForUndefinedKey:(id)key;
- (void)setValue:(id)value forUndefinedKey:(id)key;
- (BOOL)isFriendablePlayer;
@end

#endif /* GKPlayer_h */