//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 327.60.2.0.0
//
#ifndef SigningKey_h
#define SigningKey_h
@import Foundation;

#include "FullKey.h"

@interface SigningKey : FullKey
/* instance methods */
- (id)publicKey;
- (id)signData:(id)data error:(id *)error;
- (id)signDataWithFormatter:(id)formatter error:(id *)error;
- (id)description;
@end

#endif /* SigningKey_h */