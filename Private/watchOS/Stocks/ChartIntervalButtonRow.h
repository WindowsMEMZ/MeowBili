//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef ChartIntervalButtonRow_h
#define ChartIntervalButtonRow_h
@import Foundation;

#include "UIView.h"
#include "ChartIntervalButton.h"

@class NSArray;
@protocol ChartIntervalButtonRowDelegate;

@interface ChartIntervalButtonRow : UIView

@property (weak, nonatomic) NSObject<ChartIntervalButtonRowDelegate> *delegate;
@property (retain, nonatomic) NSArray *intervalButtons;
@property (weak, nonatomic) ChartIntervalButton *selectedButton;
@property (nonatomic) long long maxChartInterval;

/* instance methods */
- (id)initWithMaxChartInterval:(long long)interval chartIntervalButtonRowDelegate:(id)delegate;
- (void)sizeToBoldLabels;
- (void)layoutSubviews;
- (long long)intervalForTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (void)intervalButtonsTapped:(id)tapped;
- (void)selectChartIntervalButtonForInterval:(long long)interval;
- (void)updateMaxChartInterval:(long long)interval;
@end

#endif /* ChartIntervalButtonRow_h */