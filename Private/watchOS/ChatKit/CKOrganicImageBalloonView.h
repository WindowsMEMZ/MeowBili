//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKOrganicImageBalloonView_h
#define CKOrganicImageBalloonView_h
@import Foundation;

#include "CKImageBalloonView.h"
#include "CKBalloonImageView.h"
#include "CKOrganicImageLayoutRecipe.h"

@interface CKOrganicImageBalloonView : CKImageBalloonView

@property (retain, nonatomic) CKBalloonImageView *imageView;
@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

/* instance methods */
- (void)configureForMessagePart:(id)part;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForDisplay;
- (void)setMonoskiBadgeView:(id)view;
- (void)layoutSubviews;
- (id)tailMask;
- (BOOL)suppressMask;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)createOverlayImageView;
- (void)addFilter:(id)filter;
- (void)setImage:(id)image;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (id)image;
- (void)setInvisibleInkEffectImage:(id)image;
- (id)invisibleInkEffectImage;
- (BOOL)canUseOpaqueMask;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)prepareForReuse;
@end

#endif /* CKOrganicImageBalloonView_h */