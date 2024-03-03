//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceResolveStorefrontCountryMismatchRequest_h
#define PKAccountWebServiceResolveStorefrontCountryMismatchRequest_h
@import Foundation;

#include "PKAccountWebServiceRequest.h"

@class NSString, NSURL;

@interface PKAccountWebServiceResolveStorefrontCountryMismatchRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *countryCode;

/* instance methods */
- (id)_urlRequestWithAppleAccountInformation:(id)information;
@end

#endif /* PKAccountWebServiceResolveStorefrontCountryMismatchRequest_h */