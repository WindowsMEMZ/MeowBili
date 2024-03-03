//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFMessageTransport_h
#define HMFMessageTransport_h
@import Foundation;

#include "HMFObject.h"
#include "HMFMessageTransportDelegate-Protocol.h"

@interface HMFMessageTransport : HMFObject

@property (weak) NSObject<HMFMessageTransportDelegate> *delegate;

/* instance methods */
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
@end

#endif /* HMFMessageTransport_h */