//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef _CESRSpeechParametersMutation_h
#define _CESRSpeechParametersMutation_h
@import Foundation;

#include "CESRSpeechParameters.h"
#include "CESRSpeechParametersMutating-Protocol.h"

@class AFPowerContextPolicy, CLLocation, NSArray, NSData, NSDictionary, NSString, NSURL, NSUUID;

@interface _CESRSpeechParametersMutation : NSObject<CESRSpeechParametersMutating> {
  /* instance variables */
  CESRSpeechParameters *_baseModel;
  NSString *_language;
  NSString *_requestIdentifier;
  NSString *_dictationUIInteractionIdentifier;
  NSString *_task;
  NSArray *_loggingContext;
  NSString *_applicationName;
  NSData *_profile;
  NSDictionary *_overrides;
  NSURL *_modelOverrideURL;
  NSURL *_originalAudioFileURL;
  NSString *_codec;
  BOOL _narrowband;
  BOOL _detectUtterances;
  BOOL _censorSpeech;
  BOOL _farField;
  BOOL _secureOfflineOnly;
  BOOL _shouldStoreAudioOnDevice;
  BOOL _continuousListening;
  BOOL _shouldHandleCapitalization;
  BOOL _isSpeechAPIRequest;
  double _maximumRecognitionDuration;
  double _endpointStart;
  NSString *_inputOrigin;
  CLLocation *_location;
  NSArray *_jitGrammar;
  BOOL _deliverEagerPackage;
  BOOL _disableDeliveringAsrFeatures;
  BOOL _enableEmojiRecognition;
  BOOL _enableAutoPunctuation;
  BOOL _enableVoiceCommands;
  NSArray *_sharedUserInfos;
  NSString *_prefixText;
  NSString *_postfixText;
  NSString *_selectedText;
  AFPowerContextPolicy *_powerContext;
  double _recognitionStart;
  BOOL _shouldGenerateVoiceCommandCandidates;
  NSUUID *_asrId;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasLanguage; unsigned int x :1 hasRequestIdentifier; unsigned int x :1 hasDictationUIInteractionIdentifier; unsigned int x :1 hasTask; unsigned int x :1 hasLoggingContext; unsigned int x :1 hasApplicationName; unsigned int x :1 hasProfile; unsigned int x :1 hasOverrides; unsigned int x :1 hasModelOverrideURL; unsigned int x :1 hasOriginalAudioFileURL; unsigned int x :1 hasCodec; unsigned int x :1 hasNarrowband; unsigned int x :1 hasDetectUtterances; unsigned int x :1 hasCensorSpeech; unsigned int x :1 hasFarField; unsigned int x :1 hasSecureOfflineOnly; unsigned int x :1 hasShouldStoreAudioOnDevice; unsigned int x :1 hasContinuousListening; unsigned int x :1 hasShouldHandleCapitalization; unsigned int x :1 hasIsSpeechAPIRequest; unsigned int x :1 hasMaximumRecognitionDuration; unsigned int x :1 hasEndpointStart; unsigned int x :1 hasInputOrigin; unsigned int x :1 hasLocation; unsigned int x :1 hasJitGrammar; unsigned int x :1 hasDeliverEagerPackage; unsigned int x :1 hasDisableDeliveringAsrFeatures; unsigned int x :1 hasEnableEmojiRecognition; unsigned int x :1 hasEnableAutoPunctuation; unsigned int x :1 hasEnableVoiceCommands; unsigned int x :1 hasSharedUserInfos; unsigned int x :1 hasPrefixText; unsigned int x :1 hasPostfixText; unsigned int x :1 hasSelectedText; unsigned int x :1 hasPowerContext; unsigned int x :1 hasRecognitionStart; unsigned int x :1 hasShouldGenerateVoiceCommandCandidates; unsigned int x :1 hasAsrId; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithBaseModel:(id)model;
- (void)setLanguage:(id)language;
- (void)setRequestIdentifier:(id)identifier;
- (void)setDictationUIInteractionIdentifier:(id)identifier;
- (void)setTask:(id)task;
- (void)setLoggingContext:(id)context;
- (void)setApplicationName:(id)name;
- (void)setProfile:(id)profile;
- (void)setOverrides:(id)overrides;
- (void)setModelOverrideURL:(id)url;
- (void)setOriginalAudioFileURL:(id)url;
- (void)setCodec:(id)codec;
- (void)setNarrowband:(BOOL)narrowband;
- (void)setDetectUtterances:(BOOL)utterances;
- (void)setCensorSpeech:(BOOL)speech;
- (void)setFarField:(BOOL)field;
- (void)setSecureOfflineOnly:(BOOL)only;
- (void)setShouldStoreAudioOnDevice:(BOOL)device;
- (void)setContinuousListening:(BOOL)listening;
- (void)setShouldHandleCapitalization:(BOOL)capitalization;
- (void)setIsSpeechAPIRequest:(BOOL)apirequest;
- (void)setMaximumRecognitionDuration:(double)duration;
- (void)setEndpointStart:(double)start;
- (void)setInputOrigin:(id)origin;
- (void)setLocation:(id)location;
- (void)setJitGrammar:(id)grammar;
- (void)setDeliverEagerPackage:(BOOL)package;
- (void)setDisableDeliveringAsrFeatures:(BOOL)features;
- (void)setEnableEmojiRecognition:(BOOL)recognition;
- (void)setEnableAutoPunctuation:(BOOL)punctuation;
- (void)setEnableVoiceCommands:(BOOL)commands;
- (void)setSharedUserInfos:(id)infos;
- (void)setPrefixText:(id)text;
- (void)setPostfixText:(id)text;
- (void)setSelectedText:(id)text;
- (void)setPowerContext:(id)context;
- (void)setRecognitionStart:(double)start;
- (void)setShouldGenerateVoiceCommandCandidates:(BOOL)candidates;
- (void)setAsrId:(id)id;
- (id)generate;
@end

#endif /* _CESRSpeechParametersMutation_h */