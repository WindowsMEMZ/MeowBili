//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaOutputDevice_h
#define HMDMediaOutputDevice_h
@import Foundation;

#include "HMFObject.h"

@class AVOutputDevice, NSString;

@interface HMDMediaOutputDevice : HMFObject

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (nonatomic) void * outputDevice;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) BOOL supportsWHA;
@property (readonly, nonatomic) BOOL supportsHAP;

/* instance methods */
- (id)initWithOutputDevice:(void *)device;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (BOOL)shouldCreateAppleMediaAccessory;
@end

#endif /* HMDMediaOutputDevice_h */