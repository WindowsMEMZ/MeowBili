//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUILegibilityLabel_h
#define CLKUILegibilityLabel_h
@import Foundation;

#include "UILabel.h"
#include "CLKUILegibilityView-Protocol.h"

@class NSString, UIColor;

@interface CLKUILegibilityLabel : UILabel<CLKUILegibilityView> {
  /* instance variables */
  double _sBlur;
  UIColor *_sColor;
}

@property (nonatomic) BOOL legibilityEnabled;
@property (@dynamic, nonatomic) double shadowBlur;
@property (retain, @dynamic, nonatomic) UIColor *shadowColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateShadow;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsFromFonts;
@end

#endif /* CLKUILegibilityLabel_h */