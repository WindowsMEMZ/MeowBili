//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef EKUndoSliceOutcome_h
#define EKUndoSliceOutcome_h
@import Foundation;

#include "EKPostSliceDescription.h"
#include "EKSeriesDetails.h"
#include "NSCopying-Protocol.h"

@class EKEvent;

@interface EKUndoSliceOutcome : NSObject<NSCopying>

@property (copy) EKEvent *masterToDelete;
@property (copy) EKSeriesDetails *mainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;
@property (readonly) EKPostSliceDescription *originalPostSliceDescription;

/* instance methods */
- (id)initWithOriginalPostSliceDescription:(id)description;
- (id)initResliceFromOutcome:(id)outcome;
- (void)_markExistingSeriesMasterAsChangedFromMaster:(id)master;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* EKUndoSliceOutcome_h */