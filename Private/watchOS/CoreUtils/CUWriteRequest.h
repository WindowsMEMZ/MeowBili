//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUWriteRequest_h
#define CUWriteRequest_h
@import Foundation;

@class NSArray, NSError;

@interface CUWriteRequest : NSObject {
  /* instance variables */
  struct iovec { void *iov_base; unsigned long long iov_len; } _iov[16];
  struct iovec { void * x0; unsigned long long x1; } * _iop;
  int _ion;
  unsigned long long _offset;
}

@property (readonly, nonatomic) struct iovec { void * x0; unsigned long long x1; } * bytesIOArray;
@property (nonatomic) unsigned long long bytesIOCount;
@property (readonly, nonatomic) unsigned long long bytesIOMaxCount;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL endOfData;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char * messageUUID;
@property (nonatomic) BOOL hasMessageUUID;

/* instance methods */
- (id)init;
@end

#endif /* CUWriteRequest_h */