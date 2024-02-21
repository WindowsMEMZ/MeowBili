//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUtilitySmallRingImageComplicationView_h
#define NTKUtilitySmallRingImageComplicationView_h
@import Foundation;

#include "NTKUtilitySmallRingComplicationView.h"

@class CLKProgressProvider, NSNumber;
@protocol UIView<CDComplicationImageView;

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView {
  /* instance variables */
  UIView<CDComplicationImageView> *_imageView;
  CLKProgressProvider *_progressProvider;
  NSNumber *_progressUpdateToken;
}

/* class methods */
+ (BOOL)handlesComplicationTemplate:(id)template;

/* instance methods */
- (void)layoutSubviews;
- (void)_updateWithImageProvider:(id)provider;
- (void)_updateForTemplateChange;
- (void)updateRingWithProgressProvider:(id)provider;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)block;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)block;
- (id)ringColor;
@end

#endif /* NTKUtilitySmallRingImageComplicationView_h */