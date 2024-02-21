//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPSenderMessageStrategy_h
#define MSPSenderMessageStrategy_h
@import Foundation;

#include "MSPSenderStrategy.h"
#include "MSPSenderMessageStrategyDelegate-Protocol.h"

@class NSMutableSet;

@interface MSPSenderMessageStrategy : MSPSenderStrategy

@property (retain, nonatomic) NSMutableSet *messagesParticipants;
@property (weak, nonatomic) NSObject<MSPSenderMessageStrategyDelegate> *delegate;

/* instance methods */
- (void)setState:(id)state;
- (void)_addMessagesParticipants:(id)participants;
- (void)_removeMessagesParticipants:(id)participants;
- (void)addParticipants:(id)participants;
- (void)removeParticipants:(id)participants;
- (id)participants;
- (void)sendMessageIfNeeded;
@end

#endif /* MSPSenderMessageStrategy_h */