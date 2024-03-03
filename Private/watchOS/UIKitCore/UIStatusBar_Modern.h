//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBar_Modern_h
#define UIStatusBar_Modern_h
@import Foundation;

#include "UIStatusBar_Base.h"
#include "_UIStatusBar.h"

@interface UIStatusBar_Modern : UIStatusBar_Base

@property (retain, nonatomic) _UIStatusBar *statusBar;

/* class methods */
+ (Class)_implementationClass;
+ (double)_heightForStyle:(long long)style orientation:(long long)orientation forStatusBarFrame:(BOOL)frame inWindow:(id)window isAzulBLinked:(BOOL)blinked;
+ (long long)_defaultStyleForRequestedStyle:(long long)style styleOverrides:(unsigned long long)overrides activeStyleOverride:(unsigned long long *)override;
+ (void)registerSensorActivityIndicator:(id)indicator forScreen:(id)screen;
+ (id)sensorActivityIndicatorForScreen:(id)screen;
+ (void)setSensorActivityIndicator:(id)indicator;
+ (id)sensorActivityIndicator;

/* instance methods */
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame showForegroundView:(BOOL)view wantsServer:(BOOL)server inProcessStateProvider:(id)provider;
- (void)_updateSemanticContentAttributeFromLegacyData:(const struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data;
- (id)_dataFromLegacyData:(const struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data;
- (long long)_effectiveStyleFromStyle:(long long)style;
- (id)_effectiveDataFromData:(id)data activeOverride:(unsigned long long)override canUpdateBackgroundActivity:(BOOL)activity;
- (unsigned long long)_implicitStyleOverrideForStyle:(long long)style;
- (void)_updateWithData:(id)data force:(BOOL)force;
- (void)_requestStyle:(long long)style partStyles:(id)styles legibilityStyle:(long long)style foregroundColor:(id)color animationParameters:(id)parameters forced:(BOOL)forced;
- (void)_requestStyle:(long long)style partStyles:(id)styles animationParameters:(id)parameters forced:(BOOL)forced;
- (long long)currentStyle;
- (void)setStyleRequest:(id)request animationParameters:(id)parameters;
- (void)setForegroundColor:(id)color animationParameters:(id)parameters;
- (void)setForegroundAlpha:(double)alpha animationParameters:(id)parameters;
- (void)setLegibilityStyle:(long long)style animationParameters:(id)parameters;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame animationSettings:(id)settings options:(unsigned long long)options;
- (double)defaultDoubleHeight;
- (void)setMode:(long long)mode;
- (id)clockFont;
- (void)setOrientation:(long long)orientation;
- (void)jiggleLockIcon;
- (void)setAction:(id)action forPartWithIdentifier:(id)identifier;
- (id)actionForPartWithIdentifier:(id)identifier;
- (void)setOffset:(struct UIOffset { double x0; double x1; })offset forPartWithIdentifier:(id)identifier;
- (struct UIOffset { double x0; double x1; })offsetForPartWithIdentifier:(id)identifier;
- (void)setAlpha:(double)alpha forPartWithIdentifier:(id)identifier;
- (double)alphaForPartWithIdentifier:(id)identifier;
- (void)setEnabledPartIdentifiers:(id)identifiers;
- (id)enabledPartIdentifiers;
- (void)setDisabledPartIdentifiers:(id)identifiers;
- (id)disabledPartIdentifiers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPartWithIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)forceUpdate:(BOOL)update;
- (void)forceUpdateData:(BOOL)data;
- (void)statusBarServer:(id)server didReceiveStatusBarData:(const struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data withActions:(int)actions;
- (void)statusBarServer:(id)server didReceiveStyleOverrides:(unsigned long long)overrides;
- (void)statusBarStateProvider:(id)provider didPostStatusBarData:(const struct { BOOL x0[46] char x1[64] char x2[64] char x3[256] int x4; int x5; int x6; int x7; char x8[100] char x9[100] char x10[100] char x11[100] c] x12[2[100] char x13[1024] unsigned int x14; unsigned int x15; unsigned int x16 :1; unsigned int x17 :1; int x18; int x19; unsigned int x20 :1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150] int x26; int x27; unsigned int x28 :1; unsigned int x29 :1; unsigned int x30 :1; char x31[256] unsigned int x32 :1; unsigned int x33 :1; unsigned int x34 :1; unsigned int x35 :2; unsigned int x36 :2; unsigned int x37 :1; unsigned int x38; unsigned int x39 :1; unsigned int x40 :1; unsigned int x41 :1; char x42[256] char x43[256] char x44[100] unsigned int x45 :1; unsigned int x46 :1; unsigned int x47 :1; unsigned int x48 :1; unsigned int x49 :1; double x50; unsigned int x51 :1; unsigned int x52 :1; unsigned int x53 :1; char x54[100] char x55[100] char x56[256] char x57[256] } *)data withActions:(int)actions;
- (void)statusBarServer:(id)server didReceiveDoubleHeightStatusString:(id)string forStyle:(long long)style;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* UIStatusBar_Modern_h */