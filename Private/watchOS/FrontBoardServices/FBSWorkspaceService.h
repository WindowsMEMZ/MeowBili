//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSWorkspaceService_h
#define FBSWorkspaceService_h
@import Foundation;

#include "FBSWorkspaceScenesClient.h"

@class BSServiceConnectionEndpoint, NSString;

@interface FBSWorkspaceService : NSObject {
  /* instance variables */
  FBSWorkspaceScenesClient *_client;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;

/* instance methods */
- (id)init;
- (id)_initWithEndpoint:(id)endpoint identifier:(id)identifier;
- (id)description;
- (void)sendActions:(id)actions;
- (void)sendActions:(id)actions completion:(id /* block */)completion;
- (id)createScene:(id /* block */)scene;
- (id)createScene:(id /* block */)scene completion:(id /* block */)completion;
- (void)requestSceneWithOptions:(id)options completion:(id /* block */)completion;
@end

#endif /* FBSWorkspaceService_h */