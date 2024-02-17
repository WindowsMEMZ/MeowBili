//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTextToSpeechSpeechFeatureRequest_h
#define FTMutableTextToSpeechSpeechFeatureRequest_h
@import Foundation;

#include "FTTextToSpeechSpeechFeatureRequest.h"
#include "FTTextToSpeechSpeechFeatureInputText.h"
#include "FTTextToSpeechSpeechFeatureInputWave.h"
#include "FTTextToSpeechSpeechFeatureModelIdentifier.h"

@class NSArray, NSString;

@interface FTMutableTextToSpeechSpeechFeatureRequest : FTTextToSpeechSpeechFeatureRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property (copy, nonatomic) NSArray *lexicon;
@property (nonatomic) BOOL support_homograph;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTextToSpeechSpeechFeatureRequest_h */