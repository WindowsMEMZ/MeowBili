//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFCachingArchiveIndex_Protocol_h
#define PFCachingArchiveIndex_Protocol_h
@import Foundation;

#include "PFCachingArchiveIndex-Protocol.h"

@class NSString;

@protocol PFCachingArchiveIndex <NSObject>
/* instance methods */
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:(const char *)file fileSize:(long long)size;
- (id)indexName;
- (const char *)indexLabel;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser * x0; } x0; })archiveLineParserForIndexPath:(id)path;
@optional
/* instance methods */
- (id)dataArchivePath;
- (BOOL)indexSupported;
@end

#endif /* PFCachingArchiveIndex_Protocol_h */