//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXRemoteUIAlertManager_h
#define AXRemoteUIAlertManager_h
@import Foundation;

@class NSMutableDictionary;

@interface AXRemoteUIAlertManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *remoteCallbackHolders;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (void)presentRemoteUIAlertWithIdentifier:(id)identifier viewControllerClassName:(id)name userInfo:(id)info presentationHandler:(id /* block */)handler dismissalHandler:(id /* block */)handler;
@end

#endif /* AXRemoteUIAlertManager_h */