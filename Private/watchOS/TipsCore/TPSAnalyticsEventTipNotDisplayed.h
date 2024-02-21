//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSAnalyticsEventTipNotDisplayed_h
#define TPSAnalyticsEventTipNotDisplayed_h
@import Foundation;

#include "TPSAnalyticsEvent.h"

@class NSString;

@interface TPSAnalyticsEventTipNotDisplayed : TPSAnalyticsEvent

@property (readonly, copy, nonatomic) NSString *tipID;
@property (readonly, copy, nonatomic) NSString *correlationID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *displayType;
@property (readonly, copy, nonatomic) NSString *reason;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithReason:(id)reason lastOfferedTipID:(id)id lastOfferedCorrelationID:(id)id lastOfferedBundleID:(id)id lastOfferedContext:(id)context;
- (id)initWithReason:(id)reason lastOfferedTipID:(id)id lastOfferedCorrelationID:(id)id lastOfferedBundleID:(id)id lastOfferedContext:(id)context date:(id)date;
- (id)initWithTipID:(id)id correlationID:(id)id reason:(long long)reason context:(id)context;
- (id)initWithTipID:(id)id correlationID:(id)id bundleID:(id)id reason:(long long)reason context:(id)context date:(id)date;
- (id)initWithTipID:(id)id correlationID:(id)id bundleID:(id)id reason:(id)reason context:(id)context date:(id)date displayType:(id)type;
- (void)setDataProvider:(id)provider;
- (void)encodeWithCoder:(id)coder;
- (id)eventName;
- (id)duetEvent;
- (id)mutableAnalyticsEventRepresentation;
@end

#endif /* TPSAnalyticsEventTipNotDisplayed_h */