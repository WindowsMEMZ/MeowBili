//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICClassicEmojiViewController_h
#define PUICClassicEmojiViewController_h
@import Foundation;

#include "PUICQuickboardEmojiToSelectViewController.h"
#include "PUICClassicEmojiViewSelectionDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface PUICClassicEmojiViewController : PUICQuickboardEmojiToSelectViewController<UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) BOOL withHeader;
@property (weak, nonatomic) NSObject<PUICClassicEmojiViewSelectionDelegate> *emojiViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate categoryIdentifier:(id)identifier;
- (id)initWithDelegate:(id)delegate categoryIdentifier:(id)identifier withHeader:(BOOL)header;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
@end

#endif /* PUICClassicEmojiViewController_h */