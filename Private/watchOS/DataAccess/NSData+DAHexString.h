//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2653.2.1.0.0
//
#ifndef NSData_DAHexString_h
#define NSData_DAHexString_h
@import Foundation;

@interface NSData (DAHexString)
/* class methods */
+ (id)da_dataWithHexString:(id)string stringIsUppercase:(BOOL)uppercase;
+ (id)da_dataWithHexString:(id)string;

/* instance methods */
- (id)da_hexString;
- (id)da_lowercaseHexStringWithoutSpaces;
- (id)da_uppercaseHexStringWithoutSpaces;
@end

#endif /* NSData_DAHexString_h */