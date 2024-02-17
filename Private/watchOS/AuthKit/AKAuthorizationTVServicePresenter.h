//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationTVServicePresenter_h
#define AKAuthorizationTVServicePresenter_h
@import Foundation;

@interface AKAuthorizationTVServicePresenter : NSObject
/* instance methods */
- (long long)typeOfMessage:(id)message;
- (id)buildDidTapNotificationMessage;
- (id)buildDidStartServerAuthorizationMessage;
- (id)buildFetchAppIconMessage;
- (id)buildFetchAppIconReplyWithImageData:(id)data imageScale:(id)scale;
- (long long)_typeFromString:(id)string;
- (id)_stringForType:(long long)type;
- (id)_filterDeprecatedType:(id)type;
@end

#endif /* AKAuthorizationTVServicePresenter_h */