//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMultiHyperlinkView_h
#define PKMultiHyperlinkView_h
@import Foundation;

#include "UIView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UIFont, UITextView;

@interface PKMultiHyperlinkView : UIView<UITextViewDelegate> {
  /* instance variables */
  UITextView *_textView;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSArray *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)pk_applyAppearance:(id)appearance;
- (id)pk_childrenForAppearance;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (id)_rangesForTag:(id)tag inText:(id)text;
- (void)_updateText;
- (BOOL)_isLinkRangeValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })valid;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
@end

#endif /* PKMultiHyperlinkView_h */