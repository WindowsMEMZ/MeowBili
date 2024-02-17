//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDialView_h
#define NTKDialView_h
@import Foundation;

#include "UIView.h"

@class CLKDevice, NSIndexSet, NSMutableArray, NSNumber;

@interface NTKDialView : UIView

@property (nonatomic) unsigned long long numberOfMarkers;
@property (copy, nonatomic) id /* block */ markersFactory;
@property (copy, nonatomic) id /* block */ angleProvider;
@property (nonatomic) double diameter;
@property (retain, nonatomic) NSMutableArray *markers;
@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic) BOOL needsLayoutMarkers;
@property (nonatomic) double contentInset;
@property (nonatomic) double contentDiameter;
@property (nonatomic) double angleOffset;
@property (nonatomic) BOOL shouldRotateMarkers;
@property (retain, nonatomic) NSIndexSet *markersToRotateIndexSet;
@property (nonatomic) BOOL shouldPixelAlignCenterPoints;
@property (retain, nonatomic) NSNumber *hidingMaskStartAngle;
@property (retain, nonatomic) NSNumber *hidingMaskEndAngle;
@property (nonatomic) BOOL disableLayout;
@property (copy, nonatomic) id /* block */ markerRotationProvider;

/* instance methods */
- (id)initWithNumberOfMarkers:(unsigned long long)markers markersFactory:(id /* block */)factory;
- (id)initWithNumberOfMarkers:(unsigned long long)markers markersFactory:(id /* block */)factory angleProvider:(id /* block */)provider;
- (void)layoutSubviews;
- (void)replaceMarker:(id)marker atIndex:(long long)index;
- (void)reloadMarkers;
- (void)enumerateMarkers:(id /* block */)markers;
- (double)totalDiameter;
- (double)searchForClosestMarkerAngleAtAngle:(double)angle;
- (unsigned long long)searchForClosestIndexAtAngle:(double)angle;
- (void)layoutMarkers;
- (void)_layoutCurvedLabel:(id)label rotationAngle:(double)angle;
- (void)updateMarkersVisibility;
- (BOOL)shouldHideMarkerAtIndex:(long long)index;
- (id)markerAtIndex:(unsigned long long)index;
- (double)angleForIndex:(double)index;
- (struct CGPoint { double x0; double x1; })positionForMarkerAtIndex:(unsigned long long)index;
- (struct CGPoint { double x0; double x1; })centerPointForAngle:(double)angle radius:(long long)radius;
@end

#endif /* NTKDialView_h */