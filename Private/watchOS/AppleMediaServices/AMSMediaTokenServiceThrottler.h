//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaTokenServiceThrottler_h
#define AMSMediaTokenServiceThrottler_h
@import Foundation;

@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject

@property (nonatomic) unsigned long long attemptNumber;
@property (retain, nonatomic) NSDate *throttleDate;
@property (nonatomic) double baseSleepInterval;
@property (nonatomic) double maxSleepInterval;

/* instance methods */
- (id)initWithBaseSleepInterval:(double)interval maxSleepInterval:(double)interval;
- (void)reset;
- (BOOL)shouldThrottle;
- (void)throttle;
- (double)_calculateThrottleInterval;
@end

#endif /* AMSMediaTokenServiceThrottler_h */