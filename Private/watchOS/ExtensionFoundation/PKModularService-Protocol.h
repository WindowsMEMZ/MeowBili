//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef PKModularService_Protocol_h
#define PKModularService_Protocol_h
@import Foundation;

@protocol PKModularService <NSObject>
@optional
/* instance methods */
- (void)beginUsing:(id)using withBundle:(id)bundle;
- (void)endUsing:(id)using;
- (void)communicationsFailed:(id)failed;
@end

#endif /* PKModularService_Protocol_h */