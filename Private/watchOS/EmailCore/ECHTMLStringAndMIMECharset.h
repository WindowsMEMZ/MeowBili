//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECHTMLStringAndMIMECharset_h
#define ECHTMLStringAndMIMECharset_h
@import Foundation;

@class NSString;
@protocol ECMIMECharset;

@interface ECHTMLStringAndMIMECharset : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSObject<ECMIMECharset> *charset;

/* instance methods */
- (id)initWithString:(id)string charset:(id)charset;
@end

#endif /* ECHTMLStringAndMIMECharset_h */