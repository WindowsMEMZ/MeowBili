//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TILanguageModelLoader_h
#define TILanguageModelLoader_h
@import Foundation;

#include "TIInputMode.h"
#include "TILanguageModelAdaptationContext.h"

@class NSArray, NSDictionary, NSString;
@protocol _ICContactFetchingDelegate, struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; }, {shared_ptr<KB::LanguageModel>="__ptr_"^{LanguageModel}"__cntrl_"^{__shared_weak_count}};

@interface TILanguageModelLoader : NSObject

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; } model;
@property (readonly, nonatomic) TIInputMode *inputMode;
@property (readonly, nonatomic) BOOL multiLingualModeEnabled;
@property (readonly, nonatomic) BOOL validEnglishTransformerMultilingualConfig;
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (readonly, nonatomic) NSArray *customResourcePaths;
@property (readonly, nonatomic) NSString *dynamicResourcePath;
@property (readonly, nonatomic) NSArray *mobileAssets;
@property (readonly, nonatomic) BOOL usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (retain, nonatomic) NSDictionary *trialParameters;
@property (nonatomic) int inlineCompletionPrecision;
@property (nonatomic) NSObject<_ICContactFetchingDelegate> *contactFetchingDelegate;

/* instance methods */
- (void)wireLanguageModelMemory;
- (void)unwireLanguageModelMemory;
- (id)initWithInputMode:(id)mode customResourcePaths:(id)paths dynamicResourcePath:(id)path mobileAssets:(id)assets usesLinguisticContext:(BOOL)context isMultiLingualModeEnabled:(BOOL)enabled validEnglishTransformerMultilingualConfig:(BOOL)config trialParameters:(id)parameters inlineCompletionPrecision:(int)precision;
- (void)clearDynamicLearningCaches;
- (void)flushDynamicLearningCaches;
- (void)performLearningIfNecessaryForClient:(id)client withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; })model;
- (BOOL)hasLanguageModelBundle;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; })newLanguageModel;
- (void)setLanguageModelClientIdentifier:(id)identifier;
- (void)findRecordsMatchingRecipient:(id)recipient completionHandler:(id /* block */)handler;
- (void)lookupRecordForRecipientIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)setLanguageModelRecipientIdentifier:(id)identifier completion:(id /* block */)completion;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; })sharedLanguageModelForClient:(id)client withRecipient:(id)recipient;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; })sharedLanguageModelForClient:(id)client withRecipient:(id)recipient completion:(id /* block */)completion;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; })lightweightLanguageModel;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel * x0; struct __shared_weak_count * x1; })languageModelForAdaptationContext:(id)context;
- (BOOL)isMultiLingualModeEnabled;
@end

#endif /* TILanguageModelLoader_h */