//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleWANAddressRange_h
#define HMDNetworkRouterFirewallRuleWANAddressRange_h
@import Foundation;

#include "HMFObject.h"

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject

@property (readonly, nonatomic) HMFNetAddress *addressStart;
@property (readonly, nonatomic) HMFNetAddress *addressEnd;

/* instance methods */
- (id)initWithAddressStart:(id)start addressEnd:(id)end;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)prettyJSONDictionary;
@end

#endif /* HMDNetworkRouterFirewallRuleWANAddressRange_h */