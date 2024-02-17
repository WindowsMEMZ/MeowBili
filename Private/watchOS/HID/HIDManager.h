//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2008.60.7.0.0
//
#ifndef HIDManager_h
#define HIDManager_h
@import Foundation;

@class NSArray;

@interface HIDManager : NSObject {
  /* instance variables */
  struct __IOHIDManager * _manager;
  id /* block */ _elementHandler;
  id /* block */ _deviceNotificationHandler;
  id /* block */ _inputReportHandler;
  id /* block */ _cancelHandler;
  BOOL _activated;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _handlerLock;
}

@property (readonly) NSArray *devices;

/* instance methods */
- (id)init;
- (id)initWithOptions:(long long)options;
- (void)dealloc;
- (id)description;
- (id)propertyForKey:(id)key;
- (BOOL)setProperty:(id)property forKey:(id)key;
- (void)setInputElementMatching:(id)matching;
- (void)setInputElementHandler:(id /* block */)handler;
- (void)setDeviceMatching:(id)matching;
- (void)setDeviceNotificationHandler:(id /* block */)handler;
- (void)setInputReportHandler:(id /* block */)handler;
- (void)setCancelHandler:(id /* block */)handler;
- (void)setDispatchQueue:(id)queue;
- (void)open;
- (void)openWithOptions:(long long)options;
- (void)close;
- (void)activate;
- (void)cancel;
@end

#endif /* HIDManager_h */