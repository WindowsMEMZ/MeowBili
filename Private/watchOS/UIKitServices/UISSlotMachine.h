//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISSlotMachine_h
#define UISSlotMachine_h
@import Foundation;

#include "UISSlotMachineProtocol-Protocol.h"

@class CAContext, NSMapTable, NSMutableDictionary, NSSet, NSString;
@protocol UISSlotDrawer;

@interface UISSlotMachine : NSObject<UISSlotMachineProtocol> {
  /* instance variables */
  NSObject<UISSlotDrawer> *_slotDrawer;
  unsigned long long _options;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedContentsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _layerContextLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _LRUTagsByClassLock;
  NSMutableDictionary *_cachedContents;
  CAContext *_layerContext;
  NSMapTable *_LRUTagsByClass;
}

@property (readonly, nonatomic) NSSet *allTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allowedLocalizations;

/* instance methods */
- (id)initWithSlotDrawer:(id)drawer options:(unsigned long long)options;
- (void)getRemoteContentForLayerContextWithId:(unsigned long long)id style:(id)style tag:(id)tag reply:(id /* block */)reply;
- (id)remoteContentForLayerContextWithId:(unsigned long long)id style:(id)style tag:(id)tag;
- (void)removeContentForStyle:(id)style tag:(id)tag;
- (void)removeContentsForTag:(id)tag;
@end

#endif /* UISSlotMachine_h */