//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPTPAssetBuilder_h
#define PLPTPAssetBuilder_h
@import Foundation;

#include "PLFileManager-Protocol.h"
#include "PLMutablePTPAsset.h"
#include "PLPTPTransferableAsset-Protocol.h"
#include "PLSpatialOverCaptureInformation.h"

@class NSArray, NSMutableArray, NSString;
@protocol PLPTPConversionSupport;

@interface PLPTPAssetBuilder : NSObject {
  /* instance variables */
  NSObject<PLPTPConversionSupport> *_conversionSupport;
  NSObject<PLPTPTransferableAsset> *_asset;
  NSObject<PLFileManager> *_fileManager;
  NSString *_filenameForPTP;
  PLMutablePTPAsset *_currentPtpAsset;
  PLMutablePTPAsset *_commonPtpAsset;
  PLMutablePTPAsset *_originalPtpAsset;
  NSArray *_sidecarPtpAssets;
  PLMutablePTPAsset *_diagnosticPtpAsset;
  PLMutablePTPAsset *_adjustmentPtpAsset;
  PLMutablePTPAsset *_fullSizeRenderImagePtpAsset;
  PLMutablePTPAsset *_fullSizeRenderVideoPtpAsset;
  PLMutablePTPAsset *_spatialOverCaptureImagePtpAsset;
  PLMutablePTPAsset *_spatialOverCaptureVideoComplementPtpAsset;
  PLMutablePTPAsset *_originalAdjustmentPtpAsset;
  PLSpatialOverCaptureInformation *_cachedSpatialOverCaptureInformation;
  PLMutablePTPAsset *_penultimateImagePtpAsset;
  PLMutablePTPAsset *_penultimateVideoPtpAsset;
  NSMutableArray *_convertedAssets;
  BOOL _irisSidecarRequiresFormatConversion;
}

/* class methods */
+ (id)pictureTransferProtocolAssetsForAsset:(id)asset withConversionSupport:(id)support;
+ (BOOL)_shouldIncludeDiagnosticFile;

/* instance methods */
- (id)initWithAsset:(id)asset conversionSupport:(id)support;
- (id)initWithAsset:(id)asset conversionSupport:(id)support fileManager:(id)manager;
- (id)pictureTransferProtocolAssets;
- (void)updateSiblingAssetTypesOnMutablePTPAssets:(id)ptpassets;
- (void)_buildCommonAsset;
- (BOOL)_buildOriginalAsset;
- (void)updateAssetForFormatConversion:(id)conversion sourceHints:(id)hints forceLegacyConversion:(BOOL)conversion assetTypeLabel:(id)label;
- (void)_updateAssetForTranscodeChoice:(id)choice withConversionResult:(id)result;
- (void)_updateAsset:(id)asset withConversionResult:(id)result;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (BOOL)_suppressPtpInfo;
- (BOOL)_buildDirectoryPathAndFilename;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildFingerprint;
- (void)_buildOriginatingAssetID;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildImageDimensions;
- (void)_buildThumbnailDimensions;
- (void)_buildOrientation;
- (void)_buildPhotoKey;
- (void)_buildModificationAndCreationDate;
- (void)_durationOfTheAsset;
- (void)_buildGPSInformation;
- (void)_buildGroupUUID;
- (BOOL)_hasIrisSidecarFile;
- (void)_buildBurst;
- (void)_buildSlowMo;
- (void)_buildTimelapse;
- (void)_buildRelatedUUID;
- (id)spatialOverCaptureInformation;
- (void)_buildSpatialOverCaptureGroupIdentifier;
- (void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;
- (void)_buildDeletedFlag;
- (void)_buildSidecarAssets;
- (id)_assetForSidecar:(id)sidecar sidecarPath:(id)path irisSidecarPath:(id)path;
- (void)_buildDiagnosticAsset;
- (void)_buildAdjustmentAsset;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildFullSizeRenderVideoAsset;
- (BOOL)hasSpatialOverCaptureContent;
- (void)buildSpatialOverCaptureContentPtpAsset;
- (void)buildSpatialOverCaptureVideoComplementPtpAsset;
- (void)buildOriginalAdjustmentPtpAsset;
- (void)buildPenultimateImagePtpAsset;
- (void)buildPenultimateVideoPtpAsset;
@end

#endif /* PLPTPAssetBuilder_h */