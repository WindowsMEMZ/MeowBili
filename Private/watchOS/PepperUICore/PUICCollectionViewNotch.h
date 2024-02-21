//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICCollectionViewNotch_h
#define PUICCollectionViewNotch_h
@import Foundation;

@interface PUICCollectionViewNotch : NSObject

@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) unsigned long long startEdgeType;
@property (nonatomic) unsigned long long endEdgeType;
@property (nonatomic) double restingPosition;
@property (nonatomic) BOOL shouldIgnoreNotch;

/* instance methods */
- (id)initWithCenter:(double)center radius:(double)radius;
- (id)initWithCenter:(double)center radius:(double)radius startEdgeType:(unsigned long long)type endEdgeType:(unsigned long long)type;
- (id)initWitRestingPosition:(double)position radius:(double)radius restingLocation:(long long)location;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)overlapsWithNotch:(id)notch;
- (BOOL)hasSoftEdge;
- (id)rangeDescription;
- (id)description;
@end

#endif /* PUICCollectionViewNotch_h */