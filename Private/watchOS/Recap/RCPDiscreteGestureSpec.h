//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef RCPDiscreteGestureSpec_h
#define RCPDiscreteGestureSpec_h
@import Foundation;

@interface RCPDiscreteGestureSpec : NSObject

@property (nonatomic) BOOL isRotation;
@property (nonatomic) BOOL isScale;
@property (nonatomic) BOOL isTranslation;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

/* class methods */
+ (id)rotationZ:(double)z;
+ (id)scaleZ:(double)z;
+ (id)translation:(struct CGPoint { double x0; double x1; })translation;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* RCPDiscreteGestureSpec_h */