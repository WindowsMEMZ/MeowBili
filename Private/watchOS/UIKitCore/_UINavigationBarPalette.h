//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarPalette_h
#define _UINavigationBarPalette_h
@import Foundation;

#include "UIView.h"
#include "UINavigationItem.h"
#include "UIView.h"
#include "_UINavigationBarLayoutParticipating-Protocol.h"

@interface _UINavigationBarPalette : UIView<_UINavigationBarLayoutParticipating>

@property (nonatomic) BOOL transitioning;
@property (nonatomic) BOOL pinned;
@property (weak, nonatomic) UINavigationItem *owningNavigationItem;
@property (nonatomic) unsigned long long _contentViewMarginType;
@property (nonatomic) BOOL _displaysWhenSearchActive;
@property (nonatomic) long long _layoutPriority;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) double minimumHeight;

/* instance methods */
- (id)init;
- (id)initWithContentView:(id)view;
- (void)addSubview:(id)subview;
- (void)layoutSubviews;
- (void)updateLayoutData:(id)data layoutWidth:(double)width;
- (BOOL)isPinned;
- (void)_setContentViewMarginType:(unsigned long long)type;
- (void)_setDisplaysWhenSearchActive:(BOOL)active;
- (void)_setLayoutPriority:(long long)priority;
@end

#endif /* _UINavigationBarPalette_h */