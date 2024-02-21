//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KMMapper_CNContact_h
#define KMMapper_CNContact_h
@import Foundation;

#include "KMMapper-Protocol.h"

@class KVItemBuilder, NSNumber, NSString;

@interface KMMapper_CNContact : NSObject<KMMapper> {
  /* instance variables */
  KVItemBuilder *_builder;
  NSNumber *_meCardIdentifierKey;
  NSNumber *_alternativeItemIdKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)externalObjectClass;

/* instance methods */
- (id)init;
- (long long)targetItemType;
- (id)itemsFromExternalObject:(id)object additionalFields:(id)fields error:(id *)error;
- (BOOL)_addLabeledFieldsOfType:(long long)type labeledValues:(id)values labelOnly:(BOOL)only error:(id *)error;
@end

#endif /* KMMapper_CNContact_h */