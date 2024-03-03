//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTDeviceInfoServiceAuthorizedAPI_Protocol_h
#define DTDeviceInfoServiceAuthorizedAPI_Protocol_h
@import Foundation;

@protocol DTDeviceInfoServiceAuthorizedAPI <DTXAllowedRPC>
/* instance methods */
- (id)machTimeInfo;
- (id)runningProcesses;
- (id)nameForUID:(id)uid;
- (id)nameForGID:(id)gid;
- (id)execnameForPid:(id)pid;
- (id)isRunningPid:(id)pid;
- (id)runningProcessWithPid:(id)pid;
- (id)machKernelName;
- (id)deepSymbolOwnerSignatureForPid:(id)pid uuid:(id)uuid;
- (id)symbolicatorSignatureForPid:(id)pid trackingSelector:(id)selector;
- (id)createSignatureFromLibraryUUID:(id)uuid sharedCacheUUID:(id)uuid andPath:(id)path;
- (void)unregisterSignatureTrackingForPid:(id)pid;
- (void)enableExpiredPidTracking:(id)tracking;
- (id)symbolicatorSignaturesForExpiredPids;
- (id)directoryListingForPath:(id)path;
- (id)iconDescriptionFileForAppPath:(id)path;
- (id)hardwareInformation;
- (id)networkInformation;
- (id)traceCodesFile;
- (id)kpepDatabase;
- (id)sysmonProcessAttributes;
- (id)sysmonSystemAttributes;
- (id)sysmonCoalitionAttributes;
@end

#endif /* DTDeviceInfoServiceAuthorizedAPI_Protocol_h */