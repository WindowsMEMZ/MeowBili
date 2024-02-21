//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ExternalDetectedObject_Protocol_h
#define ExternalDetectedObject_Protocol_h
@import Foundation;

@protocol ExternalDetectedObject <NSObject>

@property long long objectType;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property struct CGPoint { double x0; double x1; } center;

@end

#endif /* ExternalDetectedObject_Protocol_h */