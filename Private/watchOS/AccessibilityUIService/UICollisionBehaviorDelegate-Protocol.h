//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef UICollisionBehaviorDelegate_Protocol_h
#define UICollisionBehaviorDelegate_Protocol_h
@import Foundation;

@protocol UICollisionBehaviorDelegate <NSObject>
@optional
/* instance methods */
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withItem:(id)item atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior endedContactForItem:(id)item withItem:(id)item;
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withBoundaryIdentifier:(id)identifier atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior endedContactForItem:(id)item withBoundaryIdentifier:(id)identifier;
@end

#endif /* UICollisionBehaviorDelegate_Protocol_h */