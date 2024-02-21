//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUUserParse_h
#define SIRINLUUserParse_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SIRINLUParser.h"
#include "SIRINLURepetitionResult.h"

@class NSArray, NSString, NSUUID;

@interface SIRINLUUserParse : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSArray *userDialogActs;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSUUID *nsUUID;
@property (retain, nonatomic) NSString *parserId;
@property (retain, nonatomic) SIRINLURepetitionResult *repetitionResult;
@property (retain, nonatomic) SIRINLUParser *parser;
@property (nonatomic) double comparableProbability;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUserDialogActs:(id)acts probability:(double)probability parserId:(id)id repetitionResult:(id)result parser:(id)parser comparableProbability:(double)probability;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability parserId:(id)id repetitionResult:(id)result parser:(id)parser;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability parserId:(id)id repetitionResult:(id)result;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability parserId:(id)id;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability nsUUID:(id)uuid parserId:(id)id;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability nsUUID:(id)uuid parserId:(id)id repetitionResult:(id)result;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability nsUUID:(id)uuid parserId:(id)id repetitionResult:(id)result comparableProbability:(double)probability;
- (id)initWithUserDialogActs:(id)acts probability:(double)probability nsUUID:(id)uuid parserId:(id)id repetitionResult:(id)result parser:(id)parser comparableProbability:(double)probability;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SIRINLUUserParse_h */