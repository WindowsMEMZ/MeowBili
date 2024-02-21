//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUISpritesStaticBufferFactory_h
#define ARUISpritesStaticBufferFactory_h
@import Foundation;

@interface ARUISpritesStaticBufferFactory : NSObject
/* class methods */
+ (id)spritePositionsBufferWithDevice:(id)device;
+ (id)spriteIndexBufferWithDevice:(id)device;
+ (void)clearCaches;
@end

#endif /* ARUISpritesStaticBufferFactory_h */