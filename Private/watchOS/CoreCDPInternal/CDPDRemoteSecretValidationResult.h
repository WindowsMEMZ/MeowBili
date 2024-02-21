//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDRemoteSecretValidationResult_h
#define CDPDRemoteSecretValidationResult_h
@import Foundation;

@class CDPDevice, CDPLocalSecret, NSDictionary, NSString, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject

@property (nonatomic) unsigned long long secretType;
@property (nonatomic) BOOL userDidCancel;
@property (nonatomic) BOOL userDidReset;
@property (copy, nonatomic) CDPDevice *device;
@property (copy, nonatomic) NSString *validSecret;
@property (copy, nonatomic) CDPLocalSecret *cachedSecretForReenrollment;
@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (retain, nonatomic) OTClique *recoveredClique;

/* instance methods */
@end

#endif /* CDPDRemoteSecretValidationResult_h */