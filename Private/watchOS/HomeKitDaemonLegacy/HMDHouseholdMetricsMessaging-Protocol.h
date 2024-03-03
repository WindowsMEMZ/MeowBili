//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHouseholdMetricsMessaging_Protocol_h
#define HMDHouseholdMetricsMessaging_Protocol_h
@import Foundation;

@protocol HMDHouseholdMetricsMessaging 
/* instance methods */
- (void)sendMessage:(id)message toDevice:(id)device withPayload:(id)payload responseHandler:(id /* block */)handler;
- (void)registerForMessage:(id)message messageHandler:(id /* block */)handler;
- (void)deregisterForMessage:(id)message;
@end

#endif /* HMDHouseholdMetricsMessaging_Protocol_h */