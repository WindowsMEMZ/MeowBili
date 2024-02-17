//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDSourceOrderTransactionCache_h
#define _HDSourceOrderTransactionCache_h
@import Foundation;

#include "HDProfile.h"

@class NSArray, NSMutableDictionary;

@interface _HDSourceOrderTransactionCache : NSObject {
  /* instance variables */
  HDProfile *_profile;
  NSArray *_defaultOrderedSources;
  NSMutableDictionary *_orderedSourceIDsByBundleIdentifier;
}

/* instance methods */
- (id)init;
@end

#endif /* _HDSourceOrderTransactionCache_h */