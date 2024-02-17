//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDNDResolverSoundPolicy_h
#define CSLDNDResolverSoundPolicy_h
@import Foundation;

#include "CSLAlertSoundPolicySource-Protocol.h"

@class NSString;

@interface CSLDNDResolverSoundPolicy : NSObject<CSLAlertSoundPolicySource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)allowedAudioFeedbackForAlertName:(id)name options:(unsigned long long)options;
- (unsigned long long)allowedAudioFeedbackForAlertName:(id)name options:(unsigned long long)options withBulletinItem:(id)item;
@end

#endif /* CSLDNDResolverSoundPolicy_h */