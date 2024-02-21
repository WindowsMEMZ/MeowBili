//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIMetalResourceManager_h
#define CLKUIMetalResourceManager_h
@import Foundation;

#include "CLKUIResourceManager.h"

@protocol MTLDevice, MTLTexture, OS_dispatch_queue;

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
  /* instance variables */
  NSObject<MTLDevice> *_device;
  NSObject<MTLTexture> *_nilTexture2D;
  NSObject<MTLTexture> *_nilTextureCube;
  NSObject<OS_dispatch_queue> *_textureStreamingQueue;
}

/* class methods */
+ (id)sharedMetalInstance;
+ (id)sharedDevice;
+ (id)sharedCommandQueue;
+ (id)sharedNilTexture2D;
+ (id)sharedNilTextureCube;
+ (void)addCompletedErrorCheckToCommandBuffer:(id)buffer forCase:(id)case;
+ (void)setSynchronousTextureStreamingEnabled:(BOOL)enabled;
+ (BOOL)synchronousTextureStreamingEnabled;
+ (id)textureStreamingQueue;

/* instance methods */
- (id)init;
- (id)nullAtlas2D;
- (id)nullAtlasCube;
- (id)_newAtlasForUuid:(id)uuid nullTexture:(id)texture streaming:(BOOL)streaming;
- (id)_newAtlasForUuid:(id)uuid nilTexture:(id)texture streaming:(BOOL)streaming;
- (void)_purgeAtlases:(id)atlases;
- (void)_updateTextureStreamingForAtlas:(id)atlas;
@end

#endif /* CLKUIMetalResourceManager_h */