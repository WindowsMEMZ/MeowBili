//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFVideoMetadataVideoTrackFormatInfo_h
#define PFVideoMetadataVideoTrackFormatInfo_h
@import Foundation;

@class AVAsset, NSString;

@interface PFVideoMetadataVideoTrackFormatInfo : NSObject {
  /* instance variables */
  AVAsset *_asset;
}

@property (readonly) unsigned int codec;
@property (readonly) BOOL isHighDynamicRange;
@property (readonly) BOOL isHDR10;
@property (readonly) BOOL isProResLOG;
@property (readonly) BOOL hasDolby8_4Metadata;
@property (readonly) BOOL isSpatial;
@property (readonly) BOOL hasHEVCProfileTierLevelInfo;
@property (readonly) unsigned char hevcProfile;
@property (readonly) unsigned char hevcTier;
@property (readonly) unsigned char hevcLevel;
@property (readonly) long long bitsPerComponent;
@property (readonly) NSString *colorPrimaries;
@property (readonly) NSString *transferFunction;
@property (readonly) struct CGSize { double x0; double x1; } displaySize;
@property (readonly) NSString *formatDebugDescription;

/* class methods */
+ (id)infoForFirstVideoTrackOfAsset:(id)asset;
+ (short)_getProfile:(char *)profile tier:(char *)tier level:(char *)level fromFormatDescriptionExtensions:(id)extensions;
+ (BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(struct opaqueCMFormatDescription *)metadata;

/* instance methods */
- (id)initWithFirstVideoTrackOfAsset:(id)asset;
- (void)_checkFormat;
- (id)hevcProfileTierLevelDescription;
@end

#endif /* PFVideoMetadataVideoTrackFormatInfo_h */