//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12698.0.0.0.0
//
#ifndef ABVCardCardDAVExporter_h
#define ABVCardCardDAVExporter_h
@import Foundation;

#include "ABVCardExporter.h"

@interface ABVCardCardDAVExporter : ABVCardExporter
/* class methods */
+ (id)copyVCardRepresentationOfRecord:(void *)record withPhoto:(id)photo extraPhotoParameters:(id)parameters;
+ (id)copyVCardRepresentationOfRecord:(void *)record withPhoto:(id)photo extraPhotoParameters:(id)parameters includeWallpaper:(BOOL)wallpaper;
@end

#endif /* ABVCardCardDAVExporter_h */