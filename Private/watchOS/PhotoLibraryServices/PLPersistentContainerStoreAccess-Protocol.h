//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPersistentContainerStoreAccess_Protocol_h
#define PLPersistentContainerStoreAccess_Protocol_h
@import Foundation;

@protocol PLPersistentContainerStoreAccess 

@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;

/* instance methods */
- (void)removeSharedPersistentStoreCoordinator;
@end

#endif /* PLPersistentContainerStoreAccess_Protocol_h */