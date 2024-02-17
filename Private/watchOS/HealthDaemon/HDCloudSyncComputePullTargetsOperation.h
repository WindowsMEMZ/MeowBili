//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncComputePullTargetsOperation_h
#define HDCloudSyncComputePullTargetsOperation_h
@import Foundation;

#include "HDCloudSyncSynchronousOperation.h"
#include "HDSyncIdentity.h"

@interface HDCloudSyncComputePullTargetsOperation : HDCloudSyncSynchronousOperation {
  /* instance variables */
  HDSyncIdentity *_currentSyncIdentity;
  BOOL _hasUpgradedToSyncIdentity;
}

/* class methods */
+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldLogAtOperationEnd;
+ (id)operationTagDependencies;
+ (id)finishedOperationTags;

/* instance methods */
- (BOOL)performWithError:(id *)error;
@end

#endif /* HDCloudSyncComputePullTargetsOperation_h */