//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFKeyPair_Ivars_h
#define SFKeyPair_Ivars_h
@import Foundation;

@class NSString;

@interface SFKeyPair_Ivars : NSObject {
  /* instance variables */
  struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } * secKey;
  NSString *privateKeyDomain;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* SFKeyPair_Ivars_h */