//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef SBWiFiManager_h
#define SBWiFiManager_h
@import Foundation;

@class NSRecursiveLock, NSString, NWSystemPathMonitor;
@protocol OS_dispatch_source;

@interface SBWiFiManager : NSObject {
  /* instance variables */
  NSRecursiveLock *_lock;
  struct __CFRunLoop * _callbackRunLoop;
  void * _manager;
  void * _device;
  NSString *_deviceInterfaceName;
  BOOL _mainThread_devicePresent;
  void * _currentNetwork;
  void * _previousNetwork;
  BOOL _currentNetworkHasBeenSet;
  BOOL _currentNetworkIsIOSHotspot;
  BOOL _currentNetworkIsIOSHotspotHasBeenSet;
  BOOL _powered;
  BOOL _poweredHasBeenSet;
  int _mainThread_signalStrengthBars;
  int _mainThread_signalStrengthRSSI;
  BOOL _mainThread_signalStrengthHasBeenSet;
  NWSystemPathMonitor *_systemPathMonitor;
  NSObject<OS_dispatch_source> *_primaryInterfaceUpdateTimeoutSource;
  void * _primaryInterface;
  BOOL _primaryInterfaceHasBeenSet;
  BOOL _isPrimaryInterface;
  BOOL _isPrimaryInterfaceChanging;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_updateDevicePresence;
- (void)_lock_setWiFiDevice:(void *)device;
- (void *)_lock_manager;
- (void)_lock_spawnManagerCallbackThread;
- (void)_runManagerCallbackThread;
- (void)_updateWiFiState;
- (void)_powerStateDidChange;
- (void)_linkDidChange;
- (void)_updateCurrentNetwork;
- (BOOL)isAssociated;
- (BOOL)isAssociatedToIOSHotspot;
- (BOOL)_cachedIsAssociated;
- (id)currentNetworkName;
- (BOOL)isPowered;
- (void)setPowered:(BOOL)powered;
- (BOOL)wiFiEnabled;
- (void)setWiFiEnabled:(BOOL)enabled;
- (int)signalStrengthBars;
- (int)signalStrengthRSSI;
- (void)_updateSignalStrengthFromRawRSSI:(int)rssi andScaledRSSI:(float)rssi;
- (void)_updateSignalStrength;
- (BOOL)isPrimaryInterface;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (id)_wifiInterface;
- (void)_primaryInterfaceChanged:(BOOL)changed;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* SBWiFiManager_h */