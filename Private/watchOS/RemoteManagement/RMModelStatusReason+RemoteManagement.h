//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelStatusReason_RemoteManagement_h
#define RMModelStatusReason_RemoteManagement_h
@import Foundation;

@interface RMModelStatusReason (RemoteManagement)
/* class methods */
+ (id)reasonWithCode:(id)code description:(id)description details:(id)details;
+ (id)reasonWithCode:(id)code description:(id)description underlyingError:(id)error;
+ (id)reasonWithError:(id)error;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToStatusReason:(id)reason;
@end

#endif /* RMModelStatusReason_RemoteManagement_h */