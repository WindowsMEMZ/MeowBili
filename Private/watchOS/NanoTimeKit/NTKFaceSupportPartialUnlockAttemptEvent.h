//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSupportPartialUnlockAttemptEvent_h
#define NTKFaceSupportPartialUnlockAttemptEvent_h
@import Foundation;

@class NSDate, NSString;

@interface NTKFaceSupportPartialUnlockAttemptEvent : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long method;

/* instance methods */
- (id)initWithIdentifier:(id)identifier method:(unsigned long long)method;
- (id)unlockAttemptWithStatus:(unsigned long long)status errorCode:(long long)code;
@end

#endif /* NTKFaceSupportPartialUnlockAttemptEvent_h */