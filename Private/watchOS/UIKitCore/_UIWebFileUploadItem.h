//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWebFileUploadItem_h
#define _UIWebFileUploadItem_h
@import Foundation;

@class NSString;

@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath;

/* instance methods */
- (id)initWithFilePath:(id)path;
- (void)dealloc;
- (id)displayImage;
- (BOOL)isVideo;
@end

#endif /* _UIWebFileUploadItem_h */