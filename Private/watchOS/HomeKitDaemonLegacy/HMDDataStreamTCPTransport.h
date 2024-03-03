//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDataStreamTCPTransport_h
#define HMDDataStreamTCPTransport_h
@import Foundation;

#include "HMDDataStreamFrameReader.h"
#include "HMDDataStreamTransport-Protocol.h"
#include "HMDNetworkConnection-Protocol.h"
#include "HMFLogging-Protocol.h"

@class HMFNetAddress, NSString;
@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue;

@interface HMDDataStreamTCPTransport : NSObject<HMFLogging, HMDDataStreamTransport> {
  /* instance variables */
  BOOL _connected;
  long long _remotePort;
  int _schedulingMode;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFNetAddress *remoteAddress;
@property (retain, nonatomic) NSObject<HMDNetworkConnection> *tcpConnection;
@property (readonly, nonatomic) HMDDataStreamFrameReader *byteReader;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (copy, nonatomic) id /* block */ connectionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDDataStreamTransportDelegate> *delegate;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithAddress:(id)address port:(long long)port workQueue:(id)queue logIdentifier:(id)identifier;
- (id)initWithAddress:(id)address port:(long long)port targetQueue:(id)queue logIdentifier:(id)identifier;
- (void)dealloc;
- (id)_createTcpConnection;
- (void)connect;
- (void)_handleReadClose;
- (void)_registerForConnectionEvents;
- (void)_start;
- (void)_stopWithError:(id)error;
- (void)_consumeReceivedData:(id)data;
- (void)_doReceive;
- (void)_closeWithError:(id)error;
- (void)close;
- (void)sendRawFrame:(id)frame completion:(id /* block */)completion;
- (void)setTrafficClass:(unsigned long long)class;
@end

#endif /* HMDDataStreamTCPTransport_h */