//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStatusBarContextView_h
#define CSLStatusBarContextView_h
@import Foundation;

#include "UIStackView.h"
#include "CSLStatusBarActivityIndicatorView.h"
#include "CSLStatusBarActivityIndicatorViewLayoutManager-Protocol.h"
#include "CSLStatusBarContextTimeLabel.h"
#include "CSLStatusBarContextViewConfiguration.h"
#include "CSLStatusBarPillView.h"
#include "CSLStatusBarSpacerView.h"
#include "CUISStatusViewDataSource-Protocol.h"
#include "CUISStatusViewDelegate-Protocol.h"

@class CUISStatusView, NSArray, NSLayoutXAxisAnchor, NSString, UIStackView;

@interface CSLStatusBarContextView : UIStackView<CSLStatusBarActivityIndicatorViewLayoutManager, CUISStatusViewDataSource, CUISStatusViewDelegate> {
  /* instance variables */
  UIStackView *_pillStackView;
  CSLStatusBarPillView *_pillView;
  NSArray *_pillConstraints;
  CSLStatusBarSpacerView *_pillLeadingSpacer;
  CSLStatusBarSpacerView *_pillTrailingSpacer;
  UIStackView *_baselineAlignedStackView;
  CSLStatusBarActivityIndicatorView *_activityIndicatorView;
  BOOL _activityIndicatorViewVisible;
  unsigned long long _stateHandle;
}

@property (readonly, nonatomic) long long displayVariant;
@property (readonly, nonatomic) struct CSLStatusBarContextViewLayoutAttributes { double x0; double x1; double x2; double x3; double x4; double x5; } layoutAttributes;
@property (readonly, nonatomic) CSLStatusBarContextTimeLabel *timeLabel;
@property (readonly, nonatomic) CUISStatusView *statusView;
@property (weak, nonatomic) NSObject<CUISStatusViewDelegate> *statusViewDelegate;
@property (retain, nonatomic) CSLStatusBarContextViewConfiguration *configuration;
@property (readonly, nonatomic) BOOL animatesStatusViewWithLifecycleEvents;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *networkIndicatorLeadingAnchor;
@property (readonly, nonatomic) BOOL networkActivityIndicatorVisible;
@property (readonly, nonatomic) BOOL effectivelyHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithDisplayVariant:(long long)variant;
- (id)initWithDisplayVariant:(long long)variant configuration:(id)configuration;
- (void)dealloc;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 :32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64] char x1[64] } x2; char x3[64] unsigned char x4[0] } *)_stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
- (id)viewForFirstBaselineLayout;
- (void)updateConfigurationWithBlock:(id /* block */)block;
- (void)updateConfigurationWithBlock:(id /* block */)block animated:(BOOL)animated;
- (void)setConfiguration:(id)configuration animated:(BOOL)animated completion:(id /* block */)completion;
- (void)_updateLayoutForConfiguration:(id)configuration;
- (void)didUpdateLayoutForConfiguration:(id)configuration;
- (double)_effectiveOpacityForConfiguration:(id)configuration;
- (id)_stackView:(id)view withArrangedSubviews:(id)subviews configuration:(id)configuration;
- (id)_pillStackView:(id)view withSpacers:(BOOL)spacers;
- (id)_baselineAlignedStackView:(id)view;
- (id)_stackView:(id)view;
- (void)_updateStackPlacementForConfiguration:(id)configuration;
- (void)_updatePillForConfiguration:(id)configuration;
- (void)prepareToAnimate;
- (void)showFinalStateAnimated:(BOOL)animated;
- (BOOL)_indicatorsVisible;
- (void)contentSizeCategoryDidChange:(id)change;
- (void)_updateFontOnLabel;
- (double)_timeLabelAlphaForConfiguration:(id)configuration;
- (void)layoutSubviews;
- (void)statusBarActivityIndicatorView:(id)view didUpdateVisible:(BOOL)visible;
- (void)statusView:(id)view didUpdateActiveItem:(id)item;
- (id)statusView:(id)view itemForIndex:(unsigned long long)index;
- (unsigned long long)numberOfItemsInStatusView;
- (void)updateState:(id)state animated:(BOOL)animated;
- (BOOL)shouldCycleAfterAdjustingForState:(id)state;
- (BOOL)isNetworkActivityIndicatorVisible;
- (BOOL)isEffectivelyHidden;
@end

#endif /* CSLStatusBarContextView_h */