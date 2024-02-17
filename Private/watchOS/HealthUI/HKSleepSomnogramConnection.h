//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSleepSomnogramConnection_h
#define HKSleepSomnogramConnection_h
@import Foundation;

@interface HKSleepSomnogramConnection : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

/* instance methods */
- (id)initWithStartPoint:(struct CGPoint { double x0; double x1; })point endPoint:(struct CGPoint { double x0; double x1; })point;
@end

#endif /* HKSleepSomnogramConnection_h */