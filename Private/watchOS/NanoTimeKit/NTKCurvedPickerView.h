//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCurvedPickerView_h
#define NTKCurvedPickerView_h
@import Foundation;

#include "UIView.h"
#include "NTKEditOptionContainerView-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NTKCurvedPickerView : UIView<NTKEditOptionContainerView> {
  /* instance variables */
  NSMutableDictionary *_sideViews;
  unsigned long long _activeSide;
  unsigned long long _transitioningSide;
  double _currentFraction;
}

@property (readonly, nonatomic) double circleRadius;
@property (readonly, nonatomic) double centerAngle;
@property (readonly, nonatomic) BOOL interior;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } circleCenter;
@property (readonly, nonatomic) unsigned long long numberOfSides;
@property (readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setCircleRadius:(double)radius centerAngle:(double)angle circleCenter:(struct CGPoint { double x0; double x1; })center interior:(BOOL)interior;
- (void)setView:(id)view forSideAtIndex:(unsigned long long)index;
- (id)viewForSideAtIndex:(unsigned long long)index;
- (void)enumerateSideViewsWithBlock:(id /* block */)block;
- (void)transitionToSideAtIndex:(unsigned long long)index;
- (void)transitionToFraction:(double)fraction fromSideAtIndex:(unsigned long long)index toSideAtIndex:(unsigned long long)index;
- (void)_setCurrentFraction:(double)fraction;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForAngle:(double)angle;
- (double)_angleForIndex:(unsigned long long)index;
- (double)_alphaForIndex:(unsigned long long)index;
@end

#endif /* NTKCurvedPickerView_h */