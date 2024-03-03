//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIApplicationDefaultPlaceholderProvider_h
#define CSLUIApplicationDefaultPlaceholderProvider_h
@import Foundation;

#include "CUISApplicationPlaceholderItemDataSource-Protocol.h"
#include "IOSSHLApplicationsManager.h"

@class FBSApplicationLibrary, NSString;

@interface CSLUIApplicationDefaultPlaceholderProvider : NSObject<CUISApplicationPlaceholderItemDataSource>

@property (readonly, nonatomic) FBSApplicationLibrary *applicationLibrary;
@property (readonly, nonatomic) IOSSHLApplicationsManager *applicationsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithApplicationLibrary:(id)library applicationsManager:(id)manager;
- (id)supportedBundleIdentifiers;
- (id)placeholderItemForContext:(id)context;
- (id)defaultPlaceholderStatusBarItemForContext:(id)context;
- (id)sceneSnapshotPlaceholderItemForApplication:(id)application;
- (id)splashBoardPlaceholderItemForApplication:(id)application;
- (id)_iconViewForBundleIdentifier:(id)identifier;
- (id)_findLaunchStatusBarDictionary:(id)dictionary launchURL:(id)url;
@end

#endif /* CSLUIApplicationDefaultPlaceholderProvider_h */