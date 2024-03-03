//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTTranslationSense_h
#define _LTTranslationSense_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface _LTTranslationSense : NSObject<NSSecureCoding>

@property (nonatomic) BOOL phrasebookMatch;
@property (copy, nonatomic) NSString *senseID;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *sourceMatch;
@property (copy, nonatomic) NSString *targetMatch;
@property (copy, nonatomic) NSArray *labels;

/* class methods */
+ (id)sensesFromArray:(id)array;
+ (id)senseWithPhrasebookMatchMeta:(id)meta;
+ (id)senseFromDictionary:(id)dictionary;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)jsonRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isPhrasebookMatch;
@end

#endif /* _LTTranslationSense_h */