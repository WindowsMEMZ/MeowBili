//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDContentProtectionObserver_Protocol_h
#define HDContentProtectionObserver_Protocol_h
@import Foundation;

@protocol HDContentProtectionObserver <NSObject>
/* instance methods */
- (void)contentProtectionStateChanged:(long long)changed previousState:(long long)state;
@end

#endif /* HDContentProtectionObserver_Protocol_h */