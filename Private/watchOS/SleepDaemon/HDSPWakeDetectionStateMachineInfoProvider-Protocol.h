//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPWakeDetectionStateMachineInfoProvider_Protocol_h
#define HDSPWakeDetectionStateMachineInfoProvider_Protocol_h
@import Foundation;

@protocol HDSPWakeDetectionStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) unsigned long long activeTypes;
@property (readonly, nonatomic) NSDate *nextWakeUp;
@property (readonly, nonatomic) NSDate *upcomingStartDetection;

/* instance methods */
- (id)detectionWindowForType:(unsigned long long)type;
@end

#endif /* HDSPWakeDetectionStateMachineInfoProvider_Protocol_h */