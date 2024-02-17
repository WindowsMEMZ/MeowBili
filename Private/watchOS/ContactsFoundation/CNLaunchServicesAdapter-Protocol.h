//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNLaunchServicesAdapter_Protocol_h
#define CNLaunchServicesAdapter_Protocol_h
@import Foundation;

@protocol CNLaunchServicesAdapter 
/* instance methods */
- (void)applicationsForUserActivityType:(id)type withReply:(id /* block */)reply;
- (void)applicationsAvailableForHandlingURLScheme:(id)urlscheme withReply:(id /* block */)reply;
- (void)applicationForBundleIdentifier:(id)identifier withReply:(id /* block */)reply;
- (void)openUserActivityData:(id)data inApplication:(id)application withReply:(id /* block */)reply;
- (void)openSensitiveURLInBackground:(id)background withOptions:(id)options withReply:(id /* block */)reply;
@end

#endif /* CNLaunchServicesAdapter_Protocol_h */