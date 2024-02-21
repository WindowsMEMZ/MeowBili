//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRVirtualVoiceInputDevice_h
#define MRVirtualVoiceInputDevice_h
@import Foundation;

#include "MRVirtualVoiceInputDeviceDescriptor.h"

@class NSData;

@interface MRVirtualVoiceInputDevice : NSObject

@property (readonly, nonatomic) unsigned int deviceID;
@property (copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
@property (nonatomic) unsigned int recordingState;
@property (readonly, nonatomic) NSData *data;

/* instance methods */
- (id)initWithDeviceID:(unsigned int)id;
- (id)initWithData:(id)data;
- (id)description;
@end

#endif /* MRVirtualVoiceInputDevice_h */