//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef NSFileManager_CPLAdditions_h
#define NSFileManager_CPLAdditions_h
@import Foundation;

@interface NSFileManager (CPLAdditions)
/* instance methods */
- (BOOL)cplCopyItemAtURL:(id)url toURL:(id)url error:(id *)error;
- (BOOL)cplMoveItemAtURL:(id)url toURL:(id)url error:(id *)error;
- (BOOL)cplIsFileExistsError:(id)error;
- (BOOL)cplIsFileDoesNotExistError:(id)error;
- (BOOL)cplFileExistsAtURL:(id)url;
@end

#endif /* NSFileManager_CPLAdditions_h */