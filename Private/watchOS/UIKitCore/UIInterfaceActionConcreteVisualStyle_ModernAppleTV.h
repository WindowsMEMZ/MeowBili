//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInterfaceActionConcreteVisualStyle_ModernAppleTV_h
#define UIInterfaceActionConcreteVisualStyle_ModernAppleTV_h
@import Foundation;

#include "UIInterfaceActionConcreteVisualStyle_AppleTV.h"

@interface UIInterfaceActionConcreteVisualStyle_ModernAppleTV : UIInterfaceActionConcreteVisualStyle_AppleTV
/* instance methods */
- (id)actionViewStateForAttachingToActionRepresentationView:(id)view;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (double)contentCornerRadius;
- (double)_actionBackgroundCornerRadius;
- (BOOL)allowsZeroSizedSectionSeparators;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)actionTitleLabelFontForViewState:(id)state;
- (id)actionTitleLabelColorForViewState:(id)state;
- (id)_vibrancyStyleColorForUnfocusedTitleLabelWithTintColor:(id)color;
- (id)actionTitleLabelCompositingFilterForViewState:(id)state;
- (id)newActionBackgroundViewForViewState:(id)state;
- (id)newGroupBackgroundViewWithGroupViewState:(id)state;
- (double)actionSpacingForGroupViewState:(id)state;
- (void)configureAttributesForActionScrollView:(id)view groupViewState:(id)state;
@end

#endif /* UIInterfaceActionConcreteVisualStyle_ModernAppleTV_h */