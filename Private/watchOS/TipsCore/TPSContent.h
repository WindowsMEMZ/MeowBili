//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSContent_h
#define TPSContent_h
@import Foundation;

#include "TPSSerializableObject.h"
#include "NAIdentifiable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TPSAssets.h"

@class NSArray, NSString;

@interface TPSContent : TPSSerializableObject<NSCopying, NSSecureCoding, NAIdentifiable>

@property (nonatomic) BOOL bodyContainsLink;
@property (nonatomic) long long labelStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleContent;
@property (copy, nonatomic) NSArray *bodyContent;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) TPSAssets *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

/* instance methods */
- (id)initWithDictionary:(id)dictionary metadata:(id)metadata;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* TPSContent_h */