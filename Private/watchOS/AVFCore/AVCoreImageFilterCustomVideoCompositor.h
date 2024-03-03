//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVCoreImageFilterCustomVideoCompositor_h
#define AVCoreImageFilterCustomVideoCompositor_h
@import Foundation;

#include "AVVideoCompositing-Protocol.h"

@class CIContext, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject<AVVideoCompositing> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;
  CIContext *_defaultCIContext;
}

@property BOOL shouldCancelAllRequests;
@property (readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (void)renderContextChanged:(id)changed;
- (id)defaultCIContext;
- (void)startVideoCompositionRequest:(id)request;
- (void)cancelAllPendingVideoCompositionRequests;
@end

#endif /* AVCoreImageFilterCustomVideoCompositor_h */