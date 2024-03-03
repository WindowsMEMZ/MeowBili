//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef TCPTunnelClient_h
#define TCPTunnelClient_h
@import Foundation;

#include "TCPBufferPool.h"
#include "VideoConferenceRealTimeChannel-Protocol.h"

@class NSData, NSDictionary, NSMutableData, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TCPTunnelClient : NSObject<VideoConferenceRealTimeChannel> {
  /* instance variables */
  int _connectState;
  int _connectedFD;
  int _isChannelBound;
  id /* block */ _handler;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_readSource;
  NSObject<OS_dispatch_source> *_writeSource;
  unsigned char _writeSourceSuspended;
  NSObject<OS_dispatch_source> *_timer;
  float _fTimeout;
  unsigned short _channelNumber;
  NSMutableDictionary *_reqRespDict;
  NSDictionary *_relayUpdateDict;
  struct tagIPPORT { int iFlags; char x[16] szIfName; union { unsigned int dwIPv4; unsigned char x[16] abIPv6; } IP; unsigned short wPort; } _serverIPPort;
  NSData *_allocateReq;
  NSData *_channelBReq;
  double _allocationTimestamp;
  NSMutableData *_currentlyReadingMessage;
  long long _currentlyReadingDataGoalLength;
  unsigned short _currentMsgType;
  long long _currentPadding;
  char * _writeBuf;
  int _head;
  int _tail;
  TCPBufferPool *_bufferPool;
}

@property (copy) id /* block */ receiveHandler;
@property (copy) id /* block */ allocationResponseHandler;
@property (copy) id /* block */ terminationHandler;
@property (copy) id /* block */ bindingResponseHandler;
@property (copy) id /* block */ destroyHandler;
@property (copy) NSString *participantID;

/* instance methods */
- (void)resetConnection;
- (void)reportErrorAndTerminate:(long long)terminate detail:(long long)detail returnCode:(long long)code description:(id)description reason:(id)reason;
- (void)destroyDispatchTimer;
- (void)createDispatchTimer:(float)timer withDetailedError:(long long)error;
- (void)processSocketRead;
- (void)sendTCPData:(const void *)tcpdata bufSize:(int)size;
- (void)processSocketWrite:(unsigned char)write;
- (void)vcArg:(id)arg sendControlData:(id)data isTypeSSL:(BOOL)ssl withTimeout:(float)timeout withDetail:(long long)detail;
- (void)receivedControlData:(id)data;
- (void)processSocketReadSSL;
- (void)receivedSSLConnectionData:(id)data recordType:(unsigned short)type;
- (id)initWithRelayRequestDictionary:(id)dictionary withCallID:(unsigned int)id relayType:(unsigned char)type errorCode:(int *)code;
- (void)dealloc;
- (unsigned int)connectionType;
- (BOOL)sendAllocateMsg:(id *)msg;
- (BOOL)sendChannelBindingMsgWithDict:(id)dict error:(id *)error;
- (BOOL)sendRefreshMsg:(unsigned int)msg error:(id *)error;
- (void)vcArg:(id)arg sendRealTimeData:(id)data toParticipantID:(id)id;
- (void)unbindChannel;
- (void)closeTunnelSocket;
- (BOOL)isTunnelSocketClosed;
@end

#endif /* TCPTunnelClient_h */