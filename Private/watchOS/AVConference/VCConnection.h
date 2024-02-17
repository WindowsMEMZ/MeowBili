//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCConnection_h
#define VCConnection_h
@import Foundation;

@class NSDictionary;

@interface VCConnection : NSObject {
  /* instance variables */
  unsigned short _linkFlags;
  unsigned short _remoteLinkFlags;
  unsigned long long _constantConnectionOverhead;
  unsigned char _connectionType;
  int _priority;
  struct tagVCConnectionProtocolRealtimeVTable { undefined *matchesSourceDestinationInfo; undefined *sourceDestinationInfo; undefined *isRelay; undefined *equal; undefined *isLocalOnCellular; undefined *isRemoteOnCellular; undefined *isIPv6; undefined *localCellTech; undefined *setLocalCellTech; undefined *remoteCellTech; undefined *setRemoteCellTech; undefined *copyDescription; undefined *isLocalOnWiFiOrWired; undefined *isRemoteOnWiFiOrWired; undefined *isLocalOnWiFi; undefined *isRemoteOnWiFi; undefined *isLocalOnWired; undefined *isRemoteOnWired; undefined *isOnSameInterfacesWithConnection; undefined *isEndToEndLink; undefined *connectionID; undefined *isLocalExpensive; undefined *isLocalConstrained; undefined *isRemoteExpensive; undefined *isRemoteConstrained; undefined *reportingIPVersion; undefined *reportingQRServerConfig; undefined *isHopByHopEncryptionSupported; } _vTable;
  NSDictionary *_connectionSelectionPriorities;
}

/* instance methods */
- (void)setUpVTable;
- (id)init;
- (void)dealloc;
- (void)setLinkFlags:(unsigned short)flags;
- (void)setRemoteLinkFlags:(unsigned short)flags;
- (long long)compare:(id)compare isPrimary:(BOOL)primary selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)policy;
- (long long)compareInterfacePriority:(id)priority isPrimary:(BOOL)primary preferWired:(BOOL)wired;
- (long long)compareConnectionTypePriority:(id)priority selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)policy;
- (long long)compareVpnPriority:(id)priority selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)policy;
- (long long)compareE2EPriority:(id)epriority selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)policy;
- (long long)compareIpVersionPriority:(id)priority selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)policy;
- (id)getConnectionSelectionPriorities;
@end

#endif /* VCConnection_h */