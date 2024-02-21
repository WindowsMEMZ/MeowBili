//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICArchiveWriter_h
#define ICArchiveWriter_h
@import Foundation;

@class NSString, NSURL;

@interface ICArchiveWriter : NSObject {
  /* instance variables */
  struct archive * _archive;
}

@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSString *basePath;
@property (nonatomic) BOOL usesCompression;
@property (nonatomic) BOOL flatten;
@property (copy, nonatomic) NSString *flattenFolderName;

/* instance methods */
- (id)initWithDestinationURL:(id)url baseURL:(id)url;
- (void)dealloc;
- (BOOL)writeURLs:(id)urls error:(id *)error;
- (BOOL)finish:(id *)finish;
- (BOOL)open:(id *)open;
- (BOOL)writeURL:(id)url isDirectory:(BOOL)directory error:(id *)error;
@end

#endif /* ICArchiveWriter_h */