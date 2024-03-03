//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIEmojiSearchInputViewController_h
#define TUIEmojiSearchInputViewController_h
@import Foundation;

#include "UIInputViewController.h"
#include "TUIEmojiSearchAnalyticsSession.h"
#include "TUIEmojiSearchResultsCollectionViewController.h"
#include "TUIEmojiSearchResultsCollectionViewControllerDelegate-Protocol.h"
#include "TUIEmojiSearchSource.h"
#include "TUIEmojiSearchSourceDelegate-Protocol.h"
#include "TUIEmojiSearchTextFieldDelegate-Protocol.h"
#include "TUIEmojiSearchView.h"
#include "TUIEmojiVariantSelectorView.h"
#include "TUIEmojiVariantSelectorViewDelegate-Protocol.h"
#include "TouchExclusionView.h"
#include "UIPredictiveViewController-Protocol.h"

@class NSArray, NSDate, NSLayoutConstraint, NSString, NSTimer, UITapGestureRecognizer;
@protocol TUIEmojiSearchInputViewControllerDelegate, UIViewController<UIPredictiveViewController;

@interface TUIEmojiSearchInputViewController : UIInputViewController<TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, TUIEmojiVariantSelectorViewDelegate, UIPredictiveViewController> {
  /* instance variables */
  TUIEmojiSearchSource *_emojiSearchSource;
  TUIEmojiSearchResultsCollectionViewController *_resultsViewController;
  TUIEmojiVariantSelectorView *_variantSelectorView;
  UITapGestureRecognizer *_variantSelectorDismissGesture;
  TouchExclusionView *_variantSelectorDismissOverlayView;
  NSTimer *_resultsUpdateRateLimitTimer;
  NSArray *_rateLimitedResults;
  NSString *_rateLimitedSearchQuery;
  BOOL _canAutocorrectWithCurrentInputMode;
  NSTimer *_waitForAutocorrectionDelayTimer;
  NSString *_exactSearchQuery;
  NSString *_autocorrectedSearchQuery;
  NSDate *_lastActivationDate;
  NSLayoutConstraint *_leadingConstraint;
  NSLayoutConstraint *_trailingConstraint;
  TUIEmojiSearchAnalyticsSession *_analyticsSession;
}

@property (weak, nonatomic) NSObject<TUIEmojiSearchInputViewControllerDelegate> *delegate;
@property (readonly, nonatomic) TUIEmojiSearchView *emojiSearchView;
@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *childPredictionViewController;
@property (nonatomic) BOOL usesFloatingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

/* class methods */
+ (BOOL)_preventsAppearanceProxyCustomization;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)_canShowWhileLocked;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keyboardInsets;
- (void)_keyboardInputModeDidChange:(id)change;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)_displayResults:(id)results forExactQuery:(id)query autocorrectedQuery:(id)query;
- (void)autocorrectionListDidBecomeAvailable:(id)available;
- (BOOL)hidesExpandableButton;
- (BOOL)isVisibleForInputDelegate:(id)delegate inputViews:(id)views;
- (double)preferredHeightForTraitCollection:(id)collection;
- (void)emojiSearchTextField:(id)field didChangeSearchString:(id)string;
- (void)emojiSearchTextFieldWillClear:(id)clear;
- (void)emojiSearchSource:(id)source didProduceResults:(id)results forExactQuery:(id)query autocorrectedQuery:(id)query;
- (void)_selectedEmojiString:(id)string query:(id)query indexPath:(id)path completion:(id /* block */)completion;
- (void)emojiSearchResultsController:(id)controller didSelectEmoji:(id)emoji indexPath:(id)path;
- (void)emojiSearchResultsController:(id)controller didRequestVariantSelectorForEmojiToken:(id)token fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)emojiSearchTextFieldWillBecomeActive:(id)active;
- (void)emojiSearchTextFieldDidBecomeActive:(id)active;
- (void)emojiSearchTextFieldWillBecomeInactive:(id)inactive;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)inactive;
- (void)_dismissVariantSelector;
- (void)_didRecognizeVariantDismissGesture:(id)gesture;
- (void)variantSelectorValueChanged:(id)changed;
- (void)dragAndDropWillBegin:(id)begin;
- (void)dragAndDropDidEnd:(id)end;
@end

#endif /* TUIEmojiSearchInputViewController_h */