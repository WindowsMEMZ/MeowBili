//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKVectorOverlayPolylineGroup_h
#define VKVectorOverlayPolylineGroup_h
@import Foundation;

#include "VKVectorOverlayData.h"

@class NSArray;
@protocol struct shared_ptr<md::PolylineOverlayStyle> { struct PolylineOverlayStyle * x0; struct __shared_weak_count * x1; }, {shared_ptr<md::PolylineOverlayStyle>="__ptr_"^{PolylineOverlayStyle}"__cntrl_"^{__shared_weak_count}};

@interface VKVectorOverlayPolylineGroup : VKVectorOverlayData {
  /* instance variables */
  struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _propertiesLock;
}

@property (readonly, nonatomic) struct shared_ptr<md::PolylineOverlayStyle> { struct PolylineOverlayStyle * x0; struct __shared_weak_count * x1; } style;
@property (readonly, nonatomic) NSArray *polylines;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lineJoin;
@property (nonatomic) long long lineCap;
@property (nonatomic) struct CGColor * color;
@property (nonatomic) double alpha;
@property (nonatomic) double miterLimit;
@property (nonatomic) double strokeStart;
@property (nonatomic) double strokeEnd;

/* instance methods */
- (id)initWithPolylines:(id)polylines;
- (void)dealloc;
- (void)setBlendMode:(long long)mode;
- (void)setColorStopColors:(id)colors locations:(id)locations;
- (void)_updateStyleColor;
@end

#endif /* VKVectorOverlayPolylineGroup_h */