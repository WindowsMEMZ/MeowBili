//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBModelField_h
#define HMBModelField_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class HMFVersion, NSString;

@interface HMBModelField : HMFObject<NSCopying, NSMutableCopying>

@property (nonatomic) BOOL optional;
@property (nonatomic) unsigned long long loggingVisibility;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;
@property (retain, nonatomic) NSString *externalRecordField;
@property (nonatomic) BOOL encrypted;
@property (nonatomic) BOOL excludeFromCloudStorage;
@property (nonatomic) BOOL conformsToHMBModelNativeCKWrapper;
@property (copy, nonatomic) id /* block */ encodeBlock;
@property (copy, nonatomic) id /* block */ decodeBlock;
@property (copy, nonatomic) id /* block */ descriptionBlock;
@property (readonly, nonatomic) Class classObj;

/* class methods */
+ (id)fieldWithClass:(Class)class;
+ (id)optionalFieldWithClass:(Class)class;
+ (id)fieldWithClass:(Class)class options:(id)options;
+ (id)optionalFieldWithClass:(Class)class options:(id)options;
+ (id)deprecatedField;

/* instance methods */
- (id)initWithClass:(Class)class;
- (id)initWithClass:(Class)class options:(id)options;
- (id)description;
- (id)encodeQueryableValue:(id)value;
- (id)decodeQueryableValue:(id)value;
- (id)descriptionForEncodedQueryableValue:(id)value;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isOptional;
@end

#endif /* HMBModelField_h */