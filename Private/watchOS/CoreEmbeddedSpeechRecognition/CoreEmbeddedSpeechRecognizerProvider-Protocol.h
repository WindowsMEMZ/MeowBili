//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CoreEmbeddedSpeechRecognizerProvider_Protocol_h
#define CoreEmbeddedSpeechRecognizerProvider_Protocol_h
@import Foundation;

@protocol CoreEmbeddedSpeechRecognizerProvider <NSObject>
/* class methods */
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)language;
+ (id)purgeInstalledAssetsExceptLanguages:(id)languages error:(id *)error;
+ (BOOL)purgeInstalledAssetsExceptLanguages:(id)languages assetType:(unsigned long long)type error:(id *)error;
+ (void)setAssetsPurgeabilityExceptLanguages:(id)languages assetType:(unsigned long long)type;
+ (void)handlePostUpgradeSubscriptions;
+ (void)cleanupUnusedSubscriptions;
+ (void)compileAllAssets;
+ (void)resetCacheAndCompileAllAssets;
+ (void)forceCooldownIfIdle;
+ (id)profilePathForLanguage:(id)language errorOut:(id *)out;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)language errorOut:(id *)out;
+ (id)offlineDictationStatusIgnoringCache:(BOOL)cache error:(id *)error;
/* instance methods */
- (void)preheatSpeechRecognitionWithLanguage:(id)language modelOverrideURL:(id)url;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)config preheatSource:(id)source modelOverrideURL:(id)url;
- (void)startSpeechRecognitionWithParameters:(id)parameters didStartHandler:(id /* block */)handler;
- (void)startSpeechRecognitionWithParameters:(id)parameters didStartHandlerWithInfo:(id /* block */)info;
- (void)createSpeechProfileWithLanguage:(id)language modelOverridePath:(id)path JSONData:(id)jsondata completion:(id /* block */)completion;
- (void)updateSpeechProfileWithLanguage:(id)language modelOverridePath:(id)path completion:(id /* block */)completion;
- (void)getOfflineAssetStatusIgnoringCache:(BOOL)cache assetType:(unsigned long long)type withCompletion:(id /* block */)completion;
- (void)getOfflineAssetStatusIgnoringCache:(BOOL)cache assetType:(unsigned long long)type withDetailedStatus:(BOOL)status withCompletion:(id /* block */)completion;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)completion;
- (void)getOfflineDictationStatusIgnoringCache:(BOOL)cache withCompletion:(id /* block */)completion;
- (void)fetchAssetsForLanguage:(id)language completion:(id /* block */)completion;
- (void)fetchAssetsForAssetConfig:(id)config completion:(id /* block */)completion;
- (id)modelPropertiesForAssetConfig:(id)config error:(id *)error;
- (void)addAudioPacket:(id)packet;
- (void)addAudioPacket:(id)packet packetRecordedTime:(id)time packetReadyUpstreamTime:(id)time;
- (void)finishAudio;
- (void)stopAudioDecoding;
- (void)requestEagerResult;
- (void)runCorrectedTextEvaluationWithAudioDatas:(id)datas recordDatas:(id)datas language:(id)language samplingRate:(unsigned long long)rate caseSensitive:(BOOL)sensitive skipLME:(BOOL)lme wordSenseAccessListSet:(id)set completion:(id /* block */)completion;
- (void)redecodeWithAudioDatas:(id)datas language:(id)language task:(id)task samplingRate:(unsigned long long)rate completion:(id /* block */)completion;
- (void)readProfileAndUserDataWithLanguage:(id)language allowOverride:(BOOL)override completion:(id /* block */)completion;
- (void)resetDESWithCompletion:(id /* block */)completion;
- (void)fetchUserDataForLanguage:(id)language completion:(id /* block */)completion;
- (void)startMissingAssetDownload;
- (void)sendSpeechCorrectionInfo:(id)info interactionIdentifier:(id)identifier;
- (void)runEvaluationWithDESRecordDatas:(id)datas language:(id)language recipe:(id)recipe fidesPersonalizedLMPath:(id)lmpath fidesPersonalizedLMTrainingAsset:(id)asset scrubResult:(BOOL)result completion:(id /* block */)completion;
- (void)runEvaluationWithDESRecordDatas:(id)datas language:(id)language recipe:(id)recipe attachments:(id)attachments fidesPersonalizedLMPath:(id)lmpath fidesPersonalizedLMTrainingAsset:(id)asset scrubResult:(BOOL)result completion:(id /* block */)completion;
- (void)invalidate;
- (void)invalidatePersonalizedLM;
- (void)removePersonalizedLMForFidesOnly:(BOOL)only;
- (void)deleteAllDESRecordsForDictationPersonalization;
- (unsigned char x[16] *)instanceUUID;
- (void)invalidateUaapLM;
- (void)pauseRecognition;
- (void)resumeRecognitionWithPrefixText:(id)text postfixText:(id)text selectedText:(id)text;
@end

#endif /* CoreEmbeddedSpeechRecognizerProvider_Protocol_h */