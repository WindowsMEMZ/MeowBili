//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2679.64.1.0.0
//
#ifndef OSLaunchdJob_h
#define OSLaunchdJob_h
@import Foundation;

#include "OSLaunchdDomain.h"

@class NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface OSLaunchdJob : NSObject {
  /* instance variables */
  NSObject<OS_xpc_object> *_plist;
  OSLaunchdDomain *_domain;
  NSObject<OS_dispatch_source> *_monitor_source;
  id /* block */ _monitor_handler;
  NSObject<OS_dispatch_queue> *_monitor_queue;
}

@property (readonly, nonatomic) NSUUID *handle;

/* class methods */
+ (BOOL)submitAll:(id)all error:(id *)error;
+ (id)_createJobFromReplyHandle:(id)handle;
+ (long long)jobStateFromMessage:(id)message;
+ (id)jobInfoFromMessage:(id)message;
+ (int)_monitorNormalizeError:(int)error;
+ (id)copyJobsManagedBy:(id)by error:(id *)error;
+ (id)copyJobWithHandle:(id)handle;
+ (id)copyJobWithLabel:(id)label domain:(id)domain;
+ (id)submitExtension:(id)extension overlay:(id)overlay domain:(id)domain error:(id *)error;
+ (id)copyJobWithPid:(int)pid;
+ (void)setDisableLogging_4watchdogd:(BOOL)logging_4watchdogd;
+ (BOOL)disableLogging_4watchdogd;

/* instance methods */
- (id)_newSubmitRequest;
- (void)_populateHandle:(id)handle;
- (void)_startMonitoringAfterSubmit:(id)submit;
- (void)processSubmitReply:(id)reply;
- (id)submitAndStart:(id *)start;
- (BOOL)submit:(id *)submit;
- (id)start:(id *)start;
- (BOOL)remove:(id *)remove;
- (void)setupMonitorOnQueue:(id)queue withHandler:(id /* block */)handler reply:(id)reply;
- (void)monitorOnQueue:(id)queue withHandler:(id /* block */)handler;
- (void)cancelMonitor;
- (id)getCurrentJobInfo;
- (id)_newCreateInstanceRequest:(unsigned char x[16])request properties:(id)properties;
- (id)createInstance:(unsigned char x[16])instance properties:(id)properties error:(id *)error;
- (id)createInstance:(unsigned char x[16])instance error:(id *)error;
- (id)initWithPlist:(id)plist;
- (id)initWithPlist:(id)plist domain:(id)domain;
- (id)_initWithHandle:(id)handle;
- (id)_newRequest;
- (void)_setupMonitorSourceWithPort:(unsigned int)port onQueue:(id)queue withHandler:(id /* block */)handler;
- (id)description;
@end

#endif /* OSLaunchdJob_h */