//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDisplayCategory_h
#define HKDisplayCategory_h
@import Foundation;

#include "HKFillStyle.h"

@class NSString, UIColor, UIImage, UIImageSymbolConfiguration;

@interface HKDisplayCategory : NSObject {
  /* instance variables */
  id /* block */ _keyColor;
  id /* block */ _symbolConfiguration;
}

@property (readonly, nonatomic) long long categoryID;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *embeddedDisplayName;
@property (readonly, nonatomic) NSString *largeListIconName;
@property (readonly, nonatomic) NSString *listIconName;
@property (readonly, nonatomic) NSString *healthDataIconName;
@property (readonly, nonatomic) NSString *shareIconName;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) UIImage *largeListIcon;
@property (readonly, nonatomic) UIImage *listIcon;
@property (readonly, nonatomic) UIImage *shareIcon;
@property (readonly, nonatomic) UIImage *systemImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *multiColorImageConfiguration;
@property (readonly, nonatomic) BOOL isMeCategory;
@property (readonly, nonatomic) BOOL isTopLevelCategory;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) HKFillStyle *fillStyle;

/* class methods */
+ (id)allCategories;
+ (id)sortedCategories;
+ (id)categoryWithID:(long long)id;
+ (id)categoryWithName:(id)name;
+ (id)topLevelCategoryIdentifiers;

/* instance methods */
- (id)initWithCategoryID:(long long)id displayName:(id)name listIconName:(id)name largeListIconName:(id)name shareIconName:(id)name systemImageName:(id)name;
- (id)init;
- (id)_image;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HKDisplayCategory_h */