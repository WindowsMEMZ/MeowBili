//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EFPriorityQueueStrategy_h
#define _EFPriorityQueueStrategy_h
@import Foundation;

#include "EFQueueingStrategy-Protocol.h"

@class NSString;

@interface _EFPriorityQueueStrategy : NSObject<EFQueueingStrategy>

@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithComparator:(id /* block */)comparator;
- (void)enqueueObject:(id)object replaceIfExists:(BOOL)exists buffer:(id)buffer;
- (void)dequeueObject:(id)object buffer:(id)buffer;
- (unsigned long long)_insertionIndexForObject:(id)object buffer:(id)buffer;
- (unsigned long long)_indexForObject:(id)object buffer:(id)buffer;
@end

#endif /* _EFPriorityQueueStrategy_h */