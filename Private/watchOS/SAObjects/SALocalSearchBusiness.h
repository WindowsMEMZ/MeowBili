//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SALocalSearchBusiness_h
#define SALocalSearchBusiness_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"
#include "SALocalSearchRating.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface SALocalSearchBusiness : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSNumber *businessId;
@property (copy, nonatomic) NSDictionary *businessIds;
@property (copy, nonatomic) NSURL *businessUrl;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *openingHours;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSURL *photo;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *reviews;
@property (nonatomic) long long totalNumberOfReviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)business;
+ (id)businessWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SALocalSearchBusiness_h */