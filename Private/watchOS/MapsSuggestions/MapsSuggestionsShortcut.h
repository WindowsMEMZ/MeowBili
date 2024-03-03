//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsShortcut_h
#define MapsSuggestionsShortcut_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class GEOMapItemStorage, NSArray, NSString, NSUUID;

@interface MapsSuggestionsShortcut : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) long long source;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *storageIdentifier;
@property (copy, nonatomic) NSString *customName;
@property (copy, nonatomic) GEOMapItemStorage *geoMapItem;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isHidden;
@property (copy, nonatomic) NSString *originatingAddressString;
@property (readonly, nonatomic) BOOL isBackedPlaceholder;
@property (readonly, nonatomic) BOOL isSetupPlaceholder;
@property (nonatomic) BOOL derivedFromMeCard;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)shortcutWithData:(id)data;

/* instance methods */
- (id)initWithFavoriteItem:(id)item;
- (id)identifierForStorage;
- (BOOL)isEqualToFavoriteItem:(id)item;
- (id)initWithType:(long long)type identifier:(id)identifier geoMapItem:(id)item customName:(id)name contacts:(id)contacts isHidden:(BOOL)hidden originatingAddress:(id)address;
- (id)initWithType:(long long)type identifier:(id)identifier geoMapItem:(id)item customName:(id)name;
- (id)initWithType:(long long)type geoMapItem:(id)item customName:(id)name;
- (id)initWithGEOMapItem:(id)item customName:(id)name;
- (id)initBackedPlaceholderWithType:(long long)type identifier:(id)identifier originatingAddress:(id)address customName:(id)name;
- (id)initBackedPlaceholderWithType:(long long)type identifier:(id)identifier customName:(id)name;
- (id)initSetupPlaceholderOfType:(long long)type;
- (void)addContact:(id)contact;
- (void)removeContact:(id)contact;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)data;
- (id)description;
- (BOOL)isEqualToShortcut:(id)shortcut;
- (BOOL)isEqual:(id)equal;
@end

#endif /* MapsSuggestionsShortcut_h */