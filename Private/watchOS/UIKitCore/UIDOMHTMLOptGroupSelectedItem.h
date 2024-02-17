//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDOMHTMLOptGroupSelectedItem_h
#define UIDOMHTMLOptGroupSelectedItem_h
@import Foundation;

#include "UIWebSelectedItemPrivate-Protocol.h"

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject<UIWebSelectedItemPrivate> {
  /* instance variables */
  DOMHTMLOptGroupElement *_node;
}

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

/* instance methods */
- (id)initWithHTMLOptGroupNode:(id)node;
- (id)node;
- (BOOL)selected;
- (BOOL)isGroup;
- (void)setSelected:(BOOL)selected;
- (void)unselect;
- (void)dealloc;
@end

#endif /* UIDOMHTMLOptGroupSelectedItem_h */