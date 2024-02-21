//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKMessageReplyCountChatItem_h
#define CKMessageReplyCountChatItem_h
@import Foundation;

#include "CKMessageStatusChatItem.h"

@interface CKMessageReplyCountChatItem : CKMessageStatusChatItem

@property (readonly, nonatomic) unsigned long long replyCount;

/* instance methods */
- (unsigned long long)layoutType;
- (char)transcriptOrientation;
- (Class)cellClass;
- (long long)buttonType;
- (id)loadTranscriptButtonText;
- (id)_loadTranscriptButtonTextForReplyCountButtonType;
- (BOOL)shouldHideDuringDarkFSM;
@end

#endif /* CKMessageReplyCountChatItem_h */