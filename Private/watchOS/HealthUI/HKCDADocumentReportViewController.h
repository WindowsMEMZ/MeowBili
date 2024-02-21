//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCDADocumentReportViewController_h
#define HKCDADocumentReportViewController_h
@import Foundation;

#include "HKViewController.h"
#include "HKIncrementalSearchBar.h"
#include "HKIncrementalSearchBarDelegate-Protocol.h"

@class NSData, NSMutableArray, UIView, WKWebView;

@interface HKCDADocumentReportViewController : HKViewController<HKIncrementalSearchBarDelegate>

@property (readonly) NSData *documentData;
@property (readonly, nonatomic) UIView *disclosureView;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar;
@property (nonatomic) BOOL javascriptSearchInstalled;
@property (nonatomic) BOOL javascriptIsRunning;
@property (nonatomic) BOOL searchInProgress;
@property (nonatomic) long long hitCount;
@property (nonatomic) long long currentHighlightedHit;
@property (retain, nonatomic) NSMutableArray *javascriptOperationQueue;

/* class methods */
+ (id)xmlToHTMLTranslator;

/* instance methods */
- (id)initWithDocumentData:(id)data;
- (void)hideDisclosure:(id)disclosure;
- (id)buildDisclosureView;
- (void)viewDidLoad;
- (void)_translateXMLInBackground;
- (unsigned long long)supportedInterfaceOrientations;
- (void)startIncrementalSearch;
- (void)_runJavascript:(id)javascript clearQueuedCommands:(BOOL)commands completion:(id /* block */)completion;
- (void)_runJavascriptOperation:(id)operation clearQueuedCommands:(BOOL)commands;
- (void)_finishJavascriptOperation;
- (void)_updateSearchHits:(long long)hits;
- (void)_updateSearchBarState;
- (void)_updateMatchDisplayString:(long long)string numMatches:(long long)matches;
- (void)_incrementCurrentHitBy:(long long)by;
- (void)searchBarUpAction:(id)action;
- (void)searchBarDownAction:(id)action;
- (void)searchBarDoneAction:(id)action;
- (void)searchBarChangeSearch:(id)search searchString:(id)string;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
@end

#endif /* HKCDADocumentReportViewController_h */