//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSchoolModeServerObserver_Protocol_h
#define SCLSchoolModeServerObserver_Protocol_h
@import Foundation;

@protocol SCLSchoolModeServerObserver <NSObject>
/* instance methods */
- (void)server:(id)server didUpdateState:(id)state fromState:(id)state;
@end

#endif /* SCLSchoolModeServerObserver_Protocol_h */