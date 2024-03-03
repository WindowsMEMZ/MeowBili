//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCumulativeSumCurrentValueDataProvider_h
#define HKCumulativeSumCurrentValueDataProvider_h
@import Foundation;

#include "HKValueDataProvider.h"

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider
/* instance methods */
- (id)currentValue;
- (id)fetchOperationWithCompletion:(id /* block */)completion;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)completion;
- (void)_dataProviderValueFromMostRecentSample:(id)sample completion:(id /* block */)completion;
- (void)_sumFromDate:(id)date toDate:(id)date completion:(id /* block */)completion;
@end

#endif /* HKCumulativeSumCurrentValueDataProvider_h */