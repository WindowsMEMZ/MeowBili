//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVOrderedAction_h
#define CoreDAVOrderedAction_h
@import Foundation;

#include "CoreDAVAction.h"

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction

@property (readonly, nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSURL *priorURL;

/* instance methods */
- (id)initWithAction:(int)action context:(id)context absoluteOrder:(int)order;
- (id)description;
@end

#endif /* CoreDAVOrderedAction_h */