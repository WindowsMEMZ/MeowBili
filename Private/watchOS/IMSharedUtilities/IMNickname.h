//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMNickname_h
#define IMNickname_h
@import Foundation;

#include "IMNicknameAvatarImage.h"
#include "IMWallpaper.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSString, _NSAttributedStringGrammarInflection;

@interface IMNickname : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (retain, nonatomic) IMNicknameAvatarImage *avatar;
@property (retain, nonatomic) IMWallpaper *wallpaper;
@property (retain, nonatomic) _NSAttributedStringGrammarInflection *pronouns;
@property (retain, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *archivedDate;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *nameHash;
@property (readonly, nonatomic) NSData *imageHash;
@property (readonly, nonatomic) NSData *wallpaperImageHash;
@property (readonly, nonatomic) NSData *wallpaperLowResImageHash;
@property (readonly, nonatomic) NSString *concatenatedImageHash;
@property (nonatomic) BOOL didUseAvatarImageForWallpaper;

/* class methods */
+ (id)uniqueFilePathForWritingImageData;
+ (id)uniqueFilePathForWritingWallpaperData;
+ (BOOL)supportsSecureCoding;
+ (id)nameHashWithFirstName:(id)name lastName:(id)name;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)init;
- (id)initWithFirstName:(id)name lastName:(id)name avatar:(id)avatar pronouns:(id)pronouns wallpaper:(id)wallpaper;
- (id)initWithFirstName:(id)name lastName:(id)name avatar:(id)avatar pronouns:(id)pronouns;
- (id)initWithMeContact:(id)contact;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)avatar;
- (id)dictionaryRepresentation;
- (id)publicDictionaryRepresentation;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)dataRepresentation;
- (id)_imageHashCreatedInChunks:(id)chunks;
- (id)_sharingState;
- (BOOL)isUpdateFromNickname:(id)nickname withOptions:(unsigned long long)options;
- (void)updateNameFromContact:(id)contact;
@end

#endif /* IMNickname_h */