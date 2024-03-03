//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef NSString_AuthKit_h
#define NSString_AuthKit_h
@import Foundation;

@interface NSString (AuthKit)
/* class methods */
+ (id)ak_base64EncodedJsonFromObject:(id)object;

/* instance methods */
- (id)ak_truncatedCopy;
- (id)ak_stringByZeroPaddingOccurencesOfString:(id)string;
- (id)ak_safeBase64String;
- (BOOL)ak_isEmailAddress;
@end

#endif /* NSString_AuthKit_h */