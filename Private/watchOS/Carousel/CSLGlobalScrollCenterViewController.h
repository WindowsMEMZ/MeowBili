//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLGlobalScrollCenterViewController_h
#define CSLGlobalScrollCenterViewController_h
@import Foundation;

#include "UIViewController.h"
#include "BLSBacklightStateObserving-Protocol.h"
#include "CSLGestureDelegateForwardingScrollViewDelegate-Protocol.h"
#include "CSLGlobalScrollCenterDelegate-Protocol.h"
#include "CSLScrollCenterStateMachine.h"
#include "CSLScrollCenterStateMachineDelegate-Protocol.h"
#include "CSLScrollCenterStatusBarStyleController.h"
#include "CSLScrollCenterStatusBarStyleControllerDelegate-Protocol.h"
#include "CSLVerticalScrollView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_TtP8Carousel39CSLPreventScrollCenterAssertionObserver_-Protocol.h"

@class CUISVisualEffectView, NSString, UILongPressGestureRecognizer, UIView, UIWindow;
@protocol UIViewController<CSLGlobalScrollCenterContainee;

@interface CSLGlobalScrollCenterViewController : UIViewController<Carousel.CSLPreventScrollCenterAssertionObserver, UIScrollViewDelegate, UIGestureRecognizerDelegate, CSLGestureDelegateForwardingScrollViewDelegate, BLSBacklightStateObserving, CSLScrollCenterStateMachineDelegate, CSLScrollCenterStatusBarStyleControllerDelegate> {
  /* instance variables */
  UIWindow *_window;
  CSLVerticalScrollView *_scrollView;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  unsigned long long _viewState;
  struct CGPoint { double x; double y; } _lastContentOffset;
  struct CGPoint { double x; double y; } _interactiveVelocity;
  double _lastInteractionTime;
  long long _setViewStateCount;
  BOOL _resettingState;
  BOOL _dragging;
  CSLScrollCenterStateMachine *_stateMachine;
  unsigned long long _gestureState;
  id /* block */ _pendingCompletion;
  BOOL _inverted;
  BOOL _wornOnRightArm;
  double _exclusionX1;
  double _exclusionX2;
  BOOL _initializing;
  BOOL _adjustingChildOffset;
  BOOL _disableLongPressGesture;
  BOOL _shouldPresentRecognizerTapToRadar;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } offScreenOffset;
@property (nonatomic) long long gestureFlags;
@property (weak, nonatomic) NSObject<CSLGlobalScrollCenterDelegate> *delegate;
@property (nonatomic) UIViewController<CSLGlobalScrollCenterContainee> *topViewController;
@property (nonatomic) UIViewController<CSLGlobalScrollCenterContainee> *activeViewController;
@property (readonly, nonatomic) BOOL tracking;
@property (readonly, nonatomic) BOOL presented;
@property (retain, nonatomic) UIView *preferredGestureView;
@property (readonly, nonatomic) UIWindow *scrollCenterWindow;
@property (readonly, nonatomic) CUISVisualEffectView *blurView;
@property (readonly, nonatomic) unsigned long long edge;
@property (readonly, nonatomic) CSLScrollCenterStatusBarStyleController *statusBarStyleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStatusBarStyleController:(id)controller;
- (void)loadView;
- (void)dealloc;
- (void)_initializeViewController:(id)controller;
- (id)panGestureRecognizer;
- (BOOL)isTracking;
- (BOOL)isPresented;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)canBecomeFirstResponder;
- (void)_handleInvertedUIChangedNotification:(id)notification;
- (void)_handleWornOnRightArmChangedNotification:(id)notification;
- (void)_updateExclusionRangeForUserSpecifiedOrientationSettings;
- (id)_preferredGestureView;
- (void)_updateGestureViewIfNeeded;
- (void)presentTopControllerAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)_presentControllerAlongEdge:(unsigned long long)edge animated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)setPendingCompletion:(id /* block */)completion;
- (void)_fireCompletion;
- (void)dismissAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (struct CGPoint { double x0; double x1; })_scrollViewOffsetForRevealPercent:(double)percent;
- (struct CGPoint { double x0; double x1; })_scrollViewOffsetForRevealPercent:(double)percent edge:(unsigned long long)edge;
- (struct CGPoint { double x0; double x1; })_scrollViewOffsetForPeek:(double)peek;
- (double)_revealPercentForScrollViewOffset:(struct CGPoint { double x0; double x1; })offset;
- (struct CGPoint { double x0; double x1; })_offScreenOffsetForScrollViewOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)_beginDragState:(BOOL)state;
- (void)_endDragState:(BOOL)state;
- (void)_handleLongPressGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)shouldRejectPanAtBoundaryInScrollView:(id)view translation:(struct CGPoint { double x0; double x1; })translation;
- (void)_setEdge:(unsigned long long)edge;
- (id)_activeViewController;
- (void)_setViewState:(unsigned long long)state;
- (void)_setViewState:(unsigned long long)state animated:(BOOL)animated;
- (void)_cancelScrollViewGesture;
- (void)_transitionViewControllerToDisappeared:(id)disappeared animated:(BOOL)animated;
- (id)_breadthFirstSearchForChildScrollView:(id)view;
- (id)_debugStringForScrollView:(id)view;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)_updateInteractiveVelocityWithScrollView:(id)view;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (void)_loadScrollCenterTapToRadarPresented;
- (void)_storeScrollCenterTapToRadarPresented;
- (void)_checkRecognizerState;
- (void)backlight:(id)backlight didCompleteUpdateToState:(long long)state forEvent:(id)event;
- (void)stateMachineDidScrollContent:(id)content;
- (void)stateMachine:(id)machine didChangeViewState:(unsigned long long)state animated:(BOOL)animated;
- (unsigned long long)peekingRectEdgeForStateMachine:(id)machine;
- (void)stateMachine:(id)machine commitAppearingWithRectEdge:(unsigned long long)edge;
- (void)stateMachineDidBeginPeek:(id)peek;
- (void)stateMachineCancelLongPressGesture:(id)gesture;
- (void)stateMachineCancelScrollGesture:(id)gesture;
- (void)stateMachine:(id)machine willbeginFromGesture:(unsigned long long)gesture;
- (BOOL)stateMachineShouldPerformAnimatedScrolling:(id)scrolling;
- (BOOL)prefersStatusBarHidden;
- (BOOL)puic_canAffectSensorActivityIndicatorAppearance;
- (void)scrollCenterStatusBarStyleControllerNeedsStatusBarAppearanceUpdate:(id)update;
- (void)assertionsChanged:(BOOL)changed;
@end

#endif /* CSLGlobalScrollCenterViewController_h */