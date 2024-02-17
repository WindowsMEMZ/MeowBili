//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLCacheBasicFileIdentifier_h
#define QLCacheBasicFileIdentifier_h
@import Foundation;

#include "QLCacheFileIdentifier.h"
#include "NSSecureCoding-Protocol.h"

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier<NSSecureCoding>

@property (readonly) unsigned long long fileId;
@property (readonly) struct fsid { int x0[2] } fsid;

/* class methods */
+ (Class)versionedFileIdentifierClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFileId:(unsigned long long)id fsid:(struct fsid { int x0[2] })fsid;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithFileURL:(id)url error:(id *)error;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* QLCacheBasicFileIdentifier_h */