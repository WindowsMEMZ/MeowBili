//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef NSKeyedUnarchiver_ETAdditions_h
#define NSKeyedUnarchiver_ETAdditions_h
@import Foundation;

@interface NSKeyedUnarchiver (ETAdditions)
/* class methods */
+ (id)_et_secureUnarchiveObjectOfClasses:(id)classes withData:(id)data;
+ (id)_et_secureUnarchiveObjectOfClass:(Class)class withData:(id)data;
@end

#endif /* NSKeyedUnarchiver_ETAdditions_h */