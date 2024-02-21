//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETLoggingUtils_h
#define PETLoggingUtils_h
@import Foundation;

@interface PETLoggingUtils : NSObject
/* class methods */
+ (id)keyStringForEvent:(id)event featureId:(id)id stringifiedProperties:(id)properties metaData:(id)data;
+ (id)keyStringForStringifiedPairs:(id)pairs;
+ (void)_pushToBuffer:(id)buffer keyStringForStringifiedPairs:(id)pairs;
+ (id)domainStringForEvent:(id)event featureId:(id)id;
+ (id)messageKeyStringForKey:(id)key;
@end

#endif /* PETLoggingUtils_h */