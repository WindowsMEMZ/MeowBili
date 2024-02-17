//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef ILMessageFilterReportRequest_h
#define ILMessageFilterReportRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface ILMessageFilterReportRequest : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *messageBody;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (nonatomic) long long suggestedAction;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithExtensionIdentifier:(id)identifier;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRequest:(id)request;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ILMessageFilterReportRequest_h */