//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef OTPairingMessage_h
#define OTPairingMessage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "OTApplicantToSponsorRound2M1.h"
#include "OTSponsorToApplicantRound1M2.h"
#include "OTSponsorToApplicantRound2M2.h"
#include "OTSupportOctagonMessage.h"
#include "OTSupportSOSMessage.h"

@interface OTPairingMessage : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasEpoch;
@property (retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch;
@property (readonly, nonatomic) BOOL hasPrepare;
@property (retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare;
@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher;
@property (readonly, nonatomic) BOOL hasSupportsOctagon;
@property (retain, nonatomic) OTSupportOctagonMessage *supportsOctagon;
@property (readonly, nonatomic) BOOL hasSupportsSOS;
@property (retain, nonatomic) OTSupportSOSMessage *supportsSOS;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* OTPairingMessage_h */