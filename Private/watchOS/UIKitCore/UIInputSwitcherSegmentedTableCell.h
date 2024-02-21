//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputSwitcherSegmentedTableCell_h
#define UIInputSwitcherSegmentedTableCell_h
@import Foundation;

#include "UIInputSwitcherTableCell.h"
#include "UIInputSwitcherSegmentControl.h"

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell

@property (readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeWithSegmentCount:(unsigned long long)count;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })point;
- (void)layoutSubviews;
- (void)setUsesDarkTheme:(BOOL)theme;
@end

#endif /* UIInputSwitcherSegmentedTableCell_h */