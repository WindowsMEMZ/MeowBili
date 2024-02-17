//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICalloutBar_h
#define UICalloutBar_h
@import Foundation;

#include "UIView.h"
#include "UICalloutBarBackground.h"
#include "UICalloutBarButton.h"
#include "UICalloutBarDelegate-Protocol.h"
#include "UIResponder.h"
#include "UIScrollView.h"
#include "UIStackView.h"
#include "UIView.h"
#include "_UICalloutBarVisualStyle.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface UICalloutBar : UIView {
  /* instance variables */
  id m_delegate;
  struct CGPoint { double x; double y; } m_pointBelowControls;
  struct CGPoint { double x; double y; } m_pointAboveControls;
  struct CGPoint { double x; double y; } m_pointLeftOfControls;
  struct CGPoint { double x; double y; } m_pointRightOfControls;
  struct CGPoint { double x; double y; } m_targetPoint;
  int m_targetDirection;
  BOOL m_targetHorizontal;
  BOOL m_fadeAfterCommand;
  BOOL m_recalcVisibleItems;
  int m_pageCount;
  int m_currentPage;
  BOOL m_supressesHorizontalMovement;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_controlFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_targetRect;
  UIView *m_targetView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_supressesHorizontalMovementFrame;
  double m_supressedHorizontalMovementX;
  int m_arrowDirection;
  double m_availableSpaceOnLeft;
  double m_availableSpaceOnRight;
  NSArray *m_systemButtonDescriptions;
  NSMutableArray *m_currentSystemButtons;
  NSMutableArray *m_extraButtons;
  UICalloutBarButton *m_nextButton;
  UICalloutBarButton *m_previousButton;
  NSMutableArray *m_rectsToEvade;
  UICalloutBarBackground *m_overlay;
  double m_fadedTime;
  BOOL m_fadedDueToCommand;
  NSDictionary *m_currentAppearOrFadeContext;
  UIResponder *m_responderTarget;
  id /* block */ m_responderTargetCompletionHandler;
  NSArray *m_replacements;
  NSArray *m_extraItems;
  NSString *m_untruncatedString;
  BOOL m_didPromptForReplace;
  BOOL m_showAllReplacements;
  BOOL m_ignoreFade;
  BOOL m_suppressesAppearance;
  BOOL m_isDisplayingVertically;
  BOOL m_isUsingVerticalFallbackPosition;
  UIScrollView *m_verticalScrollView;
  UIStackView *m_verticalStackView;
  NSMutableArray *m_separatorViews;
  UIView *m_buttonView;
  _UICalloutBarVisualStyle *m_visualStyle;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } pointAboveControls;
@property (nonatomic) struct CGPoint { double x0; double x1; } pointBelowControls;
@property (nonatomic) struct CGPoint { double x0; double x1; } pointLeftOfControls;
@property (nonatomic) struct CGPoint { double x0; double x1; } pointRightOfControls;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetPoint;
@property (nonatomic) int targetDirection;
@property (nonatomic) BOOL targetHorizontal;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetRect;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) int arrowDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } controlFrame;
@property (retain, nonatomic) NSDictionary *currentAppearOrFadeContext;
@property (nonatomic) BOOL suppressesAppearance;
@property (readonly, nonatomic) BOOL isDisplayingVertically;
@property (readonly, nonatomic) BOOL isUsingVerticalFallbackPosition;
@property (readonly, nonatomic) UIScrollView *verticalScrollView;
@property (readonly, nonatomic) UIStackView *verticalStackView;
@property (readonly, nonatomic) NSArray *rectsToEvade;
@property (weak, nonatomic) NSObject<UICalloutBarDelegate> *delegate;
@property (readonly, nonatomic) BOOL visible;
@property (weak, nonatomic) UIResponder *responderTarget;
@property (copy, nonatomic) NSArray *replacements;
@property (nonatomic) BOOL showAllReplacements;
@property (copy, nonatomic) NSArray *extraItems;
@property (copy, nonatomic) NSString *untruncatedString;
@property (nonatomic) BOOL supressesHorizontalMovement;

/* class methods */
+ (void)registerVisualStyle:(Class)style forIdiom:(long long)idiom;
+ (id)_visualStyleForCalloutBar:(id)bar;
+ (void)performWithoutAffectingSharedCalloutBar:(id /* block */)bar;
+ (id)sharedCalloutBar;
+ (id)activeCalloutBar;
+ (void)_releaseSharedInstance;
+ (BOOL)sharedCalloutBarIsVisible;
+ (void)fadeSharedCalloutBar;
+ (void)fadeSharedCalloutBarFromTargetView:(id)view;
+ (void)hideSharedCalloutBar;
+ (void)hideSharedCalloutBarFromTargetView:(id)view;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)applicationDidAddDeactivationReason:(id)reason;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (id)_targetForAction:(SEL)action;
- (void)buttonPressed:(id)pressed;
- (void)_showPreviousItems:(id)items;
- (void)_showNextItems:(id)items;
- (void)removeFromSuperview;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (int)textEffectsVisibilityLevel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textEffectsWindowSafeArea;
- (void)resetPage;
- (BOOL)rectClear:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clear;
- (double)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint { double x0; double x1; })point proposedX:(double)x;
- (double)maxVerticalCalloutHeightForMinButtonHeight:(double)height;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize { double x0; double x1; })size below:(BOOL)below;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize { double x0; double x1; })size right:(BOOL)right;
- (BOOL)calculateControlFrameInsideTargetRect:(struct CGSize { double x0; double x1; })rect;
- (void)updateAvailableButtons;
- (BOOL)setFrameForSize:(struct CGSize { double x0; double x1; })size;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollableButtonTouchDown:(id)down;
- (void)configureButtonsForVerticalView:(double)view;
- (void)configureButtons:(double)buttons;
- (void)updateForCurrentPage;
- (void)updateForCurrentHorizontalPage;
- (void)updateForCurrentVerticalPage;
- (void)addVerticalSeparatorAfterButton:(id)button usingLargeText:(BOOL)text;
- (void)adjustFrameToAvoidDividerOnArrow;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)animated;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect view:(id)view pointBelowControls:(struct CGPoint { double x0; double x1; })controls pointAboveControls:(struct CGPoint { double x0; double x1; })controls;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect view:(id)view pointLeftOfControls:(struct CGPoint { double x0; double x1; })controls pointRightOfControls:(struct CGPoint { double x0; double x1; })controls;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect view:(id)view arrowDirection:(int)direction;
- (void)buttonHighlighted:(id)highlighted highlighted:(BOOL)highlighted;
- (void)show;
- (void)appear;
- (void)_endOngoingAppearOrFadeAnimations;
- (void)_fadeAfterCommand:(SEL)command;
- (BOOL)_isOwnedByView:(id)view;
- (void)_clearResponderTarget;
- (void)setResponderTarget:(id)target completion:(id /* block */)completion;
- (void)fadeFromTargetView:(id)view;
- (void)fade;
- (void)hideFromTargetView:(id)view;
- (void)hide;
- (void)update;
- (void)updateAnimated:(BOOL)animated;
- (BOOL)recentlyFaded;
- (BOOL)fadedDueToCommand;
- (void)appearAnimationDidStopWithContext:(id)context;
- (void)fadeAnimationDidStopWithContext:(id)context finished:(BOOL)finished;
- (void)addRectToEvade:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })evade;
- (void)clearEvadeRects;
- (BOOL)hasReplacements;
- (void)clearReplacements;
- (void)clearSupressesHorizontalMovementFrame;
@end

#endif /* UICalloutBar_h */