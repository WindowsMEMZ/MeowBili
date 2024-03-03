//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef _AXUIActiveRootWindow_h
#define _AXUIActiveRootWindow_h
@import Foundation;

#include "_AXUIRootWindow.h"

@interface _AXUIActiveRootWindow : _AXUIRootWindow
/* instance methods */
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (BOOL)_accessibilityWindowVisible;
- (BOOL)_usesWindowServerHitTesting;
@end

#endif /* _AXUIActiveRootWindow_h */