//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIClient_Telemetry_h
#define TRIClient_Telemetry_h
@import Foundation;

@interface TRIClient (Telemetry)
/* class methods */
+ (id)systemNamespaceName;

/* instance methods */
- (id)levelForSystemFactor:(id)factor;
- (BOOL)shouldLogAtLevel:(long long)level;
- (BOOL)shouldLogAtLevel:(long long)level withPrivacyRadar:(long long)radar;
@end

#endif /* TRIClient_Telemetry_h */