//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 460.60.4.0.0
//
#ifndef BKDeviceDescriptor_h
#define BKDeviceDescriptor_h
@import Foundation;

@interface BKDeviceDescriptor : NSObject

@property (nonatomic) long long type;

/* class methods */
+ (id)deviceDescriptorForType:(long long)type;
@end

#endif /* BKDeviceDescriptor_h */