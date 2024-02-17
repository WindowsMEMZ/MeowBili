//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef UILabel_PKUIUtilities_h
#define UILabel_PKUIUtilities_h
@import Foundation;

@interface UILabel (PKUIUtilities)
/* instance methods */
- (id)pk_childrenForAppearance;
- (void)pk_applyAppearance:(id)appearance;
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)colors;
- (struct CGSize { double x0; double x1; })pkui_sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })pkui_sizeThatFits:(struct CGSize { double x0; double x1; })fits forceWordWrap:(BOOL)wrap;
@end

#endif /* UILabel_PKUIUtilities_h */