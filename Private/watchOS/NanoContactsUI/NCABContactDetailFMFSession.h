//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactDetailFMFSession_h
#define NCABContactDetailFMFSession_h
@import Foundation;

#include "FMFSessionDelegate-Protocol.h"

@class CLLocation, FMFSession, NSData, NSDictionary, NSMapTable, NSMutableDictionary, NSString;

@interface NCABContactDetailFMFSession : NSObject<FMFSessionDelegate> {
  /* instance variables */
  NSMapTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  NSDictionary *_contactIdentifiers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contactIdentifiersLock;
  NSDictionary *_followedHandles;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _followedHandlesLock;
  NSMutableDictionary *_locationCache;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
  FMFSession *_fmfSession;
}

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSData *gridImageData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mapSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)sharedInstance;
+ (id)locationDot;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)observer forContact:(id)contact;
- (void)removeObserver:(id)observer;
- (BOOL)isFollowingContact:(id)contact;
- (id)locationForContact:(id)contact;
- (id)mapImageDataForContact:(id)contact;
- (void)didReceiveLocation:(id)location;
- (void)didStartAbilityToGetLocationForHandle:(id)handle;
- (void)didStopAbilityToGetLocationForHandle:(id)handle;
- (BOOL)_shouldCreateFMFSession;
- (BOOL)_processHasRequiredEntitlements;
- (void)_fetchFollowedHandles;
- (void)_updateFollowedHandles:(id)handles;
- (void)_setShouldTrackContact:(BOOL)contact withIdentifier:(id)identifier;
- (void)_updateObserversWithBlock:(id /* block */)block;
- (void)_generateMapGridImage;
- (void)_generateMapImageForLocation:(id)location;
- (void)_handleMapImageRequestResultWithData:(id)data forLocation:(id)location;
- (void)_contactStoreDidChange:(id)change;
@end

#endif /* NCABContactDetailFMFSession_h */