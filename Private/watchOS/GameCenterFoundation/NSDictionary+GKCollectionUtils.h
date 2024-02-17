//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef NSDictionary_GKCollectionUtils_h
#define NSDictionary_GKCollectionUtils_h
@import Foundation;

@interface NSDictionary (GKCollectionUtils)
/* class methods */
+ (id)_gkImageCacheKeyPathsByKey;
+ (id)_gkClientImageDictionaryForServerImageURLs:(id)urls;
+ (id)_gkDictionaryWithServerData:(id)data serverStatus:(out long long *)status error:(out id *)error;
+ (id)_gkDictionaryWithServerDataJson:(id)json serverStatus:(out long long *)status error:(out id *)error;
+ (id)_gkDictionaryWithServerData:(id)data error:(out id *)error;
+ (id)_gkDictionaryWithServerDataJson:(id)json error:(out id *)error;
+ (id)_gkDictionaryWithFormEncodedString:(id)string;

/* instance methods */
- (id)_gkImageURLForSize:(long long)size scale:(double)scale foundSize:(out unsigned long long *)size;
- (id)_gkImageURLForSize:(long long)size scale:(double)scale;
- (id)_gkDescriptionWithChildren:(long long)children;
- (id)_gkPlistXMLDataForClient:(id)client player:(id)player;
- (long long)integerValueFromKey:(id)key defaultValue:(long long)value;
- (unsigned long long)unsignedIntegerValueFromKey:(id)key defaultValue:(unsigned long long)value;
- (double)doubleValueFromKey:(id)key defaultValue:(double)value;
- (BOOL)boolValueFromKey:(id)key defaultValue:(BOOL)value;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)keys;
- (id)_gkDictionaryByRemovingObjectForKey:(id)key;
- (id)_gkSubDictionaryWithKeys:(id)keys;
- (id)_gkSubDictionaryWithKeys:(id)keys mappedToNewKeys:(id)keys;
- (id)_gkValuesForKeys:(id)keys;
- (id)_gkDictionaryWithValue:(id)value forKey:(id)key;
@end

#endif /* NSDictionary_GKCollectionUtils_h */