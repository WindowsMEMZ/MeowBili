//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef GEOComposedRoute_MNExtras_h
#define GEOComposedRoute_MNExtras_h
@import Foundation;

@interface GEOComposedRoute (MNExtras)
/* class methods */
+ (BOOL)pointsDiverge:(struct { double x0; double x1; } *)diverge pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count outCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (BOOL)_pointsDiverge:(struct { double x0; double x1; } *)diverge pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count tolerance:(double)tolerance outCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (BOOL)pointsConverge:(struct { double x0; double x1; } *)converge pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count outCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (BOOL)_pointsConverge:(struct { double x0; double x1; } *)converge pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count tolerance:(double)tolerance outCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (BOOL)_pointsConverge:(struct { double x0; double x1; } *)converge pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count tolerance:(double)tolerance outCoordinatesA:(out id *)a outCoordinatesB:(out id *)b;
+ (void)findDivergenceAndConvergence:(struct { double x0; double x1; } *)convergence pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count divergenceTolerance:(double)tolerance convergenceTolerance:(double)tolerance outCoordinatesA:(out id *)a outCoordinatesB:(out id *)b;
+ (void)findDivergenceAndConvergence:(struct { double x0; double x1; } *)convergence pointCount:(unsigned long long)count otherCoordinates:(struct { double x0; double x1; } *)coordinates pointCount:(unsigned long long)count distanceInMeters:(double)meters outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (void)findDivergenceAndConvergence:(struct { double x0; double x1; } *)convergence pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (void)_findDivergenceAndConvergence:(struct { double x0; double x1; } *)convergence pointCount:(unsigned long long)count otherPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count divergenceTolerance:(double)tolerance convergenceTolerance:(double)tolerance outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)b;
+ (unsigned long long)_startIndexForPoints:(struct Matrix<double, 2, 1> { double x0[2] })points withPoints:(void *)points pointCount:(unsigned long long)count toleranceSquared:(double)squared;
+ (void)_addPointsToArray:(id)array forMapPoints:(struct { double x0; double x1; } *)points pointCount:(unsigned long long)count isPolylineA:(BOOL)a;
+ (id)_stringForPoint:(const void *)point;

/* instance methods */
- (id)_navigation_rootBoundingSection;
- (id)_navigation_boundingSectionForRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })range leafIndex:(unsigned long long *)index;
- (id)_navigation_leafBoundingSectionForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })coordinate;
- (id)_navigation_leafBoundingSectionContainingCoordinate:(struct { double x0; double x1; double x2; })coordinate;
- (id)_navigation_leafBoundingSectionsIntersectingSection:(id)section;
- (id)_navigation_leafBoundingSectionsIntersectingSection:(id)section paddingMapPoints:(double)points;
- (id)_navigation_allLeafBoundingSections;
- (void)findDivergenceAndConvergenceWithRoute:(id)route outDivergenceCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)coordinate outConvergenceCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)coordinate;
- (void)findDivergenceAndConvergenceWithRoute:(id)route distanceInMeters:(double)meters outDivergenceCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)coordinate outConvergenceCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)coordinate;
- (id)divergenceAndConvergenceWithRoute:(id)route;
- (id)divergenceAndConvergenceWithRoute:(id)route outOtherRoutePoints:(out id *)points;
- (id)_mapPoints;
- (BOOL)_isNavigableForWatch;
- (BOOL)isMultipointRoute;
- (id)userRequestedWaypoints;
@end

#endif /* GEOComposedRoute_MNExtras_h */