//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef NMSSHSessionDelegate_Protocol_h
#define NMSSHSessionDelegate_Protocol_h
@import Foundation;

@protocol NMSSHSessionDelegate <NSObject>
@optional
/* instance methods */
- (id)session:(id)session keyboardInteractiveRequest:(id)request;
- (void)session:(id)session didDisconnectWithError:(id)error;
- (BOOL)session:(id)session shouldConnectToHostWithFingerprint:(id)fingerprint;
@end

#endif /* NMSSHSessionDelegate_Protocol_h */