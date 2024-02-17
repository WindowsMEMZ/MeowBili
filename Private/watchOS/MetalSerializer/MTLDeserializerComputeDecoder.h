//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLDeserializerComputeDecoder_h
#define MTLDeserializerComputeDecoder_h
@import Foundation;

#include "MTLComputeCommandEncoderSPI-Protocol.h"
#include "MTLDeserializerDecoder-Protocol.h"
#include "_MTLDeserializer.h"

@class NSString;
@protocol MTLComputePipelineState;

@interface MTLDeserializerComputeDecoder : NSObject<MTLDeserializerDecoder> {
  /* instance variables */
  _MTLDeserializer *deserializer;
  NSObject<MTLComputeCommandEncoderSPI> *computeEncoder;
  NSObject<MTLComputePipelineState> *_computePipeline;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDeserializer:(id)deserializer commandBuffer:(id)buffer;
- (void)dealloc;
- (void)readCommand:(struct { unsigned int x0; unsigned int x1; } *)command withIterator:(id)iterator expectedSize:(unsigned long long)size into:(void *)into;
- (void)readVariableCommand:(struct { unsigned int x0; unsigned int x1; } *)command withIterator:(id)iterator maxExpectedSize:(unsigned long long)size into:(void *)into;
- (void)decodeDispatchThreadgroups:(struct { unsigned int x0; unsigned int x1; } *)threadgroups withIterator:(id)iterator;
- (void)decodeDispatchThreadgroupsIndirect:(struct { unsigned int x0; unsigned int x1; } *)indirect withIterator:(id)iterator;
- (void)decodeDispatchThreads:(struct { unsigned int x0; unsigned int x1; } *)threads withIterator:(id)iterator;
- (void)decodeSetBuffers:(struct { unsigned int x0; unsigned int x1; } *)buffers withIterator:(id)iterator;
- (void)decodeSetSamplers:(struct { unsigned int x0; unsigned int x1; } *)samplers withIterator:(id)iterator;
- (void)decodeSetSamplersLODClamp:(struct { unsigned int x0; unsigned int x1; } *)lodclamp withIterator:(id)iterator;
- (void)decodeSetTextures:(struct { unsigned int x0; unsigned int x1; } *)textures withIterator:(id)iterator;
- (void)decodeUseResources:(struct { unsigned int x0; unsigned int x1; } *)resources withIterator:(id)iterator;
- (void)decodeUseHeaps:(struct { unsigned int x0; unsigned int x1; } *)heaps withIterator:(id)iterator;
- (void)decodeSetBufferOffset:(struct { unsigned int x0; unsigned int x1; } *)offset withIterator:(id)iterator;
- (void)decodeSetPipelineState:(struct { unsigned int x0; unsigned int x1; } *)state withIterator:(id)iterator;
- (void)decodeSetStageInRegion:(struct { unsigned int x0; unsigned int x1; } *)region withIterator:(id)iterator;
- (void)decodeSetStageInRegionIndirect:(struct { unsigned int x0; unsigned int x1; } *)indirect withIterator:(id)iterator;
- (void)decodeSetThreadgroupMemoryLength:(struct { unsigned int x0; unsigned int x1; } *)length withIterator:(id)iterator;
- (void)decodeUpdateFence:(struct { unsigned int x0; unsigned int x1; } *)fence withIterator:(id)iterator;
- (void)decodeWaitForFence:(struct { unsigned int x0; unsigned int x1; } *)fence withIterator:(id)iterator;
- (void)decodeBarrierScope:(struct { unsigned int x0; unsigned int x1; } *)scope withIterator:(id)iterator;
- (void)decodeBarrierResources:(struct { unsigned int x0; unsigned int x1; } *)resources withIterator:(id)iterator;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)header withIterator:(id)iterator;
- (void)fault;
@end

#endif /* MTLDeserializerComputeDecoder_h */