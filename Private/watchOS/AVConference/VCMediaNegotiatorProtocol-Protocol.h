//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiatorProtocol_Protocol_h
#define VCMediaNegotiatorProtocol_Protocol_h
@import Foundation;

@protocol VCMediaNegotiatorProtocol <NSObject>

@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMediaRecorder *negotiatedMediaRecorderSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSArray *negotiatedStreamGroups;

/* class methods */
+ (id)streamGroupIDsWithMediaBlob:(id)blob;
+ (BOOL)initializeLocalConfiguration:(id)configuration negotiationData:(id)data deviceRole:(int)role preferredAudioPayload:(int)payload;
/* instance methods */
- (id)negotiationData;
- (BOOL)processRemoteNegotiationData:(id)data;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)mode connectionType:(int)type;
- (id)negotiatedResultsForGroupID:(unsigned int)id;
@end

#endif /* VCMediaNegotiatorProtocol_Protocol_h */