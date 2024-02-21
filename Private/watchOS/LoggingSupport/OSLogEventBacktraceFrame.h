//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogEventBacktraceFrame_h
#define OSLogEventBacktraceFrame_h
@import Foundation;

@class NSUUID;

@interface OSLogEventBacktraceFrame : NSObject {
  /* instance variables */
  unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSUUID *imageUUID;
@property (readonly, nonatomic) const char * imageUUIDBytes;
@property (readonly, nonatomic) unsigned long long imageOffset;

/* instance methods */
- (id)initWithUUIDBytes:(const char *)uuidbytes andOffset:(unsigned long long)offset;
- (void)dealloc;
@end

#endif /* OSLogEventBacktraceFrame_h */