//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKAcknowledgmentBalloonView_h
#define CKAcknowledgmentBalloonView_h
@import Foundation;

#include "CKBalloonView.h"
#include "CKAcknowledgmentGlyphView.h"

@interface CKAcknowledgmentBalloonView : CKBalloonView

@property (nonatomic) unsigned long long stackCount;
@property (nonatomic) long long coloredPart;
@property (retain, nonatomic) CKAcknowledgmentGlyphView *glyphView;

/* instance methods */
- (void)configureForAggregateAcknowledgmentChatItem:(id)item;
- (void)prepareForReuse;
@end

#endif /* CKAcknowledgmentBalloonView_h */