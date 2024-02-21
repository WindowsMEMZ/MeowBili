//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLUserEditableAlbumProtocol_Protocol_h
#define PLUserEditableAlbumProtocol_Protocol_h
@import Foundation;

@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>

@property (readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;

/* instance methods */
- (void)insertInternalUserEditableAssets:(id)assets atIndexes:(id)indexes assetsSharingInfos:(id)infos customExportsInfo:(id)info trimmedVideoPathInfo:(id)info commentText:(id)text;
@end

#endif /* PLUserEditableAlbumProtocol_Protocol_h */