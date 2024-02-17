//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECMIMECharset_Protocol_h
#define ECMIMECharset_Protocol_h
@import Foundation;

@protocol ECMIMECharset <NSObject>

@property (readonly) unsigned long long encoding;
@property (readonly, copy, nonatomic) NSString *charsetName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;

@end

#endif /* ECMIMECharset_Protocol_h */