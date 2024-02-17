//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMCKPadding_h
#define IMCKPadding_h
@import Foundation;

@interface IMCKPadding : NSObject
/* class methods */
+ (id)_randomDataWithLength:(long long)length;
+ (long long)_paddingForType:(int)type originalSize:(long long)size error:(struct __CFError * *)error;
+ (id)paddingForMessageOfSize:(long long)size;
@end

#endif /* IMCKPadding_h */