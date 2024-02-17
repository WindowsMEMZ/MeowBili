//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLLauncherCollectionViewLayout_h
#define CSLLauncherCollectionViewLayout_h
@import Foundation;

#include "PUICListCollectionViewLayout.h"

@class CSLALauncherTransitionInterpolator;

@interface CSLLauncherCollectionViewLayout : PUICListCollectionViewLayout {
  /* instance variables */
  CSLALauncherTransitionInterpolator *_interpolator;
}

@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) double transitionProgress;

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)init;
- (void)_configureAttributes:(id)attributes;
- (long long)rowForAttributesAtIndexPath:(id)path;
- (void)transformAttributesForTransitionProgress:(id)progress;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
@end

#endif /* CSLLauncherCollectionViewLayout_h */