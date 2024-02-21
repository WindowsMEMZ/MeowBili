//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPBTLEControlOutputStreamDelegate_Protocol_h
#define HAPBTLEControlOutputStreamDelegate_Protocol_h
@import Foundation;

@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
/* instance methods */
- (void)controlOutputStream:(id)stream didReceiveRequestToSendControlPacket:(id)packet completionHandler:(id /* block */)handler;
- (void)controlOutputStreamDidOpen:(id)open;
- (void)controlOutputStream:(id)stream didCloseWithError:(id)error;
- (void)controlOutputStreamDidComplete:(id)complete;
@end

#endif /* HAPBTLEControlOutputStreamDelegate_Protocol_h */