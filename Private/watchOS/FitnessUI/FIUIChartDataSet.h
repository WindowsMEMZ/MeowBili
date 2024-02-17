//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIChartDataSet_h
#define FIUIChartDataSet_h
@import Foundation;

#include "FIUIChartDataSetDataSource-Protocol.h"

@class NSArray;

@interface FIUIChartDataSet : NSObject {
  /* instance variables */
  NSArray *_points;
  NSArray *_labels;
}

@property (weak, nonatomic) NSObject<FIUIChartDataSetDataSource> *dataSource;
@property (nonatomic) long long tag;

/* instance methods */
- (id)description;
- (id)maxYValue;
- (id)minYValue;
- (id)maxXValue;
- (id)minXValue;
- (id)points;
- (id)labelsForSet;
- (void)reloadData;
@end

#endif /* FIUIChartDataSet_h */