//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMCSSValueList_h
#define DOMCSSValueList_h
@import Foundation;

#include "DOMCSSValue.h"

@interface DOMCSSValueList : DOMCSSValue

@property (readonly) unsigned int length;

/* instance methods */
- (id)item:(unsigned int)item;
@end

#endif /* DOMCSSValueList_h */