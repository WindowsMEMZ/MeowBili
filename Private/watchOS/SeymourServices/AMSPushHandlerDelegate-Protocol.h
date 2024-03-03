//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef AMSPushHandlerDelegate_Protocol_h
#define AMSPushHandlerDelegate_Protocol_h
@import Foundation;

@protocol AMSPushHandlerDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)pushPaylod:(id)paylod shouldUpdateBadgeForBundleIdentifier:(id)identifier badgeIdentifier:(id)identifier enabled:(BOOL)enabled;
- (void)pushPayload:(id)payload withBadgeRequest:(id)request;
@end

#endif /* AMSPushHandlerDelegate_Protocol_h */