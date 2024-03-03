//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DVTStreamManager_h
#define DVTStreamManager_h
@import Foundation;

@protocol DVTInputStream><DVTOutputStream, OS_dispatch_queue;

@interface DVTStreamManager : NSObject {
  /* instance variables */
  NSObject<DVTInputStream><DVTOutputStream> *_stream;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long currentStreamSize;

/* instance methods */
- (id)initWithStream:(id)stream;
- (long long)commit:(const void *)commit bufferSize:(unsigned long long)size error:(id *)error destructor:(id /* block */)destructor;
- (long long)commit:(id)commit error:(id *)error;
- (id)export;
@end

#endif /* DVTStreamManager_h */