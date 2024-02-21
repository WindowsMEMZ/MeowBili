//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBStructuredLocation_Protocol_h
#define _SFPBStructuredLocation_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBLatLng.h"
#include "_SFPBStructuredLocation-Protocol.h"

@class NSData, NSString;

@protocol _SFPBStructuredLocation <NSObject>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBLatLng *geoLocation;
@property (nonatomic) double radius;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBStructuredLocation_Protocol_h */