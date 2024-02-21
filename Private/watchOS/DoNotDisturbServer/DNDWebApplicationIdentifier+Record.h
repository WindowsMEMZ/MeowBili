//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDWebApplicationIdentifier_Record_h
#define DNDWebApplicationIdentifier_Record_h
@import Foundation;

@interface DNDWebApplicationIdentifier (Record) <DNDSBackingStoreRecord>
/* class methods */
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDWebApplicationIdentifier_Record_h */