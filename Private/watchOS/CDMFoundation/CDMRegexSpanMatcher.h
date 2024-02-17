//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMRegexSpanMatcher_h
#define CDMRegexSpanMatcher_h
@import Foundation;

#include "CDMProtoSpanMatcher-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface CDMRegexSpanMatcher : NSObject<CDMProtoSpanMatcher> {
  /* instance variables */
  NSString *_cachedFilePath;
  NSNumber *_fileVersion;
  NSArray *_regexEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)readRegexAssetFromPath:(id)path;
+ (id)getNumberFormatter:(id)formatter;
+ (id)getNumberFormatterForOutput;
+ (id)getNumberString:(id)string numberFormatter:(id)formatter numberFormatterForOutput:(id)output integerOnly:(BOOL)only;

/* instance methods */
- (id)initWithCachePath:(id)path;
- (id)matchSpansForTokenChain:(id)chain;
@end

#endif /* CDMRegexSpanMatcher_h */