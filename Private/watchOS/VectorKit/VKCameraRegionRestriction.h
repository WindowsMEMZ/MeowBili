//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKCameraRegionRestriction_h
#define VKCameraRegionRestriction_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class GEOMapRegion;
@protocol {Box<double, 2>="_minimum"{Matrix<double, 2, 1>="_e"[2d]}"_maximum"{Matrix<double, 2, 1>="_e"[2d]}};

@interface VKCameraRegionRestriction : NSObject<NSSecureCoding> {
  /* instance variables */
  struct Box<double, 2> { struct Matrix<double, 2, 1> { double x[2] _e; } _minimum; struct Matrix<double, 2, 1> { double x[2] _e; } _maximum; } _singleRestrictionMercator;
  struct Box<double, 2> { struct Matrix<double, 2, 1> { double x[2] _e; } _minimum; struct Matrix<double, 2, 1> { double x[2] _e; } _maximum; } _westOfDatelineMercator;
  struct Box<double, 2> { struct Matrix<double, 2, 1> { double x[2] _e; } _minimum; struct Matrix<double, 2, 1> { double x[2] _e; } _maximum; } _eastOfDatelineMercator;
  struct Box<double, 2> { struct Matrix<double, 2, 1> { double x[2] _e; } _minimum; struct Matrix<double, 2, 1> { double x[2] _e; } _maximum; } _singleRestrictionCoord;
  struct Box<double, 2> { struct Matrix<double, 2, 1> { double x[2] _e; } _minimum; struct Matrix<double, 2, 1> { double x[2] _e; } _maximum; } _westOfDatelineCoord;
  struct Box<double, 2> { struct Matrix<double, 2, 1> { double x[2] _e; } _minimum; struct Matrix<double, 2, 1> { double x[2] _e; } _maximum; } _eastOfDatelineCoord;
}

@property (readonly, nonatomic) BOOL empty;
@property (readonly, retain, nonatomic) GEOMapRegion *mapRegion;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMapRegion:(id)region;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })coordinate;
- (struct { double x0; double x1; })clampedCoordinate:(struct { double x0; double x1; })coordinate;
- (struct Matrix<double, 2, 1> { double x0[2] })clampedPosition:(struct Matrix<double, 2, 1> { double x0[2] })position;
- (struct Matrix<double, 2, 1> { double x0[2] })clampedPosition:(struct Matrix<double, 2, 1> { double x0[2] })position usingSingleRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2] } x0; struct Matrix<double, 2, 1> { double x0[2] } x1; })restriction westOfDatelineRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2] } x0; struct Matrix<double, 2, 1> { double x0[2] } x1; })restriction eastOfDatelineRestriction:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2] } x0; struct Matrix<double, 2, 1> { double x0[2] } x1; })restriction wrapRange:(struct Range<double> { double x0; double x1; })range;
- (struct Matrix<double, 2, 1> { double x0[2] })clampedPositionForOrigin:(struct Matrix<double, 2, 1> { double x0[2] })origin delta:(struct Matrix<double, 2, 1> { double x0[2] })delta;
- (void)radianSingleRect:(void *)rect westOfDatelineRect:(void *)rect eastOfDatelineRect:(void *)rect;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEmpty;
@end

#endif /* VKCameraRegionRestriction_h */