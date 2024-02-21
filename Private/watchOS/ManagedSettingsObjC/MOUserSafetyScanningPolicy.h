//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOUserSafetyScanningPolicy_h
#define MOUserSafetyScanningPolicy_h
@import Foundation;

#include "MOPersistable-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface MOUserSafetyScanningPolicy : NSObject<MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long policy;
@property (readonly) NSSet *services;
@property (readonly) NSDictionary *allServices;
@property (readonly) NSSet *applications;
@property (readonly) NSDictionary *allApplications;
@property (readonly) NSString *interventionType;

/* class methods */
+ (id)initializeWithPersistableValue:(id)value;
+ (BOOL)isValidPersistableRepresentation:(id)representation;
+ (id)nonePolicy;
+ (id)nudityDetectionPolicyWithServices:(id)services applications:(id)applications;
+ (id)nudityDetectionPolicyWithAllServices:(id)services allApplications:(id)applications;
+ (id)communicationSafetyWithInterventionType:(id)type;

/* instance methods */
- (id)initWithAllServices:(id)services allApplications:(id)applications interventionType:(id)type;
@end

#endif /* MOUserSafetyScanningPolicy_h */