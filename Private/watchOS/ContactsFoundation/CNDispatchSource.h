//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNDispatchSource_h
#define CNDispatchSource_h
@import Foundation;

#include "CNCancelable-Protocol.h"

@class NSString;
@protocol OS_dispatch_source;

@interface CNDispatchSource : NSObject<CNCancelable> {
  /* instance variables */
  NSObject<OS_dispatch_source> *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSource:(id)source;
- (id)source;
- (void)cancel;
@end

#endif /* CNDispatchSource_h */