//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBasePhotosFaceView_h
#define NTKBasePhotosFaceView_h
@import Foundation;

#include "NTKBackgroundImageFaceView.h"
#include "NTKAlbumEmptyView.h"
#include "NTKPhotoImageView.h"
#include "NTKPhotoImageViewDelegate-Protocol.h"
#include "NTKTaskScheduler.h"
#include "NTKUtilityComplicationFactory.h"

@class NSString, NSTimer, NSValue, UIColor, UIImage, UIView;

@interface NTKBasePhotosFaceView : NTKBackgroundImageFaceView<NTKPhotoImageViewDelegate> {
  /* instance variables */
  BOOL _paused;
  BOOL _updateWhenUnpausing;
  UIView *_blackView;
  BOOL _shouldPlayIntro;
  BOOL _shouldPlayOnWake;
  BOOL _isStartingPlaybackOnSingleTap;
  NSTimer *_playOnWakeTimeout;
  NTKTaskScheduler *_taskScheduler;
  BOOL _preLoadingPhotoOnSleep;
  BOOL _preloadedPhotoOnSleep;
  long long _previousDataMode;
  UIColor *_foregroundColor;
  UIColor *_shadowColor;
  UIColor *_legibilityGradientColor;
  UIView *_currentGradientView;
  unsigned int x :1 _isContentLoaded;
  unsigned int x :1 _isUsingLegibility;
  NTKUtilityComplicationFactory *_complicationFactory;
}

@property (readonly, @dynamic, nonatomic) unsigned long long dateAlignment;
@property (readonly, nonatomic) UIView *cornerView;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) NTKPhotoImageView *posterImageView;
@property (readonly, nonatomic) NTKAlbumEmptyView *noPhotosView;
@property (nonatomic) BOOL noPhotosViewVisible;
@property (readonly, nonatomic) UIImage *photosColorRamp;
@property (readonly, nonatomic) UIImage *photosMonoColorRamp;
@property (retain, nonatomic) NSValue *monochromeColorMatrix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFaceStyle:(long long)style forDevice:(id)device clientIdentifier:(id)identifier;
- (void)dealloc;
- (id)createFaceColorPalette;
- (id)palette;
- (Class)photosFaceClass;
- (void)layoutSubviews;
- (double)_timeTravelYAdjustment;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)mode faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_layoutForegroundContainerView;
- (void)_loadLayoutRules;
- (id)_newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot;
- (void)_configureComplicationView:(id)view forSlot:(id)slot;
- (double)_foregroundAlphaForEditMode:(long long)mode;
- (double)_foregroundAlphaForTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (void)_applyForegroundAlphaForTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (void)_applyComplicationContentSpecificAttributesAnimated:(BOOL)animated;
- (void)_setComplicationsHidden:(BOOL)hidden;
- (BOOL)_fadesComplicationSlot:(id)slot inEditMode:(long long)mode;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (double)_backgroundImageAlphaForEditMode:(long long)mode;
- (double)_timeLabelAlphaForEditMode:(long long)mode;
- (long long)_utilitySlotForSlot:(id)slot;
- (long long)_complicationPickerStyleForSlot:(id)slot;
- (double)_keylineCornerRadiusForComplicationSlot:(id)slot;
- (void)_configureComplicationFactory;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)mode;
- (void)_applyAlignment;
- (void)_applyOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)updateWithColorPalette:(id)palette;
- (void)_applyPhotosColor;
- (void)applyPhotosColorRamp:(id)ramp photosMonoColorRamp:(id)ramp monochromeColorMatrix:(id)matrix toPhotosImageView:(id)view;
- (void)_applyPhotosColorFrom:(id)from to:(id)to fraction:(double)fraction;
- (void)_applyRubberBandingFraction:(double)fraction forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyTransitionFraction:(double)fraction fromOption:(id)option toOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (double)_editSpeedForCustomEditMode:(long long)mode slot:(id)slot;
- (BOOL)_timeLabelUsesLegibility;
- (id)_selectedContentView;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_prepareForOrb;
- (void)_cleanupAfterOrb:(BOOL)orb;
- (void)_updatePaused;
- (BOOL)_screenOn;
- (void)_playIrisOnSingleTap;
- (void)_didStartPlayingIrisOnSingleTap;
- (void)_playPhoto;
- (void)_playStill;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)wake;
- (void)_unpauseFromSwitcher;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_applyDataMode;
- (void)_scheduleSleepPreloadTask;
- (BOOL)_preloadNextPhoto;
- (void)_invalidatePreloadedPhoto;
- (void)_animateIn;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)screenDidTurnOffAnimated:(BOOL)animated;
- (void)_showCurtainView;
- (void)_hideCurtainView;
- (BOOL)_curtainViewVisible;
- (void)_configureForTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (void)_configureForEditMode:(long long)mode;
- (id)_newGradientViewWithColor:(id)color;
- (void)_setDateAttributes:(id)attributes animated:(BOOL)animated;
- (void)imageViewDidBeginPlaying:(id)playing;
- (void)imageViewDidEndPlaying:(id)playing;
- (void)_applyScrubbingForegroundColor:(id)color shadowColor:(id)color;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (BOOL)screenWillGoDark;
- (BOOL)isNoPhotosViewVisible;
@end

#endif /* NTKBasePhotosFaceView_h */