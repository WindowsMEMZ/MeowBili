//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingMessageExtensionRenderer_Protocol_h
#define PKSharingMessageExtensionRenderer_Protocol_h
@import Foundation;

@protocol PKSharingMessageExtensionRenderer <NSObject>

@property (readonly, nonatomic) NSString *presentationSceneIdentifier;

/* instance methods */
- (void)messageDidUpdate;
- (void)openAppURL:(id)url;
- (void)showAlertWithTitle:(id)title message:(id)message button:(id)button;
- (void)showAlertWithTitle:(id)title message:(id)message button:(id)button destructiveButton:(id)button completion:(id /* block */)completion;
@end

#endif /* PKSharingMessageExtensionRenderer_Protocol_h */