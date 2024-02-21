//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKToneClassicsPickerItem_h
#define TKToneClassicsPickerItem_h
@import Foundation;

#include "TKTonePickerItem.h"
#include "TKTonePickerItem.h"

@interface TKToneClassicsPickerItem : TKTonePickerItem

@property (weak, nonatomic) TKTonePickerItem *parentItem;
@property (nonatomic) long long classicToneIndex;

/* instance methods */
- (id)childItemAtIndex:(long long)index;
- (void)_appendDescriptionOfAttributesToString:(id)string;
- (void)_setParentItem:(id)item;
- (void)_setClassicToneIndex:(long long)index;
@end

#endif /* TKToneClassicsPickerItem_h */