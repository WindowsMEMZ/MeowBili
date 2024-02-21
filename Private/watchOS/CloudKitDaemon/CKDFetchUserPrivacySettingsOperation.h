//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchUserPrivacySettingsOperation_h
#define CKDFetchUserPrivacySettingsOperation_h
@import Foundation;

#include "CKDOperation.h"

@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)_handleRetrievedPrivacySettings:(id)settings;
- (int)operationType;
- (void)main;
@end

#endif /* CKDFetchUserPrivacySettingsOperation_h */