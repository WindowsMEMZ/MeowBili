//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFFetchStreamEventsRequest_h
#define DMFFetchStreamEventsRequest_h
@import Foundation;

#include "DMFTaskRequest.h"

@class NSArray, NSDate, NSString;

@interface DMFFetchStreamEventsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (retain, nonatomic) NSDate *startDate;

/* class methods */
+ (Class)allowlistedClassForResultObject;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DMFFetchStreamEventsRequest_h */