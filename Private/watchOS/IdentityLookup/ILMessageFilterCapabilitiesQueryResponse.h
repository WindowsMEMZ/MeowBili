//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef ILMessageFilterCapabilitiesQueryResponse_h
#define ILMessageFilterCapabilitiesQueryResponse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface ILMessageFilterCapabilitiesQueryResponse : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *transactionalSubActions;
@property (copy, nonatomic) NSArray *promotionalSubActions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToCapabilitiesResponse:(id)response;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ILMessageFilterCapabilitiesQueryResponse_h */