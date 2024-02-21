//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSConfigurationDownloader_h
#define WBSConfigurationDownloader_h
@import Foundation;

#include "WBSConfigurationDataTransformer.h"

@class NSString, NSURL, NSURLSessionDataTask;

@interface WBSConfigurationDownloader : NSObject {
  /* instance variables */
  WBSConfigurationDataTransformer *_transformer;
  NSURLSessionDataTask *_dataTask;
  NSURL *_baseURL;
  NSString *_fileName;
  BOOL _isCancelled;
}

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithFileName:(id)name dataTransformer:(id)transformer;
- (void)downloadConfigurationWithCompletionHandler:(id /* block */)handler;
- (void)cancel;
@end

#endif /* WBSConfigurationDownloader_h */