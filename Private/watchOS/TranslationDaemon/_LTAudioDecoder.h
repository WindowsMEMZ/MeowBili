//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTAudioDecoder_h
#define _LTAudioDecoder_h
@import Foundation;

@interface _LTAudioDecoder : NSObject {
  /* instance variables */
  struct OpaqueAudioConverter * _decoder;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _fromASBD;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _toASBD;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (struct OpaqueAudioConverter *)_audioDecoderFrom:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })from to:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })to;
- (id)decodeChunks:(id)chunks from:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })from to:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })to outError:(id *)error;
- (id)decodeTo48KHzPCMFromChunks:(id)chunks from:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })from outError:(id *)error;
- (id)beginChunkDecoderForStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })description;
- (void)endChunkDecoding;
- (id)decodeChunk:(id)chunk outError:(id *)error;
- (void)dealloc;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })get48khzPCMDescription;
- (id)extractAudioChunksFromOpusWithData:(id)data packetCount:(long long)count packetDescriptions:(id)descriptions;
@end

#endif /* _LTAudioDecoder_h */