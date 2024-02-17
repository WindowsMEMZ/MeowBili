//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef QSSelectionHighlightDetailedView_h
#define QSSelectionHighlightDetailedView_h
@import Foundation;

#include "UIView.h"

@class UIColor;

@interface QSSelectionHighlightDetailedView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } displayRect;
@property (nonatomic) BOOL sentenceHighlight;
@property (retain, nonatomic) UIColor *underlineColor;
@property (retain, nonatomic) UIColor *selectionColor;

/* instance methods */
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* QSSelectionHighlightDetailedView_h */