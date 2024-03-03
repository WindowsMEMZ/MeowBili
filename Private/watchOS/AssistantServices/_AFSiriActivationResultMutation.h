//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSiriActivationResultMutation_h
#define _AFSiriActivationResultMutation_h
@import Foundation;

#include "AFSiriActivationResult.h"
#include "AFSiriActivationResultMutating-Protocol.h"

@class NSError, NSString;

@interface _AFSiriActivationResultMutation : NSObject<AFSiriActivationResultMutating> {
  /* instance variables */
  AFSiriActivationResult *_base;
  long long _actionType;
  NSError *_error;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasActionType; unsigned int x :1 hasError; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (long long)getActionType;
- (void)setActionType:(long long)type;
- (id)getError;
- (void)setError:(id)error;
@end

#endif /* _AFSiriActivationResultMutation_h */