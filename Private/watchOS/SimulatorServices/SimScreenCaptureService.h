//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.0.0.0.0
//
#ifndef SimScreenCaptureService_h
#define SimScreenCaptureService_h
@import Foundation;

@protocol OS_xpc_object;

@interface SimScreenCaptureService : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

/* class methods */
+ (id)sharedService;
+ (id)avVideoCodecTypeFromSimScreenCaptureCodec:(unsigned int)codec;
+ (unsigned int)simScreenCaptureCodecAVVideoCodecType:(id)type;

/* instance methods */
- (id)init;
- (id)startScreenCaptureForTarget:(id)target usingCodec:(unsigned int)codec includeMask:(BOOL)mask writingToURL:(id)url error:(id *)error;
- (id)startScreenCaptureForTarget:(id)target assetWriterOutputSettings:(id)settings includeMask:(BOOL)mask writingToURL:(id)url error:(id *)error;
@end

#endif /* SimScreenCaptureService_h */