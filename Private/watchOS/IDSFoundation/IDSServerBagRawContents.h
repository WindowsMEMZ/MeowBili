//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSServerBagRawContents_h
#define IDSServerBagRawContents_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSDate;

@interface IDSServerBagRawContents : NSObject<NSCopying>

@property (readonly, nonatomic) NSDate *loadDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) NSData *serverSignature;
@property (readonly, nonatomic) NSArray *serverCerts;
@property (readonly, nonatomic) NSData *signedBag;

/* instance methods */
- (id)initWithLoadDate:(id)date timeToLive:(double)live serverSignature:(id)signature serverCerts:(id)certs signedBag:(id)bag;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* IDSServerBagRawContents_h */