//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUBLEServer_h
#define CUBLEServer_h
@import Foundation;

#include "CBPeripheralManagerDelegate-Protocol.h"

@class CBPeripheralManager, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CUBLEServer : NSObject<CBPeripheralManagerDelegate> {
  /* instance variables */
  id /* block */ _activateCompletion;
  NSMutableSet *_connections;
  BOOL _invalidateCalled;
  CBPeripheralManager *_peripheralManager;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
}

@property (copy, nonatomic) id /* block */ connectionStartedHandler;
@property (copy, nonatomic) id /* block */ connectionEndedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned short listenPSM;
@property (nonatomic) unsigned short listeningPSM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)invalidate;
- (void)_invalidate;
- (void)_startIfNeeded;
- (void)peripheralManagerDidUpdateState:(id)state;
- (void)peripheralManager:(id)manager didPublishL2CAPChannel:(unsigned short)capchannel error:(id)error;
- (void)peripheralManager:(id)manager didUnpublishL2CAPChannel:(unsigned short)capchannel error:(id)error;
- (void)peripheralManager:(id)manager didOpenL2CAPChannel:(id)capchannel error:(id)error;
- (void)_handleConnectionInvalidated:(id)invalidated;
@end

#endif /* CUBLEServer_h */