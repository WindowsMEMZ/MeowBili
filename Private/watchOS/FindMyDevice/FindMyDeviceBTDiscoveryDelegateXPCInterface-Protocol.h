//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 421.2.0.0.0
//
#ifndef FindMyDeviceBTDiscoveryDelegateXPCInterface_Protocol_h
#define FindMyDeviceBTDiscoveryDelegateXPCInterface_Protocol_h
@import Foundation;

@protocol FindMyDeviceBTDiscoveryDelegateXPCInterface <NSObject>
/* instance methods */
- (void)didEndDiscoveryWithError:(id)error;
- (void)didDiscoverDevice:(id)device;
- (void)didLoseDevice:(id)device;
@end

#endif /* FindMyDeviceBTDiscoveryDelegateXPCInterface_Protocol_h */