//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAdjustableTapTargetPUICButton_h
#define NTKAdjustableTapTargetPUICButton_h
@import Foundation;

#include "PUICButton.h"

@interface NTKAdjustableTapTargetPUICButton : PUICButton

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchEdgeInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* NTKAdjustableTapTargetPUICButton_h */