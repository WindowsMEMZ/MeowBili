//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIInertialUpdaterDelegate_Protocol_h
#define CSLUIInertialUpdaterDelegate_Protocol_h
@import Foundation;

@protocol CSLUIInertialUpdaterDelegate <NSObject>
/* instance methods */
- (struct CGPoint { double x0; double x1; })inertialUpdater:(id)updater willDecelerateWithTarget:(struct CGPoint { double x0; double x1; })target;
- (void)inertialUpdater:(id)updater scrolledWithDelta:(struct CGPoint { double x0; double x1; })delta;
- (void)inertialUpdaterFinishedScrolling:(id)scrolling;
@end

#endif /* CSLUIInertialUpdaterDelegate_Protocol_h */