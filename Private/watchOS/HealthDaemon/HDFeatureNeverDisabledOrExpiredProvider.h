//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFeatureNeverDisabledOrExpiredProvider_h
#define HDFeatureNeverDisabledOrExpiredProvider_h
@import Foundation;

#include "HDFeatureDisableAndExpiryProviding-Protocol.h"
#include "HDFeatureDisableAndExpiryProvidingDelegate-Protocol.h"

@interface HDFeatureNeverDisabledOrExpiredProvider : NSObject<HDFeatureDisableAndExpiryProviding>

@property (weak, nonatomic) NSObject<HDFeatureDisableAndExpiryProvidingDelegate> *delegate;

/* instance methods */
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)code error:(id *)error;
- (id)rescindedStatusForCountryCode:(id)code device:(id)device error:(id *)error;
@end

#endif /* HDFeatureNeverDisabledOrExpiredProvider_h */