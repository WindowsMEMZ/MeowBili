//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVolumeMonitor_h
#define CSVolumeMonitor_h
@import Foundation;

#include "CSEventMonitor.h"

@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  float _musicVolumeLevel;
  float _alarmVolumeLevel;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_startMonitoringWithQueue:(id)queue;
- (void)dealloc;
- (float)musicVolume;
- (void)musicVolumeWithCompletion:(id /* block */)completion;
- (float)alarmVolume;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)category;
- (void)systemVolumeDidChange:(id)change;
- (void)systemControllerDied:(id)died;
- (void)startObservingSystemVolumes;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)_supportAVSystemVolumeFetch;
@end

#endif /* CSVolumeMonitor_h */