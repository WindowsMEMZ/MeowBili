//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef EMTResult_h
#define EMTResult_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSLocale, NSString;

@interface EMTResult : NSObject<NSCopying>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL lowConfidence;
@property (readonly, nonatomic) NSString *metaInfo;
@property (readonly, nonatomic) NSString *romanization;
@property (readonly, nonatomic) NSArray *alternativeSelectionSpans;

/* instance methods */
- (id)initWithLocale:(id)locale tokens:(id)tokens confidence:(float)confidence lowConfidence:(BOOL)confidence metaInfo:(id)info romanization:(id)romanization alternativeSelectionSpans:(id)spans;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* EMTResult_h */