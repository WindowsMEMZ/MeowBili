//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDateRangeQueryServer_h
#define HDDateRangeQueryServer_h
@import Foundation;

#include "HDQueryServer.h"
#include "HDDataObserver-Protocol.h"
#include "HDDatabaseProtectedDataObserver-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface HDDateRangeQueryServer : HDQueryServer<HDDataObserver, HDDatabaseProtectedDataObserver> {
  /* instance variables */
  BOOL _resultsDirty;
  NSMutableDictionary *_dateIntervalsBySampleType;
  NSMutableSet *_sampleTypesToReFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)queryClass;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;
- (void)_queue_start;
- (void)samplesAdded:(id)added anchor:(id)anchor;
- (void)samplesOfTypesWereRemoved:(id)removed anchor:(id)anchor;
- (void)database:(id)database protectedDataDidBecomeAvailable:(BOOL)available;
@end

#endif /* HDDateRangeQueryServer_h */