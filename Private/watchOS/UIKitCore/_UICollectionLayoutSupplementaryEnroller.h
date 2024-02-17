//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionLayoutSupplementaryEnroller_h
#define _UICollectionLayoutSupplementaryEnroller_h
@import Foundation;

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet;

@interface _UICollectionLayoutSupplementaryEnroller : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_enrollmentIdentifiers;
  NSMutableSet *_uncommittedEnrollmentIdentifiers;
  NSMutableDictionary *_enrollmentsDict;
  NSMutableDictionary *_kindEnrollmentsDict;
}

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* _UICollectionLayoutSupplementaryEnroller_h */