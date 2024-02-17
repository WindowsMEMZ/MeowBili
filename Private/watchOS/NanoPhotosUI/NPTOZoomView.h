//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOZoomView_h
#define NPTOZoomView_h
@import Foundation;

#include "UIScrollView.h"

@class PUICCrownInputSequencer, UIView;

@interface NPTOZoomView : UIScrollView {
  /* instance variables */
  BOOL _insideZoomToRectNonAnimated;
}

@property (readonly, nonatomic) PUICCrownInputSequencer *zoomCrownInputSequencer;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL snapsAroundNormalZoomScale;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isZooming;
- (BOOL)isZoomBouncing;
- (void)setBouncesZoom:(BOOL)zoom;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset animated:(BOOL)animated;
- (void)setMinimumZoomScale:(double)scale;
- (void)setMaximumZoomScale:(double)scale;
- (void)setZoomScale:(double)scale animated:(BOOL)animated;
- (void)zoomToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect animated:(BOOL)animated;
- (void)_zoomToCenter:(struct CGPoint { double x0; double x1; })center scale:(double)scale duration:(double)duration;
- (void)_zoomToCenter:(struct CGPoint { double x0; double x1; })center scale:(double)scale duration:(double)duration force:(BOOL)force;
- (void)layoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (void)_wheelChangedWithEvent:(id)event;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)crownInputSequencerIdleDidChange:(id)change;
- (BOOL)crownInputSequencer:(id)sequencer shouldRubberBandAtBoundary:(long long)boundary;
- (BOOL)_crownInputSequencerShouldSuppressInput:(id)input;
- (void)_crownInputSequencer:(id)sequencer offsetDidChangeByDistance:(double)distance;
- (void)crownInputSequencerWillBecomeIdle:(id)idle withCrownVelocity:(double)velocity targetOffset:(inout double *)offset;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
@end

#endif /* NPTOZoomView_h */