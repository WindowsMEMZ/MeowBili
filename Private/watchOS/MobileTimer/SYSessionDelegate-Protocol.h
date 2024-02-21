//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef SYSessionDelegate_Protocol_h
#define SYSessionDelegate_Protocol_h
@import Foundation;

@protocol SYSessionDelegate <NSObject>
/* instance methods */
- (unsigned int)syncSession:(id)session enqueueChanges:(id /* block */)changes error:(id *)error;
- (void)syncSession:(id)session applyChanges:(id)changes completion:(id /* block */)completion;
- (void)syncSession:(id)session didEndWithError:(id)error;
- (BOOL)syncSession:(id)session resetDataStoreWithError:(id *)error;
@optional
/* instance methods */
- (void)resetDataStoreForSyncSession:(id)session completion:(id /* block */)completion;
- (BOOL)syncSession:(id)session rollbackChangesWithError:(id *)error;
- (BOOL)syncSession:(id)session restartChanges:(id *)changes;
- (void)syncSession:(id)session successfullySynced:(id)synced;
@end

#endif /* SYSessionDelegate_Protocol_h */