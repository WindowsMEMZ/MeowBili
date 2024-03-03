//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSGroupedPublisher_h
#define BPSGroupedPublisher_h
@import Foundation;

#include "BPSConnectablePublisher-Protocol.h"
#include "BPSMulticast.h"
#include "BPSPublisher-Protocol.h"

@class NSString;

@interface BPSGroupedPublisher : NSObject<BPSPublisher, BPSConnectablePublisher>

@property (retain, nonatomic) BPSMulticast *multicast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)subscribeOnKey:(id)key;
- (id)aggregateWithInitial:(id)initial nextPartialResult:(id /* block */)result;
- (id)initWithUpstream:(id)upstream createSubject:(id /* block */)subject;
- (void)subscribe:(id)subscribe;
- (void)connect;
@end

#endif /* BPSGroupedPublisher_h */