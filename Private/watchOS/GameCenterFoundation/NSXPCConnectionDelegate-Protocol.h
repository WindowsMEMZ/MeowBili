//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef NSXPCConnectionDelegate_Protocol_h
#define NSXPCConnectionDelegate_Protocol_h
@import Foundation;

@protocol NSXPCConnectionDelegate <NSObject>
@optional
/* instance methods */
- (id)replacementObjectForXPCConnection:(id)xpcconnection encoder:(id)encoder object:(id)object;
- (void)connection:(id)connection handleInvocation:(id)invocation isReply:(BOOL)reply;
@end

#endif /* NSXPCConnectionDelegate_Protocol_h */