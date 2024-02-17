//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCEnrollmentTemplateTableViewController_h
#define DMCEnrollmentTemplateTableViewController_h
@import Foundation;

#include "UIViewController.h"
#include "DMCEnrollmentTableViewIconCell.h"
#include "DMCEnrollmentTableViewTextCell.h"
#include "DMCEnrollmentTableViewTitleCell.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UITableView, UIView, UIVisualEffectView;

@interface DMCEnrollmentTemplateTableViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *floatyBottomView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) DMCEnrollmentTableViewIconCell *iconCell;
@property (retain, nonatomic) DMCEnrollmentTableViewTitleCell *titleCell;
@property (retain, nonatomic) DMCEnrollmentTableViewTextCell *subtitleCell;
@property (nonatomic) unsigned long long headerSection;
@property (nonatomic) double gapBetweenButtons;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *cellDataCollection;
@property (nonatomic) BOOL inProgress;
@property (copy, nonatomic) NSArray *iconNames;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (readonly, nonatomic) unsigned long long layoutStyle;
@property (retain, nonatomic) NSNumber *customTopMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIconNames:(id)names title:(id)title subTitle:(id)title;
- (id)initWithIconImages:(id)images title:(id)title subTitle:(id)title;
- (id)initWithIconNames:(id)names iconImages:(id)images title:(id)title subTitle:(id)title layoutStyle:(unsigned long long)style;
- (id)initWithStyle:(long long)style;
- (void)_setupNotification;
- (void)_setupHeaderSectionWithIconNames:(id)names iconImages:(id)images title:(id)title subTitle:(id)title;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (void)addBottomView:(id)view;
- (void)addFloatyBottomView:(id)view;
- (void)_addBottomView:(id)view;
- (void)updateContinueButtonStatus;
- (void)updateNavBarButtonType:(unsigned long long)type forButtonPosition:(unsigned long long)position enabled:(BOOL)enabled;
- (void)leftBarButtonTapped:(id)tapped;
- (void)rightBarButtonTapped:(id)tapped;
- (SEL)_actionSelectorForBarButtonPosition:(unsigned long long)position;
- (void)_maskNavigationBar;
- (unsigned long long)addCellData:(id)data animated:(BOOL)animated;
- (unsigned long long)addSectionWithCellData:(id)data animated:(BOOL)animated;
- (void)addCellData:(id)data toSection:(unsigned long long)section animated:(BOOL)animated;
- (unsigned long long)_addCellData:(id)data createNewSection:(BOOL)section animated:(BOOL)animated;
- (void)removeCellData:(id)data fromSection:(unsigned long long)section animated:(BOOL)animated;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (void)scrollViewDidScroll:(id)scroll;
- (void)keyboardWillShow:(id)show;
- (void)keyboardDidShow:(id)show;
- (void)keyboardWillHide:(id)hide;
- (void)_setUpBackdrops;
- (double)_lastCellBlockedHeight;
- (void)_updateEffectiveViewVisibility;
- (void)_adjustFloatyViewFrameWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame animationDuration:(double)duration;
- (void)_updateFloatyViewForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration;
- (void)_touchViewFrame:(id)frame;
@end

#endif /* DMCEnrollmentTemplateTableViewController_h */