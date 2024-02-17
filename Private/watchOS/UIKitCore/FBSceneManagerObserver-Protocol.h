//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef FBSceneManagerObserver_Protocol_h
#define FBSceneManagerObserver_Protocol_h
@import Foundation;

@protocol FBSceneManagerObserver <NSObject>
@optional
/* instance methods */
- (void)sceneManager:(id)manager didAddScene:(id)scene;
- (void)sceneManager:(id)manager willRemoveScene:(id)scene;
- (void)sceneManager:(id)manager didCreateScene:(id)scene;
- (void)sceneManager:(id)manager willDestroyScene:(id)scene;
- (void)sceneManager:(id)manager didDestroyScene:(id)scene;
- (void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
- (void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
- (void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned long long)id;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned long long)id success:(BOOL)success;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned long long)id;
- (void)sceneManager:(id)manager updateForScene:(id)scene preparedWithContext:(id)context;
- (void)sceneManager:(id)manager updateForScene:(id)scene appliedWithContext:(id)context;
- (void)sceneManager:(id)manager updateForScene:(id)scene completedWithContext:(id)context error:(id)error;
@end

#endif /* FBSceneManagerObserver_Protocol_h */