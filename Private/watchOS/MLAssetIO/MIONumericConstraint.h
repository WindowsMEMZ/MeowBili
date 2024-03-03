//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MIONumericConstraint_h
#define MIONumericConstraint_h
@import Foundation;

#include "MIOFeatureValueConstraint-Protocol.h"

@class NSNumber, NSSet, NSString;

@interface MIONumericConstraint : NSObject<MIOFeatureValueConstraint>

@property (readonly, nonatomic) NSNumber *minNumber;
@property (readonly, nonatomic) NSNumber *maxNumber;
@property (readonly, copy, nonatomic) NSSet *enumeratedNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMinimum:(id)minimum maximum:(id)maximum;
- (id)initWithEnumeratedNumbers:(id)numbers;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MIONumericConstraint_h */