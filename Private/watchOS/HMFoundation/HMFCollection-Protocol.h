//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFCollection_Protocol_h
#define HMFCollection_Protocol_h
@import Foundation;

@protocol HMFCollection <NSObject, NSFastEnumeration>

@property (readonly) unsigned long long count;

/* instance methods */
- (id)objectEnumerator;
- (BOOL)containsObject:(id)object;
@end

#endif /* HMFCollection_Protocol_h */