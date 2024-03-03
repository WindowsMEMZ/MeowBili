//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef NSMutableArray_TKExtensions_h
#define NSMutableArray_TKExtensions_h
@import Foundation;

@interface NSMutableArray (TKExtensions)
/* instance methods */
- (void)tk_enqueueObject:(id)object;
- (id)tk_dequeueObject;
- (id)tk_lastEnqueuedObject;
- (id)tk_nextDequeuedObject;
- (void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)index;
@end

#endif /* NSMutableArray_TKExtensions_h */