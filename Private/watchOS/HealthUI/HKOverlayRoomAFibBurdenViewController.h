//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOverlayRoomAFibBurdenViewController_h
#define HKOverlayRoomAFibBurdenViewController_h
@import Foundation;

#include "HKOverlayRoomViewController.h"
#include "HKAddDataViewControllerProvider-Protocol.h"
#include "HKCurrentValueViewDataSourceDelegate-Protocol.h"
#include "HKHealthChartFactoryViewControllerProviderClass-Protocol.h"
#include "HKInteractiveChartDataFormatter.h"
#include "HKInteractiveChartDisplayType.h"
#include "HKSleepDataSourceProvider-Protocol.h"

@class HKAnalyticsEventSubmissionManager, NSCalendar, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HKOverlayRoomAFibBurdenViewController : HKOverlayRoomViewController<HKCurrentValueViewDataSourceDelegate, HKHealthChartFactoryViewControllerProviderClass>

@property (readonly, nonatomic) NSNumber *preferredOverlayIndex;
@property (readonly, nonatomic) long long preferredOverlay;
@property (readonly, nonatomic) NSObject<HKSleepDataSourceProvider> *sleepDataSourceProvider;
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (readonly, nonatomic) NSObject<HKAddDataViewControllerProvider> *addDataViewControllerProvider;
@property (readonly, nonatomic) NSCalendar *currentCalendar;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsSubmissionQueue;
@property (readonly, nonatomic) HKAnalyticsEventSubmissionManager *analyticsEventSubmissionManager;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *afibBurdenDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)identifier chartFactory:(id)factory applicationItems:(id)items displayDate:(id)date preferredOverlay:(long long)overlay restorationUserActivity:(id)activity trendModel:(id)model additionalChartOptions:(unsigned long long)options;

/* instance methods */
- (id)initWithDisplayDate:(id)date applicationItems:(id)items mode:(long long)mode sleepDataSourceProvider:(id)provider sleepChartFormatter:(id)formatter preferredOverlay:(long long)overlay addDataViewControllerProvider:(id)provider;
- (void)viewDidLoad;
- (id)_generateAFibBurdenDisplayTypeWithApplicationItems:(id)items mode:(long long)mode;
- (id)_aFibBurdenSeriesForTimeScope:(long long)scope displayType:(id)type mode:(long long)mode applicationItems:(id)items;
- (id)_contextItemOrder;
- (id)_overlayContextForOverlayContextItem:(unsigned long long)item sleepDataSourceProvider:(id)provider sleepChartFormatter:(id)formatter overlayChartController:(id)controller applicationItems:(id)items;
- (id)_displayTypeForOverlayContextItem:(unsigned long long)item;
- (id)_generateOverlayContextsWithPrimaryDisplayType:(id)type sleepDataSourceProvider:(id)provider sleepChartFormatter:(id)formatter overlayChartController:(id)controller applicationItems:(id)items;
- (id)_lifeFactorViewControllerForKey:(id)key logButtonAction:(id /* block */)action;
- (id)_infographicViewControllerForDisplayType:(id)type secondaryDisplayType:(id)type addDataViewControllerProvider:(id)provider healthStore:(id)store;
- (id)controllerTitleWithApplicationItems:(id)items;
- (id)showAllFiltersButtonTitle;
- (BOOL)supportsShowAllFilters;
- (void)didChangeFromContextItem:(id)item toContextItem:(id)item;
- (id)createChartOverlayViewController;
- (id)primaryDisplayTypeWithApplicationItems:(id)items;
- (id)contextSectionContainersForMode:(long long)mode applicationItems:(id)items overlayChartController:(id)controller;
- (id)initialSelectedContextForMode:(long long)mode containerIndex:(long long)index;
- (id)createViewControllerForMode:(long long)mode displayDate:(id)date applicationItems:(id)items;
- (void)contextView:(id)view didTapOnInfoButtonAtIndex:(long long)index;
- (id)stringForValueRange:(id)range timeScope:(long long)scope;
- (void)processSelectedRangeData:(id)data displayType:(id)type;
@end

#endif /* HKOverlayRoomAFibBurdenViewController_h */