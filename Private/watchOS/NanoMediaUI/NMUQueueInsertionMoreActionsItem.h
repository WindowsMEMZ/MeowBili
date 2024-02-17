//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUQueueInsertionMoreActionsItem_h
#define NMUQueueInsertionMoreActionsItem_h
@import Foundation;

#include "MPRequestResponseControllerDelegate-Protocol.h"
#include "NMULegacyActionItemProvider-Protocol.h"

@class MPCPlayerPath, MPModelObject, MPRequestResponseController, NSString;

@interface NMUQueueInsertionMoreActionsItem : NSObject<MPRequestResponseControllerDelegate, NMULegacyActionItemProvider> {
  /* instance variables */
  unsigned long long _insertionPosition;
  MPModelObject *_modelObject;
  MPCPlayerPath *_playerPath;
  id /* block */ _invalidationBlock;
  id /* block */ _playbackIntentProviderBlock;
  MPRequestResponseController *_requestResponseController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requiredPropertiesForModelKind:(id)kind;

/* instance methods */
- (id)initWithInsertionPosition:(unsigned long long)position modelObject:(id)object playerPath:(id)path invalidationBlock:(id /* block */)block playbackIntentProviderBlock:(id /* block */)block;
- (void)controller:(id)controller defersResponseReplacement:(id /* block */)replacement;
- (id)legacyAction;
- (BOOL)_isVisible;
@end

#endif /* NMUQueueInsertionMoreActionsItem_h */