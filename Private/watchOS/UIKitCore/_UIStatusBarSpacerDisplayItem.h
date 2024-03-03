//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarSpacerDisplayItem_h
#define _UIStatusBarSpacerDisplayItem_h
@import Foundation;

#include "_UIStatusBarDisplayItem.h"
#include "UILayoutGuide.h"

@class NSArray;

@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem

@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithIdentifier:(id)identifier item:(id)item;
- (void)applyUpdate:(id)update;
- (void)setContainerView:(id)view;
- (void)_applyConstraintsIfNeeded;
@end

#endif /* _UIStatusBarSpacerDisplayItem_h */