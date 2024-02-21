//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKViceroyVoiceChat_h
#define GKViceroyVoiceChat_h
@import Foundation;

#include "GKViceroyVoiceChatStateUpdateDelegate-Protocol.h"
#include "GKVoiceChatSessionDelegate-Protocol.h"

@class GKConnection, GKVoiceChatSession, NSString;

@interface GKViceroyVoiceChat : NSObject<GKVoiceChatSessionDelegate> {
  /* instance variables */
  NSObject<GKViceroyVoiceChatStateUpdateDelegate> *_weakStateUpdateDelegate;
}

@property (retain, nonatomic) GKConnection *connection;
@property (retain, nonatomic) GKVoiceChatSession *voiceChatSession;
@property (weak, nonatomic) NSObject<GKViceroyVoiceChatStateUpdateDelegate> *stateUpdateDelegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) BOOL active;
@property (nonatomic) float volume;

/* instance methods */
- (id)initWithName:(id)name connection:(id)connection gkSession:(id)session;
- (void)dealloc;
- (BOOL)isActive;
- (void)setMuted:(BOOL)muted forPlayerID:(id)id;
- (void)start;
- (void)stop;
- (void)gkVoiceChatSession:(id)session stateUpdate:(unsigned long long)update forPeer:(id)peer;
@end

#endif /* GKViceroyVoiceChat_h */