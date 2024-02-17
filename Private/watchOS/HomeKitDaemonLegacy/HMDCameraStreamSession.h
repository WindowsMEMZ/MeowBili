//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraStreamSession_h
#define HMDCameraStreamSession_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraProtocolParameters.h"
#include "HMDCameraStreamSessionID.h"
#include "HMDCameraVideoTierParameters.h"
#include "HMDStreamingCapabilities.h"
#include "HMDStreamingManager.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDCameraStreamSession : HMFObject<HMFLogging>

@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (retain, nonatomic) HMDStreamingManager *streamingManager;
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities;
@property (retain, nonatomic) HMDCameraProtocolParameters *protocolParameters;
@property (retain, nonatomic) HMDCameraVideoTierParameters *videoTierParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id streamingTierType:(unsigned long long)type remoteCapabilities:(id)capabilities streamPreference:(id)preference;
- (id)negotiatedParameters;
- (id)logIdentifier;
@end

#endif /* HMDCameraStreamSession_h */