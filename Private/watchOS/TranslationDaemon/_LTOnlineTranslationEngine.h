//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTOnlineTranslationEngine_h
#define _LTOnlineTranslationEngine_h
@import Foundation;

#include "FTBlazarService.h"
#include "_LTBatchTranslationResponseHandler.h"
#include "_LTDSELFLoggingManager.h"
#include "_LTOspreySpeechTranslationSession.h"
#include "_LTTextToSpeechCache.h"
#include "_LTTranslationEngine-Protocol.h"

@class AFSettingsConnection, NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LTOnlineTranslationEngine : NSObject<_LTTranslationEngine> {
  /* instance variables */
  FTBlazarService *_blazarService;
  FTBlazarService *_siriService;
  FTBlazarService *_systemService;
  FTBlazarService *_webTaskService;
  NSObject<OS_dispatch_queue> *_translationQueue;
  _LTOspreySpeechTranslationSession *_speechSession;
  _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;
  NSObject<OS_dispatch_queue> *_timerQueue;
  NSObject<OS_dispatch_source> *_serverTimer;
  NSDate *_startTime;
  AFSettingsConnection *_assistantSettingsConnection;
  long long _dataSharingOptInStatus;
  _LTDSELFLoggingManager *_selfLoggingManager;
}

@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)blazarServiceWithBundleID:(id)id;

/* instance methods */
- (id)initWithSelfLoggingManager:(id)manager;
- (id)_blazarService;
- (id)_siriService;
- (id)_systemService;
- (id)_webTaskService;
- (id)_serviceForTask:(long long)task;
- (BOOL)translatesPair:(id)pair;
- (void)preheatAsynchronously:(BOOL)asynchronously withContext:(id)context;
- (void)startServerTimeoutTimer;
- (void)updateServerTimeout;
- (void)cancelServerTimeout;
- (void)serverTimeoutFired;
- (id)_tokenizeString:(id)string inLocale:(id)locale;
- (void)speak:(id)speak withContext:(id)context completion:(id /* block */)completion;
- (void)_createOrUpdateBatchTranslationRequestWithParagraph:(id)paragraph index:(long long)index context:(id)context completion:(id /* block */)completion;
- (void)sendBatchTranslationRequestWithDelegate:(id)delegate;
- (void)translateSentence:(id)sentence withContext:(id)context completion:(id /* block */)completion;
- (void)translate:(id)translate withContext:(id)context paragraphResult:(id /* block */)result completion:(id /* block */)completion;
- (void)startTextToSpeechTranslationWithContext:(id)context text:(id)text delegate:(id)delegate;
- (void)setLanguagesRecognized:(id)recognized context:(id)context;
- (void)addSpeechAudioData:(id)data;
- (void)endpoint;
- (void)endAudio;
- (BOOL)_hasOngoingSpeechSession;
- (void)startSpeechTranslationWithContext:(id)context delegate:(id)delegate;
- (void)_speechSessionCompletedWithError:(id)error;
- (void)cancelSpeechTranslation;
@end

#endif /* _LTOnlineTranslationEngine_h */