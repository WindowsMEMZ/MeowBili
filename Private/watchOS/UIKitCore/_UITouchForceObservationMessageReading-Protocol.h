//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITouchForceObservationMessageReading_Protocol_h
#define _UITouchForceObservationMessageReading_Protocol_h
@import Foundation;

@protocol _UITouchForceObservationMessageReading <NSObject>

@property (readonly, nonatomic) double touchForce;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centroid;
@property (readonly, nonatomic) BOOL shouldFilterDueToSystemGestures;

@end

#endif /* _UITouchForceObservationMessageReading_Protocol_h */