//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSMigrationAppBlockOperation_h
#define CSLSMigrationAppBlockOperation_h
@import Foundation;

#include "NSOperation.h"

@interface CSLSMigrationAppBlockOperation : NSOperation {
  /* instance variables */
  BOOL _executing;
  BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)complete;
@end

#endif /* CSLSMigrationAppBlockOperation_h */