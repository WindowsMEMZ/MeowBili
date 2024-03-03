//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICCollectionViewLayoutAttributes_h
#define PUICCollectionViewLayoutAttributes_h
@import Foundation;

#include "UICollectionViewLayoutAttributes.h"

@interface PUICCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) unsigned long long notchBehavior;
@property (nonatomic) long long notchStrength;
@property (nonatomic) double notchOffset;
@property (nonatomic) long long notchOffsetCalculationMethod;
@property (nonatomic) long long notchTallCellBehavior;
@property (nonatomic) double notchReferenceHeight;
@property (nonatomic) double blurRadius;
@property (nonatomic) double zPosition;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isSizeEqualForPreferredFittingAttributes:(id)attributes;
@end

#endif /* PUICCollectionViewLayoutAttributes_h */