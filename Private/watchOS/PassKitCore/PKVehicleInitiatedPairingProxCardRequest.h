//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKVehicleInitiatedPairingProxCardRequest_h
#define PKVehicleInitiatedPairingProxCardRequest_h
@import Foundation;

#include "PKProxCardRequest.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCarUnlockSupportedTerminal.h"

@interface PKVehicleInitiatedPairingProxCardRequest : PKProxCardRequest<NSSecureCoding>

@property (readonly, nonatomic) PKCarUnlockSupportedTerminal *supportedTerminal;
@property (readonly, nonatomic) unsigned long long referralSource;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSupportedTerminal:(id)terminal referralSource:(unsigned long long)source;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKVehicleInitiatedPairingProxCardRequest_h */