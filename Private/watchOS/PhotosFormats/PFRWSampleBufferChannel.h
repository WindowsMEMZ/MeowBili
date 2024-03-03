//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFRWSampleBufferChannel_h
#define PFRWSampleBufferChannel_h
@import Foundation;

@class AVAssetReaderOutput, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue;

@interface PFRWSampleBufferChannel : NSObject {
  /* instance variables */
  id /* block */ completionHandler;
  NSObject<OS_dispatch_queue> *serializationQueue;
}

@property (nonatomic) BOOL useAdaptor;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (retain, nonatomic) AVAssetReaderOutput *assetReaderOutput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor;

/* instance methods */
- (id)init;
- (id)initWithAssetReaderOutput:(id)output assetWriterInput:(id)input useAdaptor:(BOOL)adaptor;
- (void)callCompletionHandlerIfNecessary;
- (void)startWithDelegate:(id)delegate completionHandler:(id /* block */)handler;
- (void)cancel;
@end

#endif /* PFRWSampleBufferChannel_h */