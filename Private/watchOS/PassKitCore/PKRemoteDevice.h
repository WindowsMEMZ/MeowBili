//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRemoteDevice_h
#define PKRemoteDevice_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKRemotePaymentInstrument.h"

@class NSArray, NSDate, NSString, NSUUID;

@interface PKRemoteDevice : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSDate *lastSeen;
@property (readonly, nonatomic) BOOL canMakePayments;
@property (nonatomic) long long proximityState;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) BOOL userDisabled;
@property (nonatomic) BOOL deviceDisabled;
@property (retain, nonatomic) NSArray *remotePaymentInstruments;
@property (retain, nonatomic) PKRemotePaymentInstrument *defaultRemotePaymentInstrument;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSUUID *bluetoothUUID;
@property (nonatomic) BOOL supportsFaceID;
@property (retain, nonatomic) NSArray *supportedSetupFeatures;
@property (nonatomic) long long majorOperatingSystemVersion;

/* class methods */
+ (id /* block */)preferenceComparator;
+ (id /* block */)acceptedComparatorWithPaymentSupportedQuery:(id)query;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)pk_idsDestination;
- (id)initWithIDSDevice:(id)idsdevice;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRemoteDevice:(id)device;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)_deviceTypeForModelIdentifier:(id)identifier;
@end

#endif /* PKRemoteDevice_h */