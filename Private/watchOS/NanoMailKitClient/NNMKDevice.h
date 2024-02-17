//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKDevice_h
#define NNMKDevice_h
@import Foundation;

@class NSString;

@interface NNMKDevice : NSObject

@property (readonly, nonatomic) BOOL isDeviceUnlocked;
@property (readonly, nonatomic) BOOL isClassCDataAvailable;
@property (readonly, nonatomic) NSString *registryBasePath;
@property (readonly, nonatomic) NSString *databaseSubfolder;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoMode;
@property (readonly, nonatomic) BOOL isRunningTest;
@property (readonly, nonatomic) float screenWidth;
@property (readonly, nonatomic) float screenScale;
@property (readonly, nonatomic) NSString *serverFriendlyDescription;

/* class methods */
+ (BOOL)isTinker;
+ (BOOL)shouldIgnoreCompanion;
+ (id)sharedInstance;
+ (BOOL)isWebKitSupported;

/* instance methods */
- (id)init;
- (void)reloadMobileKeyBag;
- (void)_updateDeviceUnlockedState;
- (id)_defaultRegistryBasePath;
@end

#endif /* NNMKDevice_h */