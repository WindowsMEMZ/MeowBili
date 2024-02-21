//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXLaunchServiceProtocol_Protocol_h
#define _EXLaunchServiceProtocol_Protocol_h
@import Foundation;

@protocol _EXLaunchServiceProtocol 
/* instance methods */
- (void)prepareWithLaunchConfiguration:(id)configuration reply:(id /* block */)reply;
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(struct { unsigned int x0[8] })token reply:(id /* block */)reply;
@end

#endif /* _EXLaunchServiceProtocol_Protocol_h */