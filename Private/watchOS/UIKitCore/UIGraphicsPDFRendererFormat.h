//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIGraphicsPDFRendererFormat_h
#define UIGraphicsPDFRendererFormat_h
@import Foundation;

#include "UIGraphicsRendererFormat.h"

@class NSDictionary, NSMutableData, NSURL;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat

@property (retain) NSURL *outputURL;
@property (retain) NSMutableData *pdfData;
@property (copy, nonatomic) NSDictionary *documentInfo;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UIGraphicsPDFRendererFormat_h */