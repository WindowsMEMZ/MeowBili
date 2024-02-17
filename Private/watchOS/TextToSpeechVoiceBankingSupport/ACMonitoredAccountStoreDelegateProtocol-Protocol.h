//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef ACMonitoredAccountStoreDelegateProtocol_Protocol_h
#define ACMonitoredAccountStoreDelegateProtocol_Protocol_h
@import Foundation;

@protocol ACMonitoredAccountStoreDelegateProtocol <NSObject>
@optional
/* instance methods */
- (void)accountWasAdded:(id)added;
- (void)accountWasModified:(id)modified;
- (void)accountWasRemoved:(id)removed;
- (void)accountCredentialChanged:(id)changed;
@end

#endif /* ACMonitoredAccountStoreDelegateProtocol_Protocol_h */