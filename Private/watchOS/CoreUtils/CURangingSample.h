//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CURangingSample_h
#define CURangingSample_h
@import Foundation;

@class NSData, NSString;

@interface CURangingSample : NSObject

@property (nonatomic) int channel;
@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) int rawRSSI;

/* instance methods */
- (id)description;
@end

#endif /* CURangingSample_h */