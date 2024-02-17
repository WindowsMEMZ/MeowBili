//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef FTServiceStatus_h
#define FTServiceStatus_h
@import Foundation;

@interface FTServiceStatus : NSObject

@property (nonatomic) int supportedServicesToken;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) BOOL blockPost;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL faceTimeAudioSupported;
@property (readonly, nonatomic) BOOL faceTimeMultiwaySupported;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initPrivate;
- (void)dealloc;
- (void)_reload;
- (void)_addObservers;
- (void)_removeObservers;
- (unsigned long long)_noCache_supportedServicesFlags;
@end

#endif /* FTServiceStatus_h */