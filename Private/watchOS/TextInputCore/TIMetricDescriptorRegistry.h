//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIMetricDescriptorRegistry_h
#define TIMetricDescriptorRegistry_h
@import Foundation;

@class NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface TIMetricDescriptorRegistry : NSObject {
  /* instance variables */
  NSLock *_lock;
}

@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSDictionary *metricDescriptors;
@property (readonly, nonatomic) NSSet *invalidMetricNames;
@property (nonatomic) BOOL loaded;

/* class methods */
+ (id)registry;
+ (id)registryWithConfig:(id)config;
+ (id)registryWithDescriptors:(id)descriptors andInvalidMetricNames:(id)names;

/* instance methods */
- (id)initWithConfig:(id)config;
- (id)initWithDescriptors:(id)descriptors andInvalidMetricNames:(id)names;
- (id)allMetricDescriptors;
- (id)metricDescriptorWithName:(id)name;
- (void)loadMetricDescriptorsIfNecessary;
- (void)_loadMetricDescriptors;
- (id)contextFromError:(id)error;
- (id)valueFromError:(id)error forKey:(id)key;
@end

#endif /* TIMetricDescriptorRegistry_h */