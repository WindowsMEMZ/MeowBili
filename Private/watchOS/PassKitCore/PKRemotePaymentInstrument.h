//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRemotePaymentInstrument_h
#define PKRemotePaymentInstrument_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKPaymentApplication.h"

@class NSArray, NSData, NSDate, NSString;

@interface PKRemotePaymentInstrument : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *passIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSData *manifestHash;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (retain, nonatomic) NSArray *paymentApplications;
@property (retain, nonatomic) PKPaymentApplication *primaryPaymentApplication;
@property (retain, nonatomic) NSDate *ingestedDate;
@property (nonatomic) BOOL supportsAutomaticSelection;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentAccountBalance;
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount;
@property (nonatomic) unsigned long long peerPaymentAccountState;
@property (retain, nonatomic) NSArray *associatedWebDomains;

/* class methods */
+ (id)thumbnailCachePathForManifestHash:(id)hash size:(struct CGSize { double x0; double x1; })size;
+ (id)remotePaymentInstrumentWithProtobuf:(id)protobuf;
+ (id)sortDescriptorForDefaultPaymentInstrument:(id)instrument paymentSupportedQuery:(id)query;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)protobuf;
- (id)initWithPaymentPass:(id)pass;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)sortedPaymentApplications:(id)applications ascending:(BOOL)ascending;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRemotePaymentInstrument:(id)instrument;
@end

#endif /* PKRemotePaymentInstrument_h */