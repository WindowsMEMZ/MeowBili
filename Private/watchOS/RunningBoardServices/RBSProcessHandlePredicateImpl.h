//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessHandlePredicateImpl_h
#define RBSProcessHandlePredicateImpl_h
@import Foundation;

#include "RBSProcessPredicateImpl.h"
#include "RBSProcessIdentity.h"

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
  /* instance variables */
  RBSProcessIdentity *_identity;
  int _pid;
}

/* class methods */
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)initWithHandle:(id)handle;
- (id)processIdentifier;
- (BOOL)matchesProcess:(id)process;
- (id)processPredicate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSProcessHandlePredicateImpl_h */