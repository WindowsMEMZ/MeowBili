//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef asn1SetToken_h
#define asn1SetToken_h
@import Foundation;

#include "asn1Token.h"

@interface asn1SetToken : asn1Token {
  /* instance variables */
  const char * mReadPointer;
}

/* instance methods */
- (id)_initWithID:(unsigned long long)id class:(unsigned char)class length:(unsigned long long)length content:(const char *)content opaque:(BOOL)opaque;
- (id)description;
- (void)reset;
- (id)nextToken;
@end

#endif /* asn1SetToken_h */