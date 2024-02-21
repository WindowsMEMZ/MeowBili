//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOXPCReply_Protocol_h
#define GEOXPCReply_Protocol_h
@import Foundation;

#include "GEOXPCSerializable-Protocol.h"

@class NSError, NSString;
@protocol OS_xpc_object;

@protocol GEOXPCReply <NSObject, GEOXPCSerializable>
/* instance methods */
- (BOOL)isValid;
@end

#endif /* GEOXPCReply_Protocol_h */