//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef RFColor_h
#define RFColor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RFColor-Protocol.h"
#include "RFOptionalFloat.h"
#include "RFRGBValue.h"

@class NSData, NSDictionary, NSString;

@interface RFColor : NSObject<RFColor, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 rgb_value; unsigned int x :1 name; } _has;
}

@property (retain, nonatomic) RFRGBValue *rgb_value;
@property (nonatomic) int name;
@property (retain, nonatomic) RFOptionalFloat *alpha;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasRgb_value;
- (BOOL)hasName;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* RFColor_h */