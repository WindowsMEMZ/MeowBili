//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTRoutineManagerExportedObject_h
#define RTRoutineManagerExportedObject_h
@import Foundation;

#include "RTFrameworkProtocol-Protocol.h"
#include "RTRoutineManager.h"

@class NSString;

@interface RTRoutineManagerExportedObject : NSObject<RTFrameworkProtocol>

@property (weak, nonatomic) RTRoutineManager *routineManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRoutineManager:(id)manager;
- (void)onVisit:(id)visit withError:(id)error;
- (void)onLeechedVisit:(id)visit withError:(id)error;
- (void)onLeechedLowConfidenceVisit:(id)visit withError:(id)error;
- (void)onScenarioTrigger:(id)trigger withError:(id)error;
- (void)onVehicleEvents:(id)events error:(id)error;
@end

#endif /* RTRoutineManagerExportedObject_h */