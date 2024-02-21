//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIActivityItemsConfigurationReading_Protocol_h
#define UIActivityItemsConfigurationReading_Protocol_h
@import Foundation;

@protocol UIActivityItemsConfigurationReading <NSObject>

@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;

@optional
/* instance methods */
- (BOOL)activityItemsConfigurationSupportsInteraction:(id)interaction;
- (id)activityItemsConfigurationMetadataForKey:(id)key;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)index key:(id)key;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)index intent:(id)intent suggestedSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* UIActivityItemsConfigurationReading_Protocol_h */