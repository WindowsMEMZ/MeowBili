//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef UIAccessibilityLoader_h
#define UIAccessibilityLoader_h
@import Foundation;

@interface UIAccessibilityLoader : NSObject
/* class methods */
+ (void)_performInitialAccessibilityBundleLoad:(BOOL)load monitorForFutureLoadEvents:(BOOL)events trackingMode:(long long)mode;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityReenabled;
+ (void)_accessibilityStopServer;
+ (BOOL)_accessibilityServerStarted;
+ (BOOL)_accessibilityUIKitBundleLoaded;
+ (BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)loadAccessibilityBundleForBundle:(id)bundle didLoadCallback:(id /* block */)callback;
+ (void)loadAccessibilityBundleForBundle:(id)bundle didLoadCallback:(id /* block */)callback force:(BOOL)force loadAllAccessibilityInfo:(BOOL)info;
+ (void)loadAccessibilityBundleForBundle:(id)bundle didLoadCallback:(id /* block */)callback forceLoad:(BOOL)load loadSubbundles:(BOOL)subbundles loadAllAccessibilityInfo:(BOOL)info;
+ (void)loadAccessibilityBundle:(id)bundle didLoadCallback:(id /* block */)callback loadSubbundles:(BOOL)subbundles;
+ (id)_accessibilityBundlesForBundle:(id)bundle;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)_stringLocalizationStarted:(id)started;
+ (void)loadAccessibilityBundle:(id)bundle didLoadCallback:(id /* block */)callback;
+ (void)loadAccessibilityBundle:(id)bundle didLoadCallback:(id /* block */)callback force:(BOOL)force loadAllAccessibilityInfo:(BOOL)info;
+ (void)loadActualAccessibilityBundle:(id)bundle didLoadCallback:(id /* block */)callback loadSubbundles:(BOOL)subbundles;
@end

#endif /* UIAccessibilityLoader_h */