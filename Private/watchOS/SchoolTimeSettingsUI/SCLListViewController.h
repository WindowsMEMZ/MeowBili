//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLListViewController_h
#define SCLListViewController_h
@import Foundation;

#include "PSListController.h"
#include "SCLSpecifierDataSource.h"

@class NSArray;

@interface SCLListViewController : PSListController

@property (nonatomic) long long updateCount;
@property (copy, nonatomic) NSArray *pendingUpdateStartSpecifiers;
@property (copy, nonatomic) NSArray *pendingUpdateEndSpecifiers;
@property (retain, nonatomic) SCLSpecifierDataSource *specifierSource;
@property (nonatomic) BOOL wantsEditingMode;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)viewDidLoad;
- (void)reevaluateEditingMode;
- (void)loadSpecifierSource;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (long long)tableView:(id)view editingStyleForRowAtIndexPath:(id)path;
- (id)tableView:(id)view trailingSwipeActionsConfigurationForRowAtIndexPath:(id)path;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (void)beginUpdates;
- (void)endUpdates;
@end

#endif /* SCLListViewController_h */