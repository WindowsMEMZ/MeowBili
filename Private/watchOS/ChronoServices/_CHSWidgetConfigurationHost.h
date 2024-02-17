//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _CHSWidgetConfigurationHost_h
#define _CHSWidgetConfigurationHost_h
@import Foundation;

#include "CHSWidgetConfigurationHost_Internal-Protocol.h"
#include "CHSWidgetMetricsSpecification.h"

@class NSArray, NSString;

@interface _CHSWidgetConfigurationHost : NSObject<CHSWidgetConfigurationHost_Internal> {
  /* instance variables */
  NSArray *_configurations;
}

@property (readonly, copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *widgetConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier configurations:(id)configurations metricsSpecification:(id)specification;
- (id)widgetConfigurationsForApplicationContainerBundleIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _CHSWidgetConfigurationHost_h */