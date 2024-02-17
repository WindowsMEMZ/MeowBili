//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTritiumAnimatedComplicationSpecifier_h
#define NTKTritiumAnimatedComplicationSpecifier_h
@import Foundation;

#include "NTKTritiumBaseSpecifier.h"
#include "NTKComplicationController.h"

@class CLKComplicationTemplate, NSDate;

@interface NTKTritiumAnimatedComplicationSpecifier : NTKTritiumBaseSpecifier

@property (readonly, nonatomic) NSDate *fromDate;
@property (readonly, nonatomic) NSDate *toDate;
@property (readonly, nonatomic) CLKComplicationTemplate *fromTemplate;
@property (readonly, nonatomic) CLKComplicationTemplate *toTemplate;
@property (readonly, weak, nonatomic) NTKComplicationController *complicationController;

/* instance methods */
- (id)initWithPresentationTime:(id)time fromDate:(id)date fromTemplate:(id)template toDate:(id)date toTemplate:(id)template complicationController:(id)controller;
@end

#endif /* NTKTritiumAnimatedComplicationSpecifier_h */