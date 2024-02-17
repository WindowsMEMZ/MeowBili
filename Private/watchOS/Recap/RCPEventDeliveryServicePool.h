//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef RCPEventDeliveryServicePool_h
#define RCPEventDeliveryServicePool_h
@import Foundation;

#include "RCPEventDeliveryService-Protocol.h"
#include "RCPEventDeliveryServicePool-Protocol.h"

@class NSMutableDictionary;

@interface RCPEventDeliveryServicePool : NSObject<RCPEventDeliveryServicePool>

@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderID;
@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderProperties;
@property (retain, nonatomic) NSObject<RCPEventDeliveryService> *fallbackDeliveryService;
@property (nonatomic) BOOL shouldIgnoreSenderProperties;

/* instance methods */
- (id)init;
- (id)deliveryServiceForSenderProperties:(id)properties;
- (BOOL)prewarmForSenderProperties:(id)properties withError:(id *)error;
- (void)tearDown;
- (id)_findServiceForSenderProperties:(id)properties;
@end

#endif /* RCPEventDeliveryServicePool_h */