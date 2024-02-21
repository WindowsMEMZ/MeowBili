//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef JPFileEntry_h
#define JPFileEntry_h
@import Foundation;

@class NSString;

@interface JPFileEntry : NSObject

@property (nonatomic) void * backing;
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc;
@property (readonly, nonatomic) NSString *pathname;

/* instance methods */
- (id)initWithBacking:(void *)backing releaseOnDealloc:(BOOL)dealloc;
- (BOOL)writeStream:(id)stream toDirectory:(id)directory error:(id *)error;
@end

#endif /* JPFileEntry_h */