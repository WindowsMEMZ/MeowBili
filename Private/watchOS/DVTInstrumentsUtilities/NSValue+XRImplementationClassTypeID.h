//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef NSValue_XRImplementationClassTypeID_h
#define NSValue_XRImplementationClassTypeID_h
@import Foundation;

@interface NSValue (XRImplementationClassTypeID)
/* class methods */
+ (id)valueWithTimeRange:(struct XRTimeRange { unsigned long long x0; unsigned long long x1; })range;

/* instance methods */
- (struct XRTimeRange { unsigned long long x0; unsigned long long x1; })timeRangeValue;
- (unsigned char)implementationClassTypeID;
@end

#endif /* NSValue_XRImplementationClassTypeID_h */