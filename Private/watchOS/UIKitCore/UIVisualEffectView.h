//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIVisualEffectView_h
#define UIVisualEffectView_h
@import Foundation;

#include "UIView.h"
#include "NSSecureCoding-Protocol.h"
#include "UIImage.h"
#include "UIView.h"
#include "UIVisualEffect.h"
#include "UIVisualEffectView.h"
#include "_UIVisualEffectEnvironment.h"
#include "_UIVisualEffectHost.h"
#include "_UIVisualEffectViewBackdropCaptureGroup.h"
#include "_UIVisualEffectViewCornerMask.h"

@class NSArray, NSMutableArray, NSString;

@interface UIVisualEffectView : UIView<NSSecureCoding> {
  /* instance variables */
  UIView *_maskView;
  UIImage *_maskImage;
  _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
  NSMutableArray *_captureDependents;
  _UIVisualEffectHost *_backgroundHost;
  _UIVisualEffectHost *_contentHost;
  _UIVisualEffectEnvironment *_environment;
  struct { unsigned int x :1 backgroundHostNeedsUpdate; unsigned int x :1 contentHostNeedsUpdate; unsigned int x :1 allowsDithering; unsigned int x :1 allowsBlurring; unsigned int x :1 allowsGroupFiltering; unsigned int x :1 useReducedTransparencyForContentHost; unsigned int x :1 isUpdatingSubviews; unsigned int x :1 hasBackdropBackgroundColorAlpha; unsigned int x :1 allowsTransparentBlurring; } _effectViewFlags;
  UIVisualEffectView *_captureSource;
}

@property (nonatomic) double _cornerRadius;
@property (retain, nonatomic) _UIVisualEffectViewCornerMask *_cornerMask;
@property (readonly, nonatomic) BOOL _applyCornerMaskToSelf;
@property (nonatomic) double _backdropViewBackgroundColorAlpha;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) NSArray *contentEffects;
@property (nonatomic) BOOL useLiveMasking;
@property (nonatomic) BOOL _noiseEnabled;
@property (copy, nonatomic) NSString *_groupName;
@property (weak, nonatomic) _UIVisualEffectBackdropView *_captureView;
@property (nonatomic) BOOL allowsDithering;
@property (nonatomic) BOOL allowsBlurring;
@property (readonly, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
@property (copy, nonatomic) NSArray *_captureDependents;
@property (readonly, weak, nonatomic) UIVisualEffectView *_captureSource;
@property (nonatomic) long long _renderMode;
@property (retain, nonatomic) UIImage *_maskImage;
@property (nonatomic) BOOL _allowsGroupFiltering;
@property (nonatomic) BOOL useReducedTransparencyForContentEffects;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;

/* class methods */
+ (Class)_contentViewClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)necessary;
- (BOOL)__isLandmarkView;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id /* block */)necessary;
- (void)_updateEffectForAccessibilityChanges:(id)changes;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)_commonInit;
- (void)_ensureBackgroundHost;
- (void)_ensureContentHostWithView:(id)view;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithEffect:(id)effect;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_populateArchivedSubviews:(id)subviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)respondToSettingsUpdate;
- (void)traitCollectionDidChange:(id)change;
- (id)_initialValueForKey:(id)key;
- (void)_generateEffectAnimations:(id)animations;
- (void)_generateBackgroundEffects:(id)effects contentEffects:(id)effects;
- (void)_generateDeferredAnimations:(id)animations;
- (void)_setEffect:(id)effect;
- (void)_updateEffectsFromLegacyEffect;
- (id)_effectDescriptorForEffects:(id)effects usage:(long long)usage;
- (void)_updateSubView:(id)view frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateSubviews;
- (void)_configureEffects;
- (void)_setGroupName:(id)name;
- (void)_setCaptureView:(id)view;
- (void)_setCaptureDependents:(id)dependents;
- (void)_addCaptureDependent:(id)dependent;
- (void)_removeCaptureDependent:(id)dependent;
- (void)_updateCaptureDependents;
- (void)_setRenderMode:(long long)mode;
- (void)_applyCornerRadiusToSubviews;
- (void)_setCornerRadius:(double)radius;
- (double)_continuousCornerRadius;
- (id)_cornerCurve;
- (void)_setContinuousCornerRadius:(double)radius;
- (void)_setCornerRadius:(double)radius continuous:(BOOL)continuous maskedCorners:(unsigned long long)corners;
- (void)_setCornerMask:(id)mask;
- (void)_setNoiseEnabled:(BOOL)enabled;
- (BOOL)_isNoiseEnabled;
- (id)_maskImageForMaskView:(id)view;
- (void)_setMaskView:(id)view;
- (id)_maskView;
- (void)_setMaskImage:(id)image;
- (void)_setAllowsGroupFiltering:(BOOL)filtering;
- (void)layoutSubviews;
- (void)_addSubview:(id)subview positioned:(long long)positioned relativeTo:(id)to;
- (id)_traitCollectionForChildEnvironment:(id)environment;
- (id)_debug;
- (id)description;
- (id)_whatsWrongWithThisEffect;
- (void)_setBackdropViewBackgroundColorAlpha:(double)alpha;
- (void)_setUseReducedTransparencyForContentEffects:(BOOL)effects;
- (BOOL)_useReducedTransparencyForContentEffects;
- (void)_updateEffectForSnapshotWillBegin:(id)begin;
- (void)_updateEffectForSnapshotDidEnd:(id)end;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)begin;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)end;
- (void)_updateEffectBackgroundColor;
- (void)_resetEffect;
- (void)_updateEffectForReducedTransparency;
- (void)_setTintOpacity:(double)opacity;
- (id)_contentHost;
- (id)_backgroundHost;
- (id)_environment;
- (BOOL)_useLiveMasking;
- (void)_setUseLiveMasking:(BOOL)masking;
@end

#endif /* UIVisualEffectView_h */