//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCOfferButton_h
#define ASCOfferButton_h
@import Foundation;

#include "UIControl.h"
#include "ASCModalViewInteraction.h"
#include "ASCOfferButtonBackgroundImageView.h"
#include "ASCOfferButtonDelegate-Protocol.h"
#include "ASCOfferMetadata.h"
#include "ASCOfferTheme.h"

@class CAAnimation, NSString, UILabel, UIViewPropertyAnimator;

@interface ASCOfferButton : UIControl

@property (retain, nonatomic) NSString *size;
@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabelIfLoaded;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabelIfLoaded;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction;
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (retain, nonatomic) UIViewPropertyAnimator *currentTransition;
@property (retain, nonatomic) ASCOfferTheme *theme;
@property (retain, nonatomic) ASCOfferMetadata *metadata;
@property (weak, nonatomic) NSObject<ASCOfferButtonDelegate> *delegate;
@property (nonatomic) long long subtitlePosition;
@property (nonatomic) BOOL fixedHeight;
@property (nonatomic) BOOL shouldTopAlign;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL shouldExpandBackground;

/* class methods */
+ (id)smallTitleFontForText:(id)text compatibleWithTraitCollection:(id)collection;
+ (BOOL)adjustsTitleFontSizeToFitWidthForSize:(id)size;
+ (id)progressStateImageFittingSize:(id)size forTheme:(id)theme startPercent:(double)percent endPercent:(double)percent useFullImageSize:(BOOL)size;

/* instance methods */
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)accessibilityActivate;
- (id)accessibilityIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)updateImageStyleProperties;
- (void)updateLabelStyleProperties;
- (void)setEnabled:(BOOL)enabled;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSemanticContentAttribute:(long long)attribute;
- (void)updateVisualEffects;
- (void)beginModalStateWithCancelBlock:(id /* block */)block;
- (void)endModalState;
- (BOOL)canTransitionToMetadata:(id)metadata;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)metadata toMetadata:(id)metadata;
- (BOOL)chainTransitionToMetadata:(id)metadata scalingDurationBy:(double)by withCompletion:(id /* block */)completion;
- (id)transitionImageForMetadata:(id)metadata;
- (id)transitionColorForMetadata:(id)metadata;
- (void)transitionToMetadata:(id)metadata scalingDurationBy:(double)by withCompletion:(id /* block */)completion;
- (void)transitionToMetadata:(id)metadata withCompletion:(id /* block */)completion;
- (void)onTraitCollectionChange;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (id)makeLayout;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layoutSubviews;
- (id)description;
- (BOOL)isFixedHeight;
@end

#endif /* ASCOfferButton_h */