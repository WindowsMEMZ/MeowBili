//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextBaseCell_h
#define NTKUpNextBaseCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "CLKMonochromeComplicationView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, CLKDevice, NSDate, NSHashTable, NSString, REContent, UIColor, UIImage, UIImageView, UIView;

@interface NTKUpNextBaseCell : UICollectionViewCell<UIGestureRecognizerDelegate, CLKMonochromeComplicationView> {
  /* instance variables */
  struct CGSize { double width; double height; } _shadowSize;
  UIImageView *_shadowView;
  UIView *_overlayView;
  double _darkeningAmount;
  double _contentBrightness;
  NSHashTable *_layerProviders;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSDate *overrideDate;
@property (readonly, nonatomic) UIImage *contentImage;
@property (retain, nonatomic) UIImage *overrideContentImage;
@property (readonly, nonatomic) REContent *content;
@property (retain, nonatomic) NSString *representedElementIdentifier;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIColor *imageColor;
@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;

/* class methods */
+ (void)clearLabel:(id)label;
+ (struct CGSize { double x0; double x1; })suggestedHeaderImageSizeForDevice:(id)device;
+ (struct CGSize { double x0; double x1; })suggestedBodyImageSizeForDevice:(id)device;
+ (double)cornerRadiusForDevice:(id)device;
+ (Class)suggestedCellClassForContent:(id)content;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)addContentsLayerProvider:(id)provider;
- (void)removeContentsLayerProvider:(id)provider;
- (void)setHighlighted:(BOOL)highlighted;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setContentBrightness:(double)brightness animated:(BOOL)animated;
- (void)setContentImage:(id)image animated:(BOOL)animated;
- (void)enumerateContentsLayersWithBlock:(id /* block */)block;
- (void)configureWithContent:(id)content;
- (void)applyLayoutAttributes:(id)attributes;
- (void)_updateColorOverlay;
- (id)transitionContextInView:(id)view;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (void)overrideDateDidChange;
- (BOOL)isPaused;
@end

#endif /* NTKUpNextBaseCell_h */