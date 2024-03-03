//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSWebTunnelRequestMessage_h
#define IDSWebTunnelRequestMessage_h
@import Foundation;

#include "FTIDSMessage.h"

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSWebTunnelRequestMessage : FTIDSMessage

@property (copy, nonatomic) NSString *messageRequestUUID;
@property (copy, nonatomic) NSString *messageURL;
@property (copy, nonatomic) NSData *messageRequestBodyData;
@property (copy, nonatomic) NSDictionary *messageRequestBodyDictionary;
@property (copy, nonatomic) NSMutableDictionary *messageHeaders;
@property (copy, nonatomic) NSNumber *maximumResponseSize;
@property (copy, nonatomic) NSString *userAgentOverride;
@property (copy, nonatomic) NSData *responseBodyData;
@property (copy, nonatomic) NSDictionary *responseBodyDictionary;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) NSNumber *responseCode;
@property (copy, nonatomic) NSNumber *responseStatus;
@property (nonatomic) BOOL disableIDSTranslation;

/* instance methods */
- (id)initWithMessage:(id)message;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)isWebTunnelMessage;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)isIDSMessage;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)messageBody;
- (void)handleResponseDictionary:(id)dictionary;
- (void)handleResponseHeaders:(id)headers;
@end

#endif /* IDSWebTunnelRequestMessage_h */