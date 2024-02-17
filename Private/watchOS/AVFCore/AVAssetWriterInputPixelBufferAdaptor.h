//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetWriterInputPixelBufferAdaptor_h
#define AVAssetWriterInputPixelBufferAdaptor_h
@import Foundation;

#include "AVAssetWriterInput.h"
#include "AVAssetWriterInputPixelBufferAdaptorInternal.h"
#include "AVKeyPathDependencyHost-Protocol.h"
#include "AVWeakObservable-Protocol.h"

@class NSDictionary, NSString;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject<AVWeakObservable, AVKeyPathDependencyHost> {
  /* instance variables */
  AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)input sourcePixelBufferAttributes:(id)attributes;

/* instance methods */
- (id)init;
- (id)initWithAssetWriterInput:(id)input sourcePixelBufferAttributes:(id)attributes;
- (void)addCallbackToCancelDuringDeallocation:(id)deallocation;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)registry;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)buffer withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* AVAssetWriterInputPixelBufferAdaptor_h */