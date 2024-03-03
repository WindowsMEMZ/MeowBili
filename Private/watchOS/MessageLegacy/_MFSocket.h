//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef _MFSocket_h
#define _MFSocket_h
@import Foundation;

#include "MFStream.h"

@class NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject {
  /* instance variables */
  NSCondition *_condition;
  NSString *_protocol;
  NSString *_host;
  NSString *_service;
  struct __CFString * _connectionServiceType;
  NSInvocation *_eventHandler;
  int _lowThroughputCounter;
  int _numTimeoutSecs;
  BOOL _socketCanRead;
  BOOL _socketCanWrite;
}

@property (retain) MFStream *stream;
@property (nonatomic) int timeout;
@property (nonatomic) BOOL allowsTrustPrompt;
@property (nonatomic) BOOL usesOpportunisticSockets;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (readonly, nonatomic) NSArray *serverCertificates;
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) NSData *sourceIPAddress;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isValid;

/* instance methods */
- (BOOL)_certificateIsTrustedForAccount:(id)account;
- (void)_setCertificateIsTrusted:(BOOL)trusted forAccount:(id)account;
- (BOOL)_evaluateTrust:(struct __SecTrust *)trust errorPtr:(id *)ptr;
- (id)_negotiatedProtocolVersion;
- (BOOL)_startSSLHandshakeWithProtocol:(id)protocol errorPtr:(id *)ptr;
- (BOOL)_waitForSocketOpenAndFlag:(BOOL *)flag;
- (id)securityProtocol;
- (BOOL)setSecurityProtocol:(id)protocol;
- (void)setConnectionServiceType:(struct __CFString *)type;
- (id)init;
- (void)dealloc;
- (void)abort;
- (BOOL)connectToHost:(id)host withPort:(unsigned int)port service:(id)service;
- (unsigned int)_bufferedByteCount;
- (long long)writeBytes:(const char *)bytes length:(unsigned long long)length;
- (long long)readBytes:(char *)bytes length:(unsigned long long)length;
- (void)setEventHandler:(id)handler;
- (void)enableThroughputMonitoring:(BOOL)monitoring;
@end

#endif /* _MFSocket_h */