//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTextMessagePartChatItem_h
#define CKTextMessagePartChatItem_h
@import Foundation;

#include "CKMessagePartChatItem.h"

@class NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {
  /* instance variables */
  BOOL _hasCachedBigEmoji;
}

@property (readonly, copy, nonatomic) NSAttributedString *text;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, nonatomic) BOOL containsHyperlink;
@property (readonly, nonatomic) BOOL containsExcessiveLineHeightCharacters;
@property (readonly, nonatomic) BOOL shouldUseBigEmoji;

/* instance methods */
- (id)compositionWithContext:(id)context;
- (id)sendAnimationTextWithColor:(id)color;
- (id)loadTranscriptText;
- (BOOL)showMoneyResults;
- (id)_fallbackCorruptMessageTextWithTextColor:(id)color;
- (id)_attributedTextWithTextColor:(id)color;
- (BOOL)mentionsMe:(id)me;
- (BOOL)allowsMentions;
- (id)bodyTextFont;
- (id)meMentionsTextColor;
- (BOOL)isShowingEditHistory;
- (id)time;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stickerReactionInsets;
- (Class)balloonViewClass;
- (Class)impactBalloonViewClass;
- (id)_time;
@end

#endif /* CKTextMessagePartChatItem_h */