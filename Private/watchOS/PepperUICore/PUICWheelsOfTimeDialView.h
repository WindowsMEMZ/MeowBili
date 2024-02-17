//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICWheelsOfTimeDialView_h
#define PUICWheelsOfTimeDialView_h
@import Foundation;

#include "UIView.h"

@class NSArray, NSNumberFormatter;

@interface PUICWheelsOfTimeDialView : UIView {
  /* instance variables */
  const struct { double x0; double x1; double x2; double x3; double x4; } * _layout;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tickFrame;
  NSArray *_tickModels;
  BOOL _hasPopulatedTimeLabels;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _timeLabelFrame;
  NSArray *_timeLabels;
  NSArray *_timeLabelAnchorPoints;
  long long _timeNumberSystem;
  NSNumberFormatter *_numberFormatter;
}

@property (nonatomic) long long style;

/* class methods */
+ (id)_majorTickColor;
+ (id)_minorTickColor;
+ (id)_labelTextColor;

/* instance methods */
- (id)initWithStyle:(long long)style;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (void)dealloc;
- (double)diameter;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)layoutSubviews;
- (void)_addTimeLabels;
- (void)_contentSizeCategoryChanged:(id)changed;
- (void)_localeChanged:(id)changed;
- (void)_updateTextForTimeLabels;
- (BOOL)_updateTickModels;
@end

#endif /* PUICWheelsOfTimeDialView_h */