//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PMLDenseVector_h
#define PMLDenseVector_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSData, NSMutableData;

@interface PMLDenseVector : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const float * ptr;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (id)denseVectorFromNumbers:(id)numbers;

/* instance methods */
- (id)init;
- (id)initWithCount:(unsigned long long)count;
- (id)initWithFloats:(const float *)floats count:(unsigned long long)count;
- (id)initWithFloatsNoCopy:(float *)copy count:(unsigned long long)count freeWhenDone:(BOOL)done;
- (id)initWithFloatsNoCopy:(float *)copy count:(unsigned long long)count deallocator:(id /* block */)deallocator;
- (id)initWithData:(id)data;
- (id)initWithNumbers:(id)numbers;
- (id)sliceFrom:(int)from to:(int)to;
- (id)vecByAppendingVec:(id)vec;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (float)cosineDistanceFrom:(id)from;
- (float)l1norm;
- (float)l2norm;
- (float)minValue;
- (float)maxValue;
- (float)density;
- (void)enumerateValuesWithBlock:(id /* block */)block;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)block;
- (float)valueAt:(unsigned long long)at;
@end

#endif /* PMLDenseVector_h */