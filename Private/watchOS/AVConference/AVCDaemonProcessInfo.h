//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCDaemonProcessInfo_h
#define AVCDaemonProcessInfo_h
@import Foundation;

@interface AVCDaemonProcessInfo : NSObject
/* class methods */
+ (id)getDaemonProcessInfo;
+ (struct { unsigned int x0[8] })auditTokenWithError:(id *)error;
@end

#endif /* AVCDaemonProcessInfo_h */