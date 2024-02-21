//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCPlayerShuffleCommand_h
#define _MPCPlayerShuffleCommand_h
@import Foundation;

#include "_MPCPlayerCommand.h"
#include "MPCPlayerShuffleCommand-Protocol.h"

@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand<MPCPlayerShuffleCommand>

@property (nonatomic) long long currentShuffleType;
@property (retain, nonatomic) NSArray *supportedShuffleTypes;
@property (nonatomic) BOOL supportsChangeShuffle;
@property (nonatomic) BOOL supportsAdvanceShuffle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)setShuffleType:(long long)type;
- (id)advance;
@end

#endif /* _MPCPlayerShuffleCommand_h */