//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 352.10.2.0.0
//
#ifndef IOSurfaceSharedEvent_h
#define IOSurfaceSharedEvent_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface IOSurfaceSharedEvent : NSObject<NSSecureCoding> {
  /* instance variables */
  unsigned long long _eventOptions;
}

@property unsigned long long signaledValue;
@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) BOOL supportsRollback;
@property (readonly) BOOL supportsLowLatencySignalAndWait;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithOptions:(unsigned long long)options;
- (id)initWithMachPort:(unsigned int)port;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (BOOL)waitUntilSignaledValue:(unsigned long long)value timeoutMS:(unsigned long long)ms;
- (void)notifyListener:(id)listener atValue:(unsigned long long)value block:(id /* block */)block;
@end

#endif /* IOSurfaceSharedEvent_h */