//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFCRAM_MD5Authenticator_h
#define MFCRAM_MD5Authenticator_h
@import Foundation;

#include "MFSASLAuthenticator.h"

@interface MFCRAM_MD5Authenticator : MFSASLAuthenticator
/* instance methods */
- (id)responseForServerData:(id)data;
@end

#endif /* MFCRAM_MD5Authenticator_h */