//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFBluetoothDeviceInfoMutating_Protocol_h
#define AFBluetoothDeviceInfoMutating_Protocol_h
@import Foundation;

@protocol AFBluetoothDeviceInfoMutating <NSObject>
/* instance methods */
- (void)setAddress:(id)address;
- (void)setName:(id)name;
- (void)setDeviceUID:(id)uid;
- (void)setVendorID:(unsigned int)id;
- (void)setProductID:(unsigned int)id;
- (void)setIsAdvancedAppleAudioDevice:(BOOL)device;
- (void)setSupportsInEarDetection:(BOOL)detection;
- (void)setSupportsVoiceTrigger:(BOOL)trigger;
- (void)setSupportsJustSiri:(BOOL)siri;
- (void)setSupportsSpokenNotification:(BOOL)notification;
- (void)setSupportsListeningModeANC:(BOOL)anc;
- (void)setSupportsListeningModeTransparency:(BOOL)transparency;
- (void)setSupportsListeningModeAutomatic:(BOOL)automatic;
- (void)setSupportsConversationAwareness:(BOOL)awareness;
- (void)setSupportsPersonalVolume:(BOOL)volume;
- (void)setSupportsAnnounceCall:(BOOL)call;
@end

#endif /* AFBluetoothDeviceInfoMutating_Protocol_h */