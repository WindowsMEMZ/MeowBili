//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFPerformPersonEntityQueryCommand_h
#define SFPerformPersonEntityQueryCommand_h
@import Foundation;

#include "SFCommand.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCommandReference.h"
#include "SFPerformPersonEntityQueryCommand-Protocol.h"
#include "SFPerson.h"
#include "SFTopic.h"

@class NSData, NSDictionary, NSString;

@interface SFPerformPersonEntityQueryCommand : SFCommand<SFPerformPersonEntityQueryCommand, NSSecureCoding, NSCopying>

@property (retain, nonatomic) SFPerson *person;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) SFCommandReference *commandReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFPerformPersonEntityQueryCommand_h */