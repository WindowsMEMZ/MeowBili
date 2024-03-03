//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiatorAudioConfiguration_h
#define VCMediaNegotiatorAudioConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableSet, NSSet;

@interface VCMediaNegotiatorAudioConfiguration : NSObject<NSCopying> {
  /* instance variables */
  NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL useSBR;
@property (nonatomic) unsigned int audioUnitNumber;
@property (readonly, nonatomic) NSSet *audioPayloads;

/* instance methods */
- (id)initWithAllowAudioSwitching:(BOOL)switching allowAudioRecording:(BOOL)recording useSBR:(BOOL)sbr ssrc:(unsigned int)ssrc audioUnitNumber:(unsigned int)number;
- (id)initWithAllowAudioSwitching:(BOOL)switching allowAudioRecording:(BOOL)recording useSBR:(BOOL)sbr ssrc:(unsigned int)ssrc audioUnitNumber:(unsigned int)number audioRuleCollection:(id)collection;
- (void)dealloc;
- (void)addAudioPayload:(int)payload isSecondary:(BOOL)secondary;
- (BOOL)isSecondaryPayload:(int)payload;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* VCMediaNegotiatorAudioConfiguration_h */