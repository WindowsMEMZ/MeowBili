//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLImageFormat_h
#define PLImageFormat_h
@import Foundation;

@class NSString;

@interface PLImageFormat : NSObject

@property (nonatomic) unsigned short formatID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) BOOL isCropped;
@property (readonly, nonatomic) double dimension;
@property (readonly, nonatomic) long long thumbnailKind;
@property (readonly, nonatomic) long long formatMode;
@property (readonly, nonatomic) BOOL isSquare;
@property (readonly, nonatomic) BOOL dimensionsReferToShortSide;
@property (readonly, @dynamic, nonatomic) BOOL isTable;
@property (readonly, @dynamic, nonatomic) BOOL isThumbnail;
@property (readonly, nonatomic) BOOL isAlwaysFullScreen;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) BOOL refersToLatestVersion;
@property (readonly, nonatomic) BOOL refersToUnadjustedVersion;
@property (readonly, nonatomic) BOOL refersToPenultimateVersion;
@property (readonly, nonatomic) BOOL refersToOriginalVersion;
@property (readonly, nonatomic) unsigned long long metalPixelFormat;
@property (readonly, nonatomic) struct __CFString * colorSpaceName;

/* class methods */
+ (id)_syncFormats;
+ (id)formatWithID:(unsigned short)id;

/* instance methods */
- (BOOL)_isAcceptableForViewSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode sourceAspectRatio:(double)ratio desiredImageSize:(struct CGSize { double x0; double x1; })size demoteFactor:(double)factor;
- (BOOL)_canDegradeToFormat:(id)format;
- (Class)_tableClass;
- (id)init;
- (id)initWithName:(id)name size:(struct CGSize { double x0; double x1; })size isCropped:(BOOL)cropped;
- (id)initWithName:(id)name size:(struct CGSize { double x0; double x1; })size isCropped:(BOOL)cropped version:(long long)version isAlwaysFullScreen:(BOOL)screen;
- (id)initWithName:(id)name size:(struct CGSize { double x0; double x1; })size isCropped:(BOOL)cropped version:(long long)version isAlwaysFullScreen:(BOOL)screen formatMode:(long long)mode thumbnailKind:(long long)kind;
- (id)initWithFormatID:(unsigned short)id;
- (id)shortDescription;
- (id)description;
- (long long)compare:(id)compare;
- (BOOL)isEqualToFormat:(id)format;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMinShortSide;
- (unsigned long long)fullSizeMaxLongSide;
- (struct CGSize { double x0; double x1; })_shortSideFormatScaledSizeForSourceSize:(struct CGSize { double x0; double x1; })size capLength:(BOOL)length;
- (struct CGSize { double x0; double x1; })scaledSizeForSourceSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })scaledSizeForSourceSize:(struct CGSize { double x0; double x1; })size capLength:(BOOL)length;
- (unsigned long long)tableFormatBytesPerPixel;
- (unsigned long long)tableFormatBytesPerRowForWidth:(int)width;
- (id)thumbnailSpecification;
- (id)createTableWithPath:(id)path readOnly:(BOOL)only format:(id)format;
@end

#endif /* PLImageFormat_h */