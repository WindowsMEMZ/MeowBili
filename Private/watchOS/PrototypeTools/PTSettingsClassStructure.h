//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTSettingsClassStructure_h
#define PTSettingsClassStructure_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface PTSettingsClassStructure : NSObject<NSSecureCoding> {
  /* instance variables */
  NSDictionary *_structNames;
  NSDictionary *_classes;
  NSDictionary *_classNames;
}

@property (retain, nonatomic) NSString *settingsClassName;
@property (nonatomic) unsigned long long settingsClassVersion;
@property (retain, nonatomic) NSSet *leafKeys;
@property (retain, nonatomic) NSSet *childKeys;
@property (retain, nonatomic) NSSet *outletKeys;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)filteredForProxySettings;
- (Class)childClassForKey:(id)key;
- (Class)leafClassForKey:(id)key;
- (id)leafStructNameForKey:(id)key;
- (Class)_classForKey:(id)key;
- (void)_generateClassNamesIfNecessary;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)_decodeStringStringDictionaryForKey:(id)key withCoder:(id)coder;
- (id)_decodeStringSetForKey:(id)key withCoder:(id)coder;
@end

#endif /* PTSettingsClassStructure_h */