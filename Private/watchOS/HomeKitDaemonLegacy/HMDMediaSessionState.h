//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaSessionState_h
#define HMDMediaSessionState_h
@import Foundation;

#include "HMFObject.h"
#include "HMFDumpState-Protocol.h"

@class NSNumber, NSString;

@interface HMDMediaSessionState : HMFObject<HMFDumpState> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) long long playbackState;
@property (nonatomic) long long shuffleState;
@property (nonatomic) long long repeatState;
@property (copy) NSNumber *volume;
@property (copy) NSNumber *muted;
@property (copy) NSString *mediaUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSessionIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (id)dumpState;
@end

#endif /* HMDMediaSessionState_h */