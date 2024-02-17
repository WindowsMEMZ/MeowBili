//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationPickerTopLevelViewConfiguration_h
#define NTKComplicationPickerTopLevelViewConfiguration_h
@import Foundation;

#include "NTKComplicationPickerBaseViewConfiguration.h"
#include "NTKFaceSlotComplicationTopLevelListProvider.h"

@interface NTKComplicationPickerTopLevelViewConfiguration : NTKComplicationPickerBaseViewConfiguration

@property (readonly, @dynamic, nonatomic) NTKFaceSlotComplicationTopLevelListProvider *listProvider;

/* instance methods */
- (id)initWithTopLevelListProvider:(id)provider;
@end

#endif /* NTKComplicationPickerTopLevelViewConfiguration_h */