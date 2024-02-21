//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPConnectionsFoundInAppsSource_h
#define PPConnectionsFoundInAppsSource_h
@import Foundation;

#include "PPConnectionsSource.h"
#include "PPConnectionsLocationSource-Protocol.h"

@class NSString;

@interface PPConnectionsFoundInAppsSource : PPConnectionsSource<PPConnectionsLocationSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)identifier;
- (id)init;
- (id)locationItemsWithCriteria:(id)criteria earliest:(id)earliest latest:(id)latest limit:(unsigned long long)limit consumer:(unsigned long long)consumer explanationSet:(id)set;
@end

#endif /* PPConnectionsFoundInAppsSource_h */