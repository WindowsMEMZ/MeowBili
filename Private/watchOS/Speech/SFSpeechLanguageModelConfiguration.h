//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef SFSpeechLanguageModelConfiguration_h
#define SFSpeechLanguageModelConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSURL;

@interface SFSpeechLanguageModelConfiguration : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSURL *languageModel;
@property (readonly, copy, nonatomic) NSURL *vocabulary;

/* instance methods */
- (id)initWithLanguageModel:(id)model;
- (id)initWithLanguageModel:(id)model vocabulary:(id)vocabulary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SFSpeechLanguageModelConfiguration_h */