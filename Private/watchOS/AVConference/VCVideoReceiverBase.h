//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoReceiverBase_h
#define VCVideoReceiverBase_h
@import Foundation;

#include "VCConnectionChangedHandler-Protocol.h"
#include "VCMediaStreamSyncDestination-Protocol.h"
#include "VCMediaStreamSyncSource-Protocol.h"
#include "VCMediaStreamSynchronizer.h"
#include "VCVideoReceiverDelegate-Protocol.h"

@class NSString;

@interface VCVideoReceiverBase : NSObject<VCMediaStreamSyncDestination, VCConnectionChangedHandler> {
  /* instance variables */
  unsigned int _rtpTimestampRate;
  VCMediaStreamSynchronizer *_mediaStreamSynchronizer;
}

@property int remoteVideoOrientation;
@property (nonatomic) NSObject<VCVideoReceiverDelegate> *delegate;
@property (nonatomic) struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { undefined * x0; undefined * x1; } delegateFunctions;
@property (nonatomic) NSObject<VCMediaStreamSyncSource> *syncSource;
@property double roundTripTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (readonly) float lastLastVideoStallDuration;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate delegateFunctions:(const struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { undefined * x0; undefined * x1; } *)functions;
- (void)dealloc;
- (void)setEnableCVO:(BOOL)cvo cvoExtensionID:(unsigned long long)id;
- (void)setEnableRateAdaptation:(BOOL)adaptation maxBitrate:(unsigned int)bitrate minBitrate:(unsigned int)bitrate adaptationInterval:(double)interval;
- (void)startVideo;
- (void)stopVideo;
- (void)pauseVideo;
- (void)rtcpSendIntervalElapsed;
- (BOOL)startSynchronization:(id)synchronization;
- (void)stopSynchronization;
- (void)setSynchronizer:(id)synchronizer;
- (void)updateSourcePlayoutTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)timestamp;
- (void)collectChannelMetrics:(struct { unsigned int x0; unsigned int x1[5] unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)metrics interval:(float)interval;
- (void)setTargetStreamID:(unsigned short)id;
- (void)setShouldEnableMLEnhance:(BOOL)mlenhance streamID:(unsigned short)id;
- (void)handleActiveConnectionChange:(id)change;
- (void)setJitterBufferMode:(int)mode;
@end

#endif /* VCVideoReceiverBase_h */