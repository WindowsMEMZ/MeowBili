//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebBookmarkInMemoryChangeFilter_Protocol_h
#define WebBookmarkInMemoryChangeFilter_Protocol_h
@import Foundation;

@protocol WebBookmarkInMemoryChangeFilter <NSObject>
@optional
/* instance methods */
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)set inFolder:(int)folder;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)set inFolder:(int)folder;
- (BOOL)shouldIncludeBookmarkAddedInMemory:(id)memory;
@end

#endif /* WebBookmarkInMemoryChangeFilter_Protocol_h */