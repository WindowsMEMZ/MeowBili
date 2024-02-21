//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceEnhancedMerchantsResponse_h
#define PKAccountWebServiceEnhancedMerchantsResponse_h
@import Foundation;

#include "PKAccountWebServiceResponse.h"

@class NSArray, NSDate, NSNumber;

@interface PKAccountWebServiceEnhancedMerchantsResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) NSArray *merchants;
@property (readonly, nonatomic) NSArray *orderings;
@property (readonly, nonatomic) NSDate *lastAddedDate;
@property (readonly, nonatomic) NSNumber *minRefreshPeriod;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKAccountWebServiceEnhancedMerchantsResponse_h */