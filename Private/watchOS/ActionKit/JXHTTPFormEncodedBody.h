//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef JXHTTPFormEncodedBody_h
#define JXHTTPFormEncodedBody_h
@import Foundation;

#include "JXHTTPRequestBody-Protocol.h"

@class NSMutableDictionary, NSString;

@interface JXHTTPFormEncodedBody : NSObject<JXHTTPRequestBody>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)withDictionary:(id)dictionary;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)requestData;
- (id)httpInputStream;
- (id)httpContentType;
- (long long)httpContentLength;
@end

#endif /* JXHTTPFormEncodedBody_h */