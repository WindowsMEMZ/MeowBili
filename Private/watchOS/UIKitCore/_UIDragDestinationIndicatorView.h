//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDragDestinationIndicatorView_h
#define _UIDragDestinationIndicatorView_h
@import Foundation;

#include "UIView.h"

@class NSIndexPath;

@interface _UIDragDestinationIndicatorView : UIView

@property (nonatomic) BOOL isSourceList;
@property (readonly, nonatomic) double scaleFactor;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;

/* instance methods */
- (id)initWithSourceListStyle:(BOOL)style;
- (void)positionVerticallyCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)positionOnCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame above:(BOOL)above;
- (void)positionHorizontallyCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* _UIDragDestinationIndicatorView_h */