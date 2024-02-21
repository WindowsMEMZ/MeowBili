//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCRedirectorTuple_h
#define HMCRedirectorTuple_h
@import Foundation;

#include "HMFObject.h"
#include "HMCRedirector.h"
#include "HMFCancellable-Protocol.h"

@interface HMCRedirectorTuple : HMFObject<HMFCancellable> {
  /* instance variables */
  HMCRedirector *_owner;
  id _target;
  SEL _selector;
}

/* instance methods */
- (void)cancel;
- (id)attributeDescriptions;
- (id)description;
@end

#endif /* HMCRedirectorTuple_h */