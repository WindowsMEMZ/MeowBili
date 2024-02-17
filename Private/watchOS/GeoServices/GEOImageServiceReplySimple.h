//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOImageServiceReplySimple_h
#define GEOImageServiceReplySimple_h
@import Foundation;

#include "GEOXPCReply.h"
#include "GEOImageServiceResponse.h"
#include "GEOXPCReply-Protocol.h"

@class NSString;

@interface GEOImageServiceReplySimple : GEOXPCReply<GEOXPCReply>

@property (retain, nonatomic) GEOImageServiceResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithXPCDictionary:(id)xpcdictionary error:(id *)error;
- (void)encodeToXPCDictionary:(id)xpcdictionary;
- (BOOL)isValid;
@end

#endif /* GEOImageServiceReplySimple_h */