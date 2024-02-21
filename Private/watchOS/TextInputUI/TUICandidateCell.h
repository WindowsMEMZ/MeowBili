//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUICandidateCell_h
#define TUICandidateCell_h
@import Foundation;

#include "TUICandidateBaseCell.h"
#include "TUICandidateLabel.h"

@class TIKeyboardCandidate, UIImage, UIImageView, UILabel;

@interface TUICandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) TUICandidateLabel *textLabel;
@property (retain, nonatomic) TUICandidateLabel *alternativeTextLabel;
@property (retain, nonatomic) UILabel *candidateNumberLabel;
@property (retain, nonatomic) TUICandidateLabel *annotationTextLabel;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) BOOL shouldShowCandidateNumber;
@property (nonatomic) BOOL rowSelected;
@property (nonatomic) long long alignment;
@property (nonatomic) double minimumTextLabelHeight;

/* class methods */
+ (id)reuseIdentifier;
+ (double)widthForCandidate:(id)candidate showCandidateNumber:(BOOL)number style:(id)style;
+ (double)widthForText:(id)text font:(id)font layoutOrientation:(long long)orientation;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })outsetsForText:(id)text font:(id)font;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)setStyle:(id)style;
- (BOOL)_canFocusProgrammatically;
- (BOOL)isFocused;
- (void)applyLayoutAttributes:(id)attributes;
- (void)_computeImageViewFrame;
- (void)layoutSubviews;
- (void)updateStyle;
- (void)updateLabels;
- (void)rotateBy90DegreesForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame;
- (void)flipHorizontallyForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame;
- (void)updateColors;
- (id)cellBackgroundImage;
- (id)cellBackgroundColor;
@end

#endif /* TUICandidateCell_h */