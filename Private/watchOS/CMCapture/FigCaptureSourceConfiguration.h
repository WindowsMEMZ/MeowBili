//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureSourceConfiguration_h
#define FigCaptureSourceConfiguration_h
@import Foundation;

#include "FigCaptureSourceDepthDataFormat.h"
#include "FigCaptureSourceVideoFormat.h"
#include "FigXPCCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject<FigXPCCoding, NSCopying> {
  /* instance variables */
  NSDictionary *_sourceAttributes;
  BOOL _smartCameraEnabled;
}

@property (copy, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource * source;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) float maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride;
@property (nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource;
@property (nonatomic) float videoZoomFactor;
@property (retain, nonatomic) NSArray *fallbackPrimaryConstituentDeviceTypes;
@property (nonatomic) float videoZoomRampAcceleration;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (readonly, nonatomic) int sourceDeviceType;
@property (nonatomic) int imageControlMode;
@property (nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDurationClientOverride;
@property (nonatomic) BOOL sensorHDREnabled;
@property (nonatomic) BOOL highlightRecoveryEnabled;
@property (nonatomic) int colorSpace;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) float depthDataMaxFrameRate;
@property (retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (nonatomic) BOOL lowLightVideoCaptureEnabled;
@property (nonatomic) BOOL variableFrameRateVideoCaptureEnabled;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) BOOL spatialOverCaptureEnabled;
@property (nonatomic) BOOL nonDestructiveCropEnabled;
@property (nonatomic) struct CGSize { double x0; double x1; } normalizedNonDestructiveCropSize;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic) BOOL cinematicFramingSupported;
@property (nonatomic) int cinematicFramingControlMode;
@property (nonatomic) BOOL backgroundBlurSupported;
@property (nonatomic) BOOL backgroundBlurEnabled;
@property (nonatomic) BOOL studioLightingSupported;
@property (nonatomic) BOOL studioLightingEnabled;
@property (nonatomic) BOOL reactionEffectsSupported;
@property (nonatomic) BOOL reactionEffectsEnabled;
@property (nonatomic) int faceDrivenAEAFMode;
@property (nonatomic) BOOL faceDrivenAEAFEnabledByDefault;
@property (nonatomic) BOOL deskCamEnabled;
@property (nonatomic) struct { int x0; int x1; } deskCamOutputDimensions;
@property (nonatomic) BOOL manualCinematicFramingEnabled;
@property (nonatomic) float manualFramingPanningAngleX;
@property (nonatomic) float manualFramingPanningAngleY;
@property (nonatomic) double manualFramingDefaultZoomFactor;
@property (nonatomic) BOOL gazeSelectionEnabled;
@property (nonatomic) BOOL dockedTrackingEnabled;
@property (nonatomic) BOOL clientExpectsCameraMountedInLandscapeOrientation;
@property (nonatomic) BOOL clientOSVersionSupportsDecoupledIO;
@property (retain, nonatomic) NSString *clientAudioClockDeviceUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)stringForSourceType:(int)type;
+ (int)sourceTypeForString:(id)string;
+ (id)stringForSourcePosition:(int)position;
+ (id)stringForSourceDeviceType:(int)type;

/* instance methods */
- (id)initWithSource:(struct OpaqueFigCaptureSource *)source;
- (id)initWithSourceType:(int)type;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isCinematicFramingSupported;
- (BOOL)isBackgroundBlurSupported;
- (BOOL)isStudioLightingSupported;
- (BOOL)isDockedTrackingEnabled;
@end

#endif /* FigCaptureSourceConfiguration_h */