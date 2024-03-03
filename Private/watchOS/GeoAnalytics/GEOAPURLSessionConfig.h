//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAPURLSessionConfig_h
#define GEOAPURLSessionConfig_h
@import Foundation;

@interface GEOAPURLSessionConfig : NSObject

@property (nonatomic) int type;
@property (nonatomic) int noCellAuthType;
@property (nonatomic) BOOL requireWifi;
@property (nonatomic) BOOL requirePower;
@property (nonatomic) BOOL discretionary;

/* class methods */
+ (id)allSessionConfigTypes;
+ (id)configForURLSessionConfigType:(int)type;
@end

#endif /* GEOAPURLSessionConfig_h */