//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFSymmetricKeySpecifier_h
#define _SFSymmetricKeySpecifier_h
@import Foundation;

#include "_SFKeySpecifier.h"

@interface _SFSymmetricKeySpecifier : _SFKeySpecifier {
  /* instance variables */
  id _symmetricKeySpecifierInternal;
}

@property (readonly, nonatomic) long long keyLengthInBytes;

/* instance methods */
@end

#endif /* _SFSymmetricKeySpecifier_h */