//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKPolylineOverlay_h
#define VKPolylineOverlay_h
@import Foundation;

#include "GEOComposedRouteObserver-Protocol.h"
#include "VKRouteLine.h"
#include "VKRouteOverlay-Protocol.h"

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOMapRegion, NSString;
@protocol VKPolylineOverlayRouteRibbonObserver, {unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>>="__ptr_"{__compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>>="__value_"^{TrafficSegmentsAlongRoute}}};

@interface VKPolylineOverlay : NSObject<VKRouteOverlay, GEOComposedRouteObserver> {
  /* instance variables */
  struct __CFSet * _observers;
  BOOL _isReadyForSnapping;
  struct unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>> { struct __compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>> { struct TrafficSegmentsAlongRoute *__value_; } __ptr_; } _trafficSegments;
}

@property (readonly, nonatomic) double trafficTimeStamp;
@property (weak, nonatomic) VKRouteLine *routeRibbon;
@property (weak, nonatomic) NSObject<VKPolylineOverlayRouteRibbonObserver> *routeRibbonObserver;
@property (readonly, nonatomic) BOOL containsTransit;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasFocus;
@property (nonatomic) BOOL showTraffic;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithComposedRoute:(id)route traffic:(id)traffic;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_setNeedsLayout;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sectionRangeForBounds:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2] } x0; struct Matrix<double, 2, 1> { double x0[2] } x1; })bounds;
- (void)updateTraffic:(id)traffic;
- (void)clearSnappedPathsForObserver:(id)observer;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)start end:(unsigned int)end;
- (void)createMatchedSegmentAndAddToPaths:(id)paths section:(id)section pathStartIndex:(unsigned int)index pathEndIndex:(unsigned int)index shouldGenerateSnapPath:(BOOL)path;
- (id)getPathsForRenderRegion:(id)region shouldSnapToRoads:(BOOL)roads shouldGenerateSnapPath:(BOOL)path verifySnapping:(BOOL)snapping isGradientTraffic:(BOOL)traffic observer:(id)observer;
- (BOOL)isSnappingForSceneTiles;
- (struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode * x0; struct DebugTreeNode * x1; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode * x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty * x0; struct DebugTreeProperty * x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty * x0; } x2; } x3; })createDebugNode;
- (void)composedRouteUpdatedSnappedPaths:(id)paths;
- (void)composedRoute:(id)route selectedSections:(id)sections deselectedSections:(id)sections;
- (void)composedRoute:(id)route changedSelectedRideInClusteredSegment:(id)segment fromIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (void)composedRoute:(id)route appliedTransitRouteUpdates:(id)updates;
@end

#endif /* VKPolylineOverlay_h */