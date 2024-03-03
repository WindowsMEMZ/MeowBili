//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICFPContentInfo_h
#define ICFPContentInfo_h
@import Foundation;

@interface ICFPContentInfo : NSObject

@property (readonly, nonatomic) long long vodkaType;
@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) union FPContentInfo_ { unsigned int x0; struct VanillaVodkaAttributes_ { unsigned int x0; struct sinfEntry_ * x1; unsigned int x2; } x1; struct CloudVodkaAttributes_ { unsigned int x0; unsigned int x1; unsigned long long x2; } x2; struct WHAVodkaAttributes_ { unsigned int x0; unsigned long long x1; } x3; } fpContentInfo;

/* class methods */
+ (id)whaContentInfoWithAccountID:(unsigned long long)id;

/* instance methods */
- (id)_init;
@end

#endif /* ICFPContentInfo_h */