//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTTranslationRange_h
#define _LTTranslationRange_h
@import Foundation;

@class NSDictionary, NSString;

@interface _LTTranslationRange : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL shouldTranslate;
@property (copy, nonatomic) NSDictionary *metaInfo;

/* instance methods */
- (id)initWithIdentifier:(id)identifier text:(id)text shouldTranslate:(BOOL)translate;
@end

#endif /* _LTTranslationRange_h */