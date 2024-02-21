//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECSubject_h
#define ECSubject_h
@import Foundation;

#include "EFPubliclyDescribable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface ECSubject : NSObject<NSCopying, NSSecureCoding, EFPubliclyDescribable> {
  /* instance variables */
  long long _hasReplyPrefixState;
}

@property (copy, nonatomic) NSString *subjectWithoutPrefix;
@property (copy, nonatomic) NSString *prefix;
@property (readonly, copy, nonatomic) NSString *subjectString;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long prefixLength;
@property (readonly, nonatomic) BOOL hasPrefix;
@property (readonly, nonatomic) BOOL hasReplyPrefix;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)subjectWithString:(id)string;
+ (id)_subjectTruncatedToMaximumAllowableSize:(id)size;
+ (id)_prefixTruncatedToMaximumAllowableSize:(id)size;
+ (id)_uniqueString:(id)string type:(long long)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithString:(id)string;
- (id)initWithPrefix:(id)prefix subjectWithoutPrefix:(id)prefix;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToSubject:(id)subject;
- (BOOL)isEqualToString:(id)string;
- (BOOL)isEqualToSubjectIgnoringPrefix:(id)prefix;
@end

#endif /* ECSubject_h */