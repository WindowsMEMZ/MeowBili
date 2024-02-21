//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETModelDefinition_h
#define ETModelDefinition_h
@import Foundation;

@class NSArray, NSString, NSURL;

@interface ETModelDefinition : NSObject

@property (readonly) NSArray *layerNames;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) NSArray *trainingInputs;
@property (readonly) NSArray *trainingOutputs;
@property (readonly) NSURL *modelURL;
@property (readonly) NSString *isTrainingGlobalName;
@property (readonly) NSString *initializer;

/* instance methods */
- (id)initWithInferenceNetworkPath:(id)path error:(id *)error;
- (id)initWithInferenceNetworkPath:(id)path inferenceInputs:(id)inputs inferenceOutputs:(id)outputs error:(id *)error;
- (id)initWithTrainingNetworkPath:(id)path inferenceInputs:(id)inputs inferenceOutputs:(id)outputs trainingInputs:(id)inputs trainingOutputs:(id)outputs trainingControlVariableName:(id)name withInitializer:(id)initializer error:(id *)error;
@end

#endif /* ETModelDefinition_h */