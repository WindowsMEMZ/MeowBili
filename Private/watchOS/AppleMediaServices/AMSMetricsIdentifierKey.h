//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMetricsIdentifierKey_h
#define AMSMetricsIdentifierKey_h
@import Foundation;

@class NSString;

@interface AMSMetricsIdentifierKey : NSObject

@property (nonatomic) BOOL crossDeviceSync;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isActiveITunesAccountRequired;

/* class methods */
+ (id)keyWithName:(id)name crossDeviceSync:(BOOL)sync;
+ (id)keyWithName:(id)name crossDeviceSync:(BOOL)sync isActiveITunesAccountRequired:(BOOL)required;

/* instance methods */
@end

#endif /* AMSMetricsIdentifierKey_h */