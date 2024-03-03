//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef MLRDonationManager_h
#define MLRDonationManager_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface MLRDonationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (id)defaultManager;

/* instance methods */
- (id)init;
- (void)encodeAndUploadToDediscoWithIdentifier:(id)identifier measurements:(id)measurements withEncodingSchemas:(id)schemas metadata:(id)metadata completion:(id /* block */)completion;
- (BOOL)record:(id)record data:(id)data encodingSchema:(id)schema metadata:(id)metadata errorOut:(id *)out;
@end

#endif /* MLRDonationManager_h */