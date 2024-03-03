//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCGroupConfig_h
#define FCGroupConfig_h
@import Foundation;

#include "FCColor.h"
#include "FCColorGradient.h"

@class NSArray, NSDictionary, NSString;

@interface FCGroupConfig : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCColor *groupTitleColor;
@property (retain, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (nonatomic) unsigned long long cutoffTimeSecs;
@property (nonatomic) unsigned long long cutoffCount;
@property (retain, nonatomic) NSArray *groupFonts;
@property (retain, nonatomic) NSDictionary *articleMetadataByArticleID;
@property (retain, nonatomic) FCColorGradient *groupBackgroundColorGradient;
@property (retain, nonatomic) FCColorGradient *groupDarkStyleBackgroundColorGradient;
@property (readonly, nonatomic) NSString *articleListID;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *groupSubtitle;
@property (readonly, nonatomic) NSString *groupTitleFontName;
@property (readonly, nonatomic) double groupTitleFontSize;
@property (readonly, nonatomic) double groupTitleFontSizeiPad;
@property (readonly, nonatomic) double groupTitleFontTracking;
@property (readonly, nonatomic) double groupTitleFontTrackingiPad;
@property (readonly, nonatomic) double groupTitleOffsetHeight;
@property (readonly, nonatomic) double groupTitleOffsetHeightiPad;
@property (readonly, nonatomic) double groupTitleOffsetY;
@property (readonly, nonatomic) double groupTitleOffsetYiPad;
@property (readonly, nonatomic) NSString *groupActionTitle;
@property (readonly, nonatomic) NSString *groupActionURLString;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *feedID;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FCGroupConfig_h */