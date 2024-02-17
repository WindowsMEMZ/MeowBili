//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef SCDAMetricsAdditionalContext_h
#define SCDAMetricsAdditionalContext_h
@import Foundation;

@interface SCDAMetricsAdditionalContext : NSObject

@property (readonly, nonatomic) unsigned char rawGoodnessScore;
@property (readonly, nonatomic) unsigned char goodnessScore;
@property (readonly, nonatomic) unsigned char deviceClass;
@property (readonly, nonatomic) unsigned char deviceProductType;

/* instance methods */
- (id)initWithRawGoodnessScore:(unsigned char)score goodnessScore:(unsigned char)score deviceClass:(unsigned char)class deviceProductType:(unsigned char)type;
- (id)description;
@end

#endif /* SCDAMetricsAdditionalContext_h */