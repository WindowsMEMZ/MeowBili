//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMLocalObject_h
#define IMLocalObject_h
@import Foundation;

@class NSArray, NSProtocolChecker, NSString;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject {
  /* instance variables */
  id _internal;
}

@property (nonatomic) id target;
@property (readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL wasInterrupted;
@property (retain, nonatomic) NSArray *allowlistedClasses;
@property (retain, nonatomic) NSArray *whitelistedClasses;

/* class methods */
+ (id)_imLocalObjectQueue;
+ (id)_imLocalObjectQueueTargetingWorkloop;
+ (void)_setExceptionHandlingDisabled:(BOOL)disabled;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)port;
+ (void)_registerIMLocalObject:(id)object;
+ (void)_unregisterIMLocalObject:(id)object;
+ (void)initialize;

/* instance methods */
- (id)initWithTarget:(id)target protocol:(id)protocol;
- (id)initWithTarget:(id)target connection:(id)connection protocol:(id)protocol;
- (id)initWithTarget:(id)target connection:(id)connection protocol:(id)protocol forceSecureCoding:(BOOL)coding;
- (id)initWithTarget:(id)target connection:(id)connection protocol:(id)protocol forceSecureCoding:(BOOL)coding offMainThread:(BOOL)thread;
- (id)initWithTarget:(id)target portName:(id)name protocol:(id)protocol;
- (void)_clearPort:(BOOL)port;
- (void)_clearPort:(BOOL)port signalRunLoopIfNeeded:(BOOL)needed;
- (void)dealloc;
- (void)_portInterrupted;
- (void)_portDidBecomeInvalid;
- (void)terminated;
- (void)_systemShutdown:(id)shutdown;
- (id)_currentMessageContext;
- (BOOL)_handleInvocation:(id)invocation processingComponentQueue:(BOOL)queue;
- (BOOL)_handleInvocation:(id)invocation;
- (BOOL)handleInvocation:(id)invocation;
- (void)_handleNewInvocations;
- (void)_noteNewInvocation:(BOOL)invocation;
- (id)_peekInvocation;
- (void)_popInvocation;
- (void)_enqueueInvocation:(id)invocation xpcMessage:(id)message submitToComponentQueue:(BOOL)queue isSync:(BOOL)sync isReply:(BOOL)reply;
- (void)_enqueueInvocation:(id)invocation;
- (void)_enqueueInvocation:(id)invocation xpcMessage:(id)message;
- (void)_enqueueInvocationWithPriority:(id)priority priority:(int)priority;
- (void)_enqueueInvocationWithPriority:(id)priority xpcMessage:(id)message priority:(int)priority;
- (void)_enqueueInvocationWithSync:(id)sync;
- (void)_enqueueInvocationWithSync:(id)sync xpcMessage:(id)message;
- (void)_enqueueInvocationWithSync:(id)sync xpcMessage:(id)message submitToComponentQueue:(BOOL)queue;
- (void)_enqueueInvocationWithSync:(id)sync xpcMessage:(id)message submitToComponentQueue:(BOOL)queue isReply:(BOOL)reply;
- (BOOL)isValidSelector:(SEL)selector;
- (BOOL)isSameConnection:(id)connection;
- (void)invalidate;
- (id)description;
@end

#endif /* IMLocalObject_h */