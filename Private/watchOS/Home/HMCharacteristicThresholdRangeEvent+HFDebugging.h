//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMCharacteristicThresholdRangeEvent_HFDebugging_h
#define HMCharacteristicThresholdRangeEvent_HFDebugging_h
@import Foundation;

@interface HMCharacteristicThresholdRangeEvent (HFDebugging) <HFCharacteristicLikeEvent>
/* instance methods */
- (id)hf_representativeTriggerValue;
- (BOOL)hf_wouldFireForValue:(id)value;
- (id)hf_stateDumpBuilderWithContext:(id)context;
@end

#endif /* HMCharacteristicThresholdRangeEvent_HFDebugging_h */