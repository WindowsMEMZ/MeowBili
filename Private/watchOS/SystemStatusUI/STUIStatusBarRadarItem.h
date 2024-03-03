//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarRadarItem_h
#define STUIStatusBarRadarItem_h
@import Foundation;

#include "STUIStatusBarIndicatorItem.h"
#include "STUIStatusBarRadarView.h"

@interface STUIStatusBarRadarItem : STUIStatusBarIndicatorItem

@property (retain, nonatomic) STUIStatusBarRadarView *radarItemView;

/* instance methods */
- (id)indicatorEntryKey;
- (id)imageForUpdate:(id)update;
- (void)_create_radarItemView;
- (id)imageView;
- (id)viewForIdentifier:(id)identifier;
@end

#endif /* STUIStatusBarRadarItem_h */