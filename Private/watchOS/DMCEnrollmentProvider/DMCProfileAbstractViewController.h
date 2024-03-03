//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCProfileAbstractViewController_h
#define DMCProfileAbstractViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PSStateRestoration-Protocol.h"

@class NSString;

@interface DMCProfileAbstractViewController : UIViewController<PSStateRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)canBeShownFromSuspendedState;
- (void)updateExtendedLayoutIncludesOpaqueBars;
@end

#endif /* DMCProfileAbstractViewController_h */