//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactAvatarLikenessProvider_Protocol_h
#define NCABContactAvatarLikenessProvider_Protocol_h
@import Foundation;

@protocol NCABContactAvatarLikenessProvider 

@property (readonly, nonatomic) NCABContactAvatarLikeness *current;
@property (readonly, nonatomic) NSArray *recents;
@property (readonly, nonatomic) NCABContactAvatarLikeness *fallback;

@end

#endif /* NCABContactAvatarLikenessProvider_Protocol_h */