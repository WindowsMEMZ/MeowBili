//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPSecureChannelProxy_Protocol_h
#define CDPSecureChannelProxy_Protocol_h
@import Foundation;

@protocol CDPSecureChannelProxy <NSObject>
/* instance methods */
- (void)sendPayload:(id)payload completion:(id /* block */)completion;
- (BOOL)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
@end

#endif /* CDPSecureChannelProxy_Protocol_h */