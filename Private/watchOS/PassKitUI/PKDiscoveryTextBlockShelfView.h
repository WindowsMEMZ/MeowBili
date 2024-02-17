//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryTextBlockShelfView_h
#define PKDiscoveryTextBlockShelfView_h
@import Foundation;

#include "PKDiscoveryShelfView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSAttributedString, NSString, PKDiscoveryTextBlockShelf, UITextView;

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView<UITextViewDelegate> {
  /* instance variables */
  UITextView *_textView;
  PKDiscoveryTextBlockShelf *_shelf;
  NSAttributedString *_attributedText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShelf:(id)shelf;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)_attributedStringForBody:(id)body lede:(id)lede headerline:(id)headerline;
- (id)_textColorForBody;
- (id)_textColorForLede;
- (id)_textColorForHeaderline;
- (id)_uiFontTextStyle;
@end

#endif /* PKDiscoveryTextBlockShelfView_h */