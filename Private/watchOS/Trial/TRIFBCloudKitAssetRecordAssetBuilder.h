//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBCloudKitAssetRecordAssetBuilder_h
#define TRIFBCloudKitAssetRecordAssetBuilder_h
@import Foundation;

@class AFBBufferBuilder;

@interface TRIFBCloudKitAssetRecordAssetBuilder : NSObject {
  /* instance variables */
  AFBBufferBuilder *_owner;
  struct CloudKitAssetRecordAssetBuilder { struct FlatBufferBuilder * x0; unsigned int x1; } * _bldr;
}

/* instance methods */
- (void)dealloc;
- (id)init;
@end

#endif /* TRIFBCloudKitAssetRecordAssetBuilder_h */