//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKVideoListing_h
#define NTKVideoListing_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NTKAVListing-Protocol.h"

@class CLKDevice, CLKVideo, NSString, UIColor;

@interface NTKVideoListing : NSObject<NSCopying, NTKAVListing> {
  /* instance variables */
  CLKDevice *_device;
  NSString *_name;
  NSString *_videoName;
  NSString *_transitionImageName;
  unsigned long long _tags;
}

@property (readonly, nonatomic) UIColor *overlayColor;
@property (readonly, nonatomic) unsigned long long theme;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) long long clip;
@property (readonly, nonatomic) CLKVideo *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForDevice:(id)device withName:(id)name videoName:(id)name transitionImageName:(id)name overlayColor:(id)color theme:(unsigned long long)theme variant:(long long)variant clip:(long long)clip tags:(unsigned long long)tags;
- (void)_setHasAssets;
- (BOOL)snapshotDiffers:(id)differs;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)hasTag:(unsigned long long)tag;
- (void)discardAssets;
@end

#endif /* NTKVideoListing_h */