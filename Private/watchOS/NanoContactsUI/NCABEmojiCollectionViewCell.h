//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABEmojiCollectionViewCell_h
#define NCABEmojiCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class NSString, UIColor, UIFont, UIImage, UIImageView;

@interface NCABEmojiCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL fullBleed;
@property (nonatomic) BOOL platterEnabled;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) unsigned long long platterStyle;

/* class methods */
+ (double)deselectCellAnimationDuration;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (id)description;
- (void)setHighlighted:(BOOL)highlighted;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRect;
@end

#endif /* NCABEmojiCollectionViewCell_h */