//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDocumentFileLocation_h
#define WFDocumentFileLocation_h
@import Foundation;

#include "WFFileProviderLocation.h"

@interface WFDocumentFileLocation : WFFileProviderLocation
/* class methods */
+ (id)subpathFromURL:(id)url item:(id)item;

/* instance methods */
- (id)resolveLocationWithError:(id *)error;
- (BOOL)shouldShowUsersDuringDisplay:(id)display;
@end

#endif /* WFDocumentFileLocation_h */