//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUNowPlayingIndicatorView_h
#define NMUNowPlayingIndicatorView_h
@import Foundation;

#include "UIView.h"

@class NSMutableArray;

@interface NMUNowPlayingIndicatorView : UIView {
  /* instance variables */
  NSMutableArray *_levelViews;
}

@property (readonly, nonatomic) unsigned long long numberOfLevels;
@property (readonly, nonatomic) unsigned long long animationType;
@property (nonatomic) double interLevelSpacing;
@property (nonatomic) double levelWidth;
@property (nonatomic) double levelCornerRadius;
@property (nonatomic) double maximumLevelHeight;
@property (nonatomic) double minimumLevelHeight;
@property (nonatomic) BOOL stopped;
@property (nonatomic) BOOL showsIdealizedLevelPositionsWhenStopped;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame numberOfLevels:(unsigned long long)levels animationType:(unsigned long long)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)change;
- (void)_removeAllAnimations:(BOOL)animations;
- (void)_createLevelViews;
- (double)_levelHeightWithPercentage:(double)percentage;
- (void)_updateLevelAnimations;
- (void)_invalidateCachedLevelHeights;
- (id)_barAnimationForBarIndex:(unsigned long long)index;
- (BOOL)isStopped;
@end

#endif /* NMUNowPlayingIndicatorView_h */