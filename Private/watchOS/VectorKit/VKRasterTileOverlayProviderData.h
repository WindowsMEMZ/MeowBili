//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKRasterTileOverlayProviderData_h
#define VKRasterTileOverlayProviderData_h
@import Foundation;

#include "VKRasterTileOverlayProviderDelegate-Protocol.h"

@class NSArray, NSString;

@interface VKRasterTileOverlayProviderData : NSObject

@property (weak, nonatomic) NSObject<VKRasterTileOverlayProviderDelegate> *delegate;
@property (nonatomic) unsigned int visibleKeyframeIndex;
@property (readonly, nonatomic) unsigned int providerID;
@property (readonly, nonatomic) unsigned int tileSize;
@property (readonly, nonatomic) unsigned int minimumZ;
@property (readonly, nonatomic) unsigned int maximumZ;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned short keyframesCount;
@property (readonly, nonatomic) BOOL crossfadeKeyframes;
@property (nonatomic) double beginTime;
@property (nonatomic) double timeOffset;
@property (nonatomic) float repeatCount;
@property (nonatomic) double repeatDuration;
@property (nonatomic) double duration;
@property (nonatomic) float speed;
@property (nonatomic) BOOL autoreverses;
@property (copy, nonatomic) NSString *fillMode;
@property (copy) NSArray *keyTimes;
@property (nonatomic) int keyframeIndexOverride;
@property (nonatomic) struct CGImage * colorMap;

/* instance methods */
- (id)initWithProviderID:(unsigned int)id tileSize:(unsigned int)size minimumZ:(unsigned int)z maximumZ:(unsigned int)z keyframesCount:(unsigned short)count duration:(double)duration crossfadeKeyframes:(BOOL)keyframes;
- (void)dealloc;
@end

#endif /* VKRasterTileOverlayProviderData_h */