//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXPromisedStreamingZipTransfer_h
#define IXPromisedStreamingZipTransfer_h
@import Foundation;

#include "IXOwnedDataPromise.h"
#include "IXPromisedStreamingZipTransferSeed.h"
#include "NSSecureCoding-Protocol.h"
#include "SZExtractor-Protocol.h"
#include "SZExtractorDelegate-Protocol.h"

@class NSString, SZExtractor;

@interface IXPromisedStreamingZipTransfer : IXOwnedDataPromise<SZExtractorDelegate, NSSecureCoding, SZExtractor>

@property (retain, @dynamic, nonatomic) IXPromisedStreamingZipTransferSeed *seed;
@property (@dynamic, nonatomic) BOOL complete;
@property (@dynamic, nonatomic) unsigned long long archiveBytesConsumed;
@property (retain, nonatomic) SZExtractor *extractor;
@property (nonatomic) BOOL needsConsume;
@property (readonly, nonatomic) BOOL useProgressFromSZExtractor;
@property (readonly, @dynamic, nonatomic) BOOL doesConsumeExtractedData;
@property (weak, nonatomic) NSObject<SZExtractorDelegate> *extractorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithName:(id)name client:(unsigned long long)client streamingZipOptions:(id)options archiveSize:(unsigned long long)size diskSpaceNeeded:(unsigned long long)needed;
- (void)prepareForExtraction:(id /* block */)extraction;
- (void)prepareForExtractionToPath:(id)path completionBlock:(id /* block */)block;
- (void)_prepareForExtractionToPath:(id)path completionBlock:(id /* block */)block;
- (void)supplyBytes:(id)bytes withCompletionBlock:(id /* block */)block;
- (void)suspendStreamWithCompletionBlock:(id /* block */)block;
- (void)finishStreamWithCompletionBlock:(id /* block */)block;
- (void)terminateStreamWithError:(id)error completionBlock:(id /* block */)block;
- (void)resetWithCompletion:(id /* block */)completion;
- (BOOL)consumeExtractedDataIfNeeded;
- (void)addArchiveBytesConsumed:(unsigned long long)consumed;
- (void)setExtractionProgress:(double)progress;
- (void)extractionCompleteAtArchivePath:(id)path;
- (void)extractionEnteredPassThroughMode;
- (id)initWithSeed:(id)seed;
- (Class)seedClass;
@end

#endif /* IXPromisedStreamingZipTransfer_h */