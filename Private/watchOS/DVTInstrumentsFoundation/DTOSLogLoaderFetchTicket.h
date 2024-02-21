//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTOSLogLoaderFetchTicket_h
#define DTOSLogLoaderFetchTicket_h
@import Foundation;

#include "DTOSLogLoaderTicket.h"

@class OSLogEventStreamPosition;

@interface DTOSLogLoaderFetchTicket : DTOSLogLoaderTicket

@property (nonatomic) double windowInSeconds;
@property (retain, nonatomic) OSLogEventStreamPosition *currentPosition;

/* instance methods */
- (void)holdAgent:(id)agent loader:(id)loader;
- (void)prepareAgent:(id)agent loader:(id)loader;
@end

#endif /* DTOSLogLoaderFetchTicket_h */