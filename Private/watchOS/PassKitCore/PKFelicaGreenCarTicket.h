//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFelicaGreenCarTicket_h
#define PKFelicaGreenCarTicket_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSData *originStation;
@property (readonly, copy, nonatomic) NSData *destinationStation;
@property (readonly, copy, nonatomic) NSNumber *validityStartDate;
@property (readonly, nonatomic) BOOL refunded;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isRefunded;
@end

#endif /* PKFelicaGreenCarTicket_h */