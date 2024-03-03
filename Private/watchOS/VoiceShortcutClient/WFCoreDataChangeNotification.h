//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCoreDataChangeNotification_h
#define WFCoreDataChangeNotification_h
@import Foundation;

@class NSSet;

@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) BOOL invalidatedAllObjects;
@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) int processIdentifier;

/* instance methods */
- (id)initWithInvalidatedAllObjects:(BOOL)objects updated:(id)updated inserted:(id)inserted deleted:(id)deleted processIdentifier:(int)identifier;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)notificationByMergingChangesFromNotification:(id)notification;
- (id)dictionaryRepresentation;
- (BOOL)hasChanges;
- (BOOL)originatedInCurrentProcess;
- (BOOL)appliesToResultState:(id)state;
- (id)updatedDescriptors;
- (id)insertedDescriptors;
- (id)deletedDescriptors;
- (id)debugDescription;
@end

#endif /* WFCoreDataChangeNotification_h */