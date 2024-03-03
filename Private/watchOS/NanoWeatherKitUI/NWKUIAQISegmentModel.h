//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKUIAQISegmentModel_h
#define NWKUIAQISegmentModel_h
@import Foundation;

@class UIColor;

@interface NWKUIAQISegmentModel : NSObject

@property (readonly) UIColor *color;
@property (readonly) BOOL active;

/* instance methods */
- (id)initWithColor:(id)color active:(BOOL)active;
- (BOOL)isActive;
@end

#endif /* NWKUIAQISegmentModel_h */