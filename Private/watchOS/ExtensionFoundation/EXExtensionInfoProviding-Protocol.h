//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXExtensionInfoProviding_Protocol_h
#define EXExtensionInfoProviding_Protocol_h
@import Foundation;

@protocol EXExtensionInfoProviding <NSObject>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) NSString *containingViewControllerClassName;

@end

#endif /* EXExtensionInfoProviding_Protocol_h */