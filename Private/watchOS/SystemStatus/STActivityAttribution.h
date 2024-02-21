//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STActivityAttribution_h
#define STActivityAttribution_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "STAttributedEntity.h"

@class NSString;

@interface STActivityAttribution : NSObject<BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity;
@property (readonly, copy, nonatomic) STAttributedEntity *activeEntity;
@property (readonly, nonatomic) struct { unsigned int x0[8] } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)attributionWithAuditToken:(struct { unsigned int x0[8] })token;
+ (id)attributionWithPID:(int)pid;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAuditToken:(struct { unsigned int x0[8] })token;
- (id)initWithPID:(int)pid;
- (id)initWithAttributedEntity:(id)entity;
- (id)initWithAttributedEntity:(id)entity activeEntity:(id)entity;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* STActivityAttribution_h */