//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef NSFileManager_WFFileRepresentation_h
#define NSFileManager_WFFileRepresentation_h
@import Foundation;

#include "WFRepresentation.h"

@class NSData, NSDate, NSString, NSURL, WFFileType;

@interface NSFileManager (WFFileRepresentation)
/* instance methods */
- (BOOL)wf_removeExtendedAttributeName:(id)name ofItemAtURL:(id)url;
@end

#endif /* NSFileManager_WFFileRepresentation_h */