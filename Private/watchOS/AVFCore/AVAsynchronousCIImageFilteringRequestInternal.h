//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAsynchronousCIImageFilteringRequestInternal_h
#define AVAsynchronousCIImageFilteringRequestInternal_h
@import Foundation;

#include "AVAsynchronousVideoCompositionRequest.h"

@class CIImage;

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject

@property (retain, nonatomic) AVAsynchronousVideoCompositionRequest *compositingRequest;
@property (copy, nonatomic) id /* block */ cancellationTest;
@property (copy, nonatomic) id /* block */ defaultCIContextProvider;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) CIImage *sourceCIImage;
@property (retain, nonatomic) struct __CVBuffer * sourcePBuf;

/* instance methods */
- (void)_willDeallocOrFinalize;
- (void)dealloc;
@end

#endif /* AVAsynchronousCIImageFilteringRequestInternal_h */