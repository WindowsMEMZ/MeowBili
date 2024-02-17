//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFooterHyperlinkView_h
#define PKFooterHyperlinkView_h
@import Foundation;

#include "UITableViewHeaderFooterView.h"
#include "PKHyperlinkTextView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSAttributedString, NSString, UIColor;

@interface PKFooterHyperlinkView : UITableViewHeaderFooterView<UITextViewDelegate> {
  /* instance variables */
  PKHyperlinkTextView *_textView;
  NSString *_text;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)addFooterStyleAttributes:(id)attributes;
- (id)text;
- (void)setText:(id)text;
@end

#endif /* PKFooterHyperlinkView_h */