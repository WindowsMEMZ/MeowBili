//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICAssistantVoiceSettingsConnection_h
#define SUICAssistantVoiceSettingsConnection_h
@import Foundation;

#include "AFSettingsConnection.h"

@class NSMutableDictionary;

@interface SUICAssistantVoiceSettingsConnection : AFSettingsConnection

@property (retain, nonatomic) NSMutableDictionary *cachedAvailableVoices;

/* class methods */
+ (id)outputLanguageIdentifiers;
+ (id)assistantLanguageTitlesDictionary;
+ (id)titlesForLanguageIdentifiers:(id)identifiers;
+ (id)shortTitlesForLanguageIdentifiers:(id)identifiers deviceLanguageLocale:(id)locale;
+ (id)capitalizeFirstPartOfCountry:(id)country;

/* instance methods */
- (BOOL)languageHasCustomVoice:(id)voice;
- (BOOL)languageHasBothGender:(id)gender;
- (BOOL)languageHasVoiceVariations:(id)variations;
- (id)getAvailableVoicesForLanguage:(id)language;
- (id)getAvailableDialectsForLanguage:(id)language;
- (BOOL)languageHasVoiceSelection:(id)selection;
- (id)_regionForLanguageIdentifier:(id)identifier;
- (id)dialectForLanguageIdentifier:(id)identifier;
- (void)setOutputVoiceLanguage:(id)language gender:(long long)gender;
@end

#endif /* SUICAssistantVoiceSettingsConnection_h */