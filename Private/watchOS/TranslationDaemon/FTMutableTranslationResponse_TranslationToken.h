//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTranslationResponse_TranslationToken_h
#define FTMutableTranslationResponse_TranslationToken_h
@import Foundation;

#include "FTTranslationResponse_TranslationToken.h"
#include "FTAlignment.h"

@class NSString;

@interface FTMutableTranslationResponse_TranslationToken : FTTranslationResponse_TranslationToken

@property (copy, nonatomic) NSString *token;
@property (nonatomic) float confidence;
@property (copy, nonatomic) FTAlignment *mt_alignment;
@property (nonatomic) BOOL add_space_after;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTranslationResponse_TranslationToken_h */