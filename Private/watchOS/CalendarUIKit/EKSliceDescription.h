//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef EKSliceDescription_h
#define EKSliceDescription_h
@import Foundation;

#include "EKSeriesDetails.h"
#include "NSCopying-Protocol.h"

@class EKEvent;

@interface EKSliceDescription : NSObject<NSCopying>

@property (retain) EKEvent *originalEventToSliceOn;
@property (retain) EKSeriesDetails *originalMainSeriesDetails;

/* class methods */
+ (id)sliceDescriptionForSlicingEvent:(id)event;

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* EKSliceDescription_h */