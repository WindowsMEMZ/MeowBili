//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKVoiceChatService_h
#define GKVoiceChatService_h
@import Foundation;

#include "GKViceroyVoiceChatService-Protocol.h"

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject

@property (retain, nonatomic) NSObject<GKViceroyVoiceChatService> *voiceChatService;
@property NSObject<GKVoiceChatClient> *client;
@property (nonatomic) BOOL microphoneMuted;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic) BOOL outputMeteringEnabled;
@property (nonatomic) BOOL inputMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (readonly) float inputMeterLevel;

/* class methods */
+ (void)initialize;
+ (id)defaultVoiceChatService;
+ (BOOL)isVoIPAllowed;

/* instance methods */
- (id)init;
- (BOOL)startVoiceChatWithParticipantID:(id)id error:(id *)error;
- (void)stopVoiceChatWithParticipantID:(id)id;
- (BOOL)acceptCallID:(long long)id error:(id *)error;
- (void)denyCallID:(long long)id;
- (void)receivedRealTimeData:(id)data fromParticipantID:(id)id;
- (void)receivedData:(id)data fromParticipantID:(id)id;
- (BOOL)isMicrophoneMuted;
- (BOOL)isOutputMeteringEnabled;
- (BOOL)isInputMeteringEnabled;
@end

#endif /* GKVoiceChatService_h */