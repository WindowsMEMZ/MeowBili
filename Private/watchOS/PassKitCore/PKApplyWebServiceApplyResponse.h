//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyWebServiceApplyResponse_h
#define PKApplyWebServiceApplyResponse_h
@import Foundation;

#include "PKApplyWebServiceResponse.h"
#include "PKAccount.h"
#include "PKFeatureApplication.h"

@class NSSet;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) PKFeatureApplication *featureApplication;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) unsigned long long requiredDeviceMetadataFields;
@property (readonly, nonatomic) BOOL requiresODIAssessment;
@property (readonly, copy, nonatomic) NSSet *actionIdentifiersRequiringAuthentication;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data;
- (id)nextStepInfo;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKApplyWebServiceApplyResponse_h */