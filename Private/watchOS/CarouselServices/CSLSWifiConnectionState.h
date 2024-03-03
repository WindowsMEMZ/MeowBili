//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSWifiConnectionState_h
#define CSLSWifiConnectionState_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CSLSWifiConnectionState : NSObject<NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionProviding>

@property (readonly, nonatomic) BOOL wifiActive;
@property (readonly, nonatomic) unsigned long long signalStrengthBars;
@property (readonly, nonatomic) BOOL associatedToIOSHotspot;
@property (readonly, copy, nonatomic) NSString *currentNetworkName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithState:(id)state;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CSLSWifiConnectionState_h */