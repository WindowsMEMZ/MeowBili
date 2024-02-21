//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.0, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 57.0.0.0.0
//
#ifndef SCHealthLiteConnectionDelegate_Protocol_h
#define SCHealthLiteConnectionDelegate_Protocol_h
@import Foundation;

@protocol SCHealthLiteConnectionDelegate <SCHLPlugin>
/* instance methods */
- (void)handleHealthLiteDeath;
- (void)handleConnectionInvalidation;
- (void)handleInitialConnect;
@end

#endif /* SCHealthLiteConnectionDelegate_Protocol_h */