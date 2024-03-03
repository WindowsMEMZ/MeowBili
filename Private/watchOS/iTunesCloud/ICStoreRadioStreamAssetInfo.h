//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStoreRadioStreamAssetInfo_h
#define ICStoreRadioStreamAssetInfo_h
@import Foundation;

@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject {
  /* instance variables */
  NSDictionary *_itemResponseDictionary;
}

@property (readonly, nonatomic) long long flavor;
@property (readonly, nonatomic) long long streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic) BOOL iTunesStoreStream;

/* instance methods */
- (id)initWithItemResponseDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isiTunesStoreStream;
- (long long)ICStoreRadioStreamFlavorWithString:(id)string;
- (long long)ICStoreRadioStreamProtocolWithString:(id)string;
@end

#endif /* ICStoreRadioStreamAssetInfo_h */