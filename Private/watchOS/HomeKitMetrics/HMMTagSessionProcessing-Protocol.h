//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMTagSessionProcessing_Protocol_h
#define HMMTagSessionProcessing_Protocol_h
@import Foundation;

@protocol HMMTagSessionProcessing <NSObject>

@property (readonly, nonatomic) BOOL active;
@property (nonatomic) long long lastUpdate;
@property (readonly, nonatomic) NSDictionary *tagProcessingBlocks;

/* instance methods */
- (void)closeForReason:(unsigned long long)reason;
- (BOOL)isActive;
@end

#endif /* HMMTagSessionProcessing_Protocol_h */