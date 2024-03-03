//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 435.201.0.0.0
//
#ifndef NSPersonNameComponentsFormatterPreferences_h
#define NSPersonNameComponentsFormatterPreferences_h
@import Foundation;

@interface NSPersonNameComponentsFormatterPreferences : NSObject
/* class methods */
+ (void)_setPreference:(id)preference toValue:(long long)value usingExistingGetter:(SEL)getter;
+ (void)_postPreferencesChangedNotification;
+ (void)setDefaultDisplayNameOrder:(long long)order;
+ (void)setShortNameFormat:(long long)format;
+ (void)setPreferNicknamesDefault:(BOOL)default;
+ (void)setShortNameIsEnabled:(BOOL)enabled;
+ (void)_syncronizeGizmoDefaultWithKey:(id)key value:(long long)value;
+ (id)mappedPreferencesForPreferences:(id)preferences from:(unsigned long long)from to:(unsigned long long)to;
+ (id)infoClassFromPreferencesSource:(unsigned long long)source;
@end

#endif /* NSPersonNameComponentsFormatterPreferences_h */