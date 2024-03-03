//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKPassMediaObject_h
#define CKPassMediaObject_h
@import Foundation;

#include "CKPassbookMediaObject.h"

@class UIImage;

@interface CKPassMediaObject : CKPassbookMediaObject

@property (retain, nonatomic) UIImage *icon;

/* instance methods */
- (id)initWithTransfer:(id)transfer context:(id)context forceInlinePreview:(BOOL)preview;
- (id)title;
- (id)subtitle;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })size contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)passView;
@end

#endif /* CKPassMediaObject_h */