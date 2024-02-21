//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSMetricsBaseEvent_h
#define SSMetricsBaseEvent_h
@import Foundation;

#include "SSMetricsMutableEvent.h"

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSNumber *pixelRatio;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *windowHeight;
@property (retain, nonatomic) NSString *windowOrientation;
@property (retain, nonatomic) NSNumber *windowWidth;
@property (retain, nonatomic) NSString *pageContext;
@property (retain, nonatomic) NSString *pageDescription;
@property (nonatomic) unsigned long long pageID;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSString *pageURL;

/* instance methods */
- (id)init;
- (BOOL)isBlacklistedByConfiguration:(id)configuration;
- (id)description;
@end

#endif /* SSMetricsBaseEvent_h */