//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGConversationTracker_h
#define SGConversationTracker_h
@import Foundation;

@class _PASLRUCache;

@interface SGConversationTracker : NSObject {
  /* instance variables */
  _PASLRUCache *_conversations;
}

/* class methods */
+ (id)instance;
+ (id)sgConversationTurnsForStrings:(id)strings;
+ (id)getMergedPromptForMessage:(id)message conversationTurns:(id)turns maxPromptLength:(unsigned long long)length maxPromptWindowSeconds:(double)seconds promptJoiningString:(id)string;

/* instance methods */
- (id)init;
- (id)conversationForSenderID:(id)id;
- (id)addMessage:(id)message;
- (void)clear;
@end

#endif /* SGConversationTracker_h */