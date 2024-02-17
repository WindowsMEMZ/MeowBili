//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef SAFenceManager_h
#define SAFenceManager_h
@import Foundation;

#include "SAFenceManagerRequestProtocol-Protocol.h"
#include "SAFenceManagerServiceProtocol-Protocol.h"

@class NSHashTable, NSMutableDictionary;

@interface SAFenceManager : NSObject<SAFenceManagerServiceProtocol, SAFenceManagerRequestProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDsByUnsafeRegionIdentifier;
@property (retain) NSMutableDictionary *deviceUUIDsBySafeLocation;
@property (retain, nonatomic) NSMutableDictionary *safeLocationsByRegionIdentifier;
@property (retain, nonatomic) NSMutableDictionary *statesByRegionIdentifier;
@property (retain, nonatomic) NSMutableDictionary *regionsByRegionIdentifier;

/* instance methods */
- (id)init;
- (unsigned long long)getSafeLocationCount;
- (unsigned long long)getUnsafeLocationCount;
- (id)getRegionForSafeLocation:(id)location;
- (BOOL)startMonitorSafeLocation:(id)location forDevice:(id)device;
- (BOOL)stopMonitorSafeLocation:(id)location forDevice:(id)device;
- (BOOL)startMonitorUnsafeLocationExit:(id)exit forDevice:(id)device;
- (BOOL)stopMonitorUnsafeLocationExit:(id)exit forDevice:(id)device;
- (void)removeLocationsForDeviceUuid:(id)uuid;
- (void)ingestTAEvent:(id)taevent;
- (void)handleFenceEvent:(unsigned long long)event forRegion:(id)region;
- (BOOL)isSafeLocation:(id)location;
- (void)notifyState:(unsigned long long)state forSafeLocationRegion:(id)region;
- (void)notifyState:(unsigned long long)state forUnsafeLocationRegion:(id)region;
- (void)addClient:(id)client;
- (void)removeClient:(id)client;
@end

#endif /* SAFenceManager_h */