//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSpendingSummaryViewController_h
#define PKSpendingSummaryViewController_h
@import Foundation;

#include "PKHorizontalScrollingViewController.h"
#include "PKContactAvatarManager.h"
#include "PKHorizontalScrollingViewControllerDataSource-Protocol.h"
#include "PKSpendingSingleSummaryViewControllerDelegate-Protocol.h"
#include "PKSpendingSummaryFetcherObserver-Protocol.h"
#include "PKSpendingSummaryViewControllerDelegate-Protocol.h"

@class NSArray, NSCalendar, NSMutableDictionary, NSString, PKAccount, PKAccountUserCollection, PKFamilyMemberCollection, PKPaymentPass, PKSpendingSummaryFetcher, PKTransactionSourceCollection;
@protocol UIView<PKHorizontalScrollingFooterViewProtocol;

@interface PKSpendingSummaryViewController : PKHorizontalScrollingViewController<PKSpendingSummaryFetcherObserver, PKSpendingSingleSummaryViewControllerDelegate, PKHorizontalScrollingViewControllerDataSource> {
  /* instance variables */
  PKTransactionSourceCollection *_transactionSourceCollection;
  PKFamilyMemberCollection *_familyCollection;
  PKAccount *_account;
  PKAccountUserCollection *_accountUserCollection;
  PKPaymentPass *_pass;
  PKSpendingSummaryFetcher *_summaryFetcher;
  PKContactAvatarManager *_avatarManager;
  NSCalendar *_currentCalendar;
  NSArray *_weeks;
  NSArray *_months;
  NSArray *_years;
  NSString *_navTitle;
  BOOL _transitioningMode;
  NSArray *_currentDataSet;
  unsigned long long _currentSummaryType;
  unsigned long long _displayType;
  NSArray *_currentMonthTransactions;
  long long _startingIndex;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockUpdate;
  NSMutableDictionary *_pendingUpdates;
  NSArray *_emptyViewControllers;
  UIView<PKHorizontalScrollingFooterViewProtocol> *_footerView;
}

@property (weak, nonatomic) NSObject<PKSpendingSummaryViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long categorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransactionSourceCollection:(id)collection familyCollection:(id)collection avatarManager:(id)manager account:(id)account accountUserCollection:(id)collection physicalCards:(id)cards fetcher:(id)fetcher weeks:(id)weeks months:(id)months years:(id)years type:(unsigned long long)type unit:(unsigned long long)unit currentMonthTransactions:(id)transactions pendingPayments:(id)payments upcomingScheduledPayments:(id)payments dispayType:(unsigned long long)type;
- (id)pkNavigationController;
- (id)emptyViewControllers;
- (long long)numberOfItems;
- (long long)startingIndex;
- (id)footerView;
- (double)footerViewContentHeight;
- (void)didDequeueViewController:(id)controller;
- (id)cachedDataAtIndex:(long long)index;
- (void)prefetchDataIfNecessary;
- (void)fetchDataAtIndex:(long long)index completion:(id /* block */)completion;
- (id)loadingDataObjectWithCurrentData:(id)data index:(long long)index swap:(BOOL)swap;
- (void)didMoveToPrimaryIndex:(long long)index;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)_updateBackTitle;
- (void)_changeModeTo:(unsigned long long)to;
- (unsigned long long)_newDataSetIndexAfterTransitionFromMode:(unsigned long long)mode toMode:(unsigned long long)mode;
- (void)spendingSingleSummaryViewController:(id)controller changedSelection:(unsigned long long)selection;
- (void)invalidatedSpendingSummaryOfType:(unsigned long long)type startingWithDate:(id)date;
- (void)invalidatedSummariesAvailable;
- (void)_reportTappedButtonWithTag:(id)tag;
@end

#endif /* PKSpendingSummaryViewController_h */