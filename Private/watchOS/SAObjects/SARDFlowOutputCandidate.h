//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SARDFlowOutputCandidate_h
#define SARDFlowOutputCandidate_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SARDServerContextUpdateCandidate.h"

@class NSArray, NSString;

@interface SARDFlowOutputCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *payload;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (retain, nonatomic) SARDServerContextUpdateCandidate *serverContextUpdateCandidate;
@property (nonatomic) BOOL shouldNotMitigateAsFalseTrigger;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SARDFlowOutputCandidate_h */