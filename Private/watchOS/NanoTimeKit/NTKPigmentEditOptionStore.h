//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPigmentEditOptionStore_h
#define NTKPigmentEditOptionStore_h
@import Foundation;

#include "CLKSensitiveUIStateObserver-Protocol.h"
#include "NTKFaceColorPalette.h"
#include "NTKPigmentPersistentStorageController.h"
#include "NTKPigmentPreferenceManager.h"
#include "NTKPigmentPreferenceManagerDelegate-Protocol.h"
#include "NTKPlistPigmentEditOptionLoader.h"

@class CLKDevice, NSCache, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NTKPigmentEditOptionStore : NSObject<NTKPigmentPreferenceManagerDelegate, CLKSensitiveUIStateObserver>

@property (retain, nonatomic) NTKPlistPigmentEditOptionLoader *plistLoader;
@property (retain, nonatomic) NSMutableDictionary *listenersByDomain;
@property (retain, nonatomic) NSCache *cache;
@property (copy, nonatomic) NSDictionary *sharedCollections;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKFaceColorPalette *palette;
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController;
@property (retain, nonatomic) NTKPigmentPreferenceManager *preferenceManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) BOOL persistenceCacheEnabled;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } lock;
@property (nonatomic) BOOL prewarmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_setupPlistLoader;
- (void)setIncludesAllDeviceSpecificColors:(BOOL)colors;
- (void)setIgnoreSensitiveUIItems:(BOOL)uiitems;
- (BOOL)isCacheRussiaLocaleStateChanged;
- (BOOL)shouldClearPersistanceStoreCache;
- (void)savePersistentCacheVersion;
- (BOOL)shouldForceResetingPersistentCache;
- (void)_watch_setupPersistentStorage;
- (id)pigmentSetForDomain:(id)domain bundle:(id)bundle;
- (id)colorOptionsForDomain:(id)domain bundle:(id)bundle slot:(id)slot;
- (id)_threadunsafe_sharedCollections;
- (id)_loadPigmentSetForDomain:(id)domain bundle:(id)bundle;
- (id)_watch_loadPigmentSetForDomain:(id)domain bundle:(id)bundle;
- (id)_companion_loadPigmentSetForDomain:(id)domain bundle:(id)bundle;
- (void)_autoSelectPigmentsFromFacePigmentSet:(id)set;
- (void)_autoSelectPigmentsForSharedCollections:(id)collections;
- (id)defaultColorOptionForDomain:(id)domain bundle:(id)bundle slot:(id)slot;
- (unsigned long long)numberOfOptionsForDomain:(id)domain bundle:(id)bundle slot:(id)slot;
- (unsigned long long)indexOfOption:(id)option domain:(id)domain bundle:(id)bundle slot:(id)slot;
- (id)optionAtIndex:(unsigned long long)index domain:(id)domain bundle:(id)bundle slot:(id)slot;
- (id)defaultGalleryColorsForDomain:(id)domain bundle:(id)bundle;
- (BOOL)hasAddableCollectionsForDomain:(id)domain bundle:(id)bundle slot:(id)slot;
- (id)fulfilledOptionForOption:(id)option domain:(id)domain bundle:(id)bundle slot:(id)slot;
- (id)migratedOptionForInvalidOption:(id)option domain:(id)domain bundle:(id)bundle slot:(id)slot;
- (id)_migratedOptionForInvalidOption:(id)option collection:(id)collection;
- (id)_normalizeOptionForOption:(id)option domain:(id)domain bundle:(id)bundle slot:(id)slot;
- (BOOL)isOptionVisible:(id)visible;
- (void)setOption:(id)option visible:(BOOL)visible;
- (void)addListener:(id)listener forDomain:(id)domain;
- (void)removeListener:(id)listener forDomain:(id)domain;
- (void)colorBundleContentChanged;
- (void)faceBundlesUpdated;
- (void)handleActiveDeviceChangedNotification;
- (void)pigmentPreferenceManagerDidUpdateSelectedColors:(id)colors;
- (void)resetCache;
- (void)deletePersistenceLayerCache;
- (void)resetCacheAndNotifyListeners;
- (void)_threadunsafe_resetCache;
- (void)notifyListenersStoreContentChanged;
- (void)sensitiveUIStateChanged;
@end

#endif /* NTKPigmentEditOptionStore_h */