//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCAudioStreamConfig_h
#define AVCAudioStreamConfig_h
@import Foundation;

@interface AVCAudioStreamConfig : NSObject

@property (nonatomic) long long audioStreamMode;
@property (nonatomic) long long codecType;
@property (nonatomic) BOOL cnEnabled;
@property (nonatomic) unsigned long long cnPayloadType;
@property (nonatomic) unsigned long long dtmfPayloadType;
@property (nonatomic) unsigned long long dtmfTimestampRate;
@property (nonatomic) unsigned long long ptime;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic) float volume;
@property (nonatomic) unsigned long long channelAwareOffset;
@property (nonatomic) BOOL octetAligned;
@property (nonatomic) BOOL headerFullOnly;
@property (nonatomic) BOOL dtxEnabled;
@property (nonatomic) long long preferredCodecRateMode;
@property (nonatomic) unsigned int codecRateModeMask;
@property (nonatomic) unsigned int codecBandwidthMask;
@property (nonatomic) BOOL latencySensitiveMode;
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) BOOL dtmfTonePlaybackEnabled;
@property (nonatomic) unsigned long long numRedundantPayloads;
@property (nonatomic) unsigned long long txRedPayloadType;
@property (nonatomic) unsigned long long rxRedPayloadType;
@property (nonatomic) BOOL anbrEnabled;
@property (nonatomic) long long subscriptionSlot;
@property (nonatomic) unsigned long long channelCount;
@property (nonatomic) unsigned long long preferredMediaBitRate;
@property (nonatomic) int codecCMRMode;

/* class methods */
+ (long long)codecTypeWithClientCodecType:(long long)type;
+ (long long)clientCodecTypeWithCodecType:(long long)type;
+ (long long)streamModeWithClientStreamMode:(long long)mode;
+ (long long)clientStreamModeWithStreamMode:(long long)mode;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)mode;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)mode;
+ (unsigned int)codecBandwidthMaskForClientCodecBandwidth:(unsigned int)bandwidth;
+ (unsigned int)clientCodecBandwidthMaskForCodecBandwidth:(unsigned int)bandwidth;
+ (int)codecRateModeForClientCodecRateMode:(long long)mode;
+ (long long)clientCodecRateModeForCodecRateMode:(int)mode;

/* instance methods */
- (id)init;
- (BOOL)isValid;
- (BOOL)isDTMFValid;
- (BOOL)isCNValid;
- (BOOL)isRedValid;
- (BOOL)isChannelCountValid;
- (void)setUpWithDictionary:(id)dictionary;
- (id)dictionary;
- (BOOL)isCNEnabled;
- (BOOL)isOctectAligned;
- (BOOL)isHeaderFullOnly;
- (BOOL)isDTXEnabled;
- (BOOL)isLatencySensitiveMode;
@end

#endif /* AVCAudioStreamConfig_h */