//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIWordSearchOperationPerformMaintenance_h
#define TIWordSearchOperationPerformMaintenance_h
@import Foundation;

#include "TIWordSearchOperation.h"
#include "TIMecabraWrapper.h"

@interface TIWordSearchOperationPerformMaintenance : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

/* instance methods */
- (id)initWithMecabraWrapper:(id)wrapper;
- (void)perform;
@end

#endif /* TIWordSearchOperationPerformMaintenance_h */