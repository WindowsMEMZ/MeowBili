//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSCardMetadataRegistrationResult_h
#define AMSCardMetadataRegistrationResult_h
@import Foundation;

@class NSData, NSDictionary, NSString;

@interface AMSCardMetadataRegistrationResult : NSObject

@property (retain, nonatomic) NSString *cardArtwork;
@property (retain, nonatomic) NSData *cardArtworkData;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSString *descriptionLong;
@property (retain, nonatomic) NSString *descriptionShort;
@property (nonatomic) long long paymentNetwork;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSDictionary *dictionary;

/* instance methods */
- (id)init;
@end

#endif /* AMSCardMetadataRegistrationResult_h */