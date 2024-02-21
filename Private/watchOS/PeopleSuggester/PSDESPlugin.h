//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef PSDESPlugin_h
#define PSDESPlugin_h
@import Foundation;

#include "DESRecipeEvaluation-Protocol.h"

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface PSDESPlugin : NSObject<DESRecipeEvaluation>

@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (BOOL)shouldDownloadAttachmentWithURL:(id)url recipe:(id)recipe recordInfo:(id)info;
- (void)performEvaluation:(id)evaluation;
@end

#endif /* PSDESPlugin_h */