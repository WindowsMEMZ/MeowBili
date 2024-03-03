//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAutonomousSingleAppModeConfiguration_h
#define UIAutonomousSingleAppModeConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject<NSCopying>

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL allowsLockButton;
@property (nonatomic) BOOL allowsAutoLock;
@property (nonatomic) BOOL allowsAccessibilityShortcut;
@property (nonatomic) BOOL automaticallyRelaunchesAfterAppCrash;
@property (retain, nonatomic) NSDictionary *managedConfigurationSettings;
@property (readonly, nonatomic) NSDictionary *propertiesAsDictionary;

/* class methods */
+ (id)defaultConfiguration;
+ (id)defaultConfigurationForStyle:(unsigned long long)style;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)_boolValueForFeatureKey:(id)key;
- (void)_setBoolValue:(BOOL)value forFeatureKey:(id)key;
- (BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)key;
@end

#endif /* UIAutonomousSingleAppModeConfiguration_h */