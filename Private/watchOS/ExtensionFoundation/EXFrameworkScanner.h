//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXFrameworkScanner_h
#define EXFrameworkScanner_h
@import Foundation;

#include "NSOperation.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;

@interface EXFrameworkScanner : NSOperation

@property (retain) NSMutableDictionary *_combinedExtensionSDK;
@property (retain) NSMutableDictionary *_combinedAppleInternalExtensionSDK;
@property (retain) NSMutableArray *_extensions;
@property (retain) NSMutableArray *_appleInternalExtensions;
@property (readonly) NSURL *sourceURL;
@property (readonly, @dynamic) NSDictionary *combinedExtensionSDK;
@property (readonly, @dynamic) NSDictionary *combinedAppleInternalExtensionSDK;
@property (readonly, @dynamic) NSArray *extensionPaths;
@property (readonly, @dynamic) NSArray *appleInternalExtensionPaths;

/* class methods */
+ (id)frameworkPaths;
+ (id)rootURL;

/* instance methods */
- (id)initWithSourceURL:(id)url;
- (BOOL)isCatalystSupportURL:(id)url;
- (BOOL)isAppleInternalURL:(id)url;
- (void)enumerateBundlesWithPathExtension:(id)extension atURL:(id)url block:(id /* block */)block;
- (void)enumerateAppexptAtURL:(id)url block:(id /* block */)block;
- (void)enumerateFrameworksBundlesWithFrameworkURL:(id)url block:(id /* block */)block;
- (void)processExtensionSDKFromBundle:(struct __CFBundle *)bundle;
- (void)processExtensionSDKFromFile:(id)file;
- (void)processExtensionSDK:(id)sdk declaringURL:(id)url;
- (void)processExtensionsFromBundle:(struct __CFBundle *)bundle;
- (void)processExtensionsInDirectory:(id)directory;
- (void)main;
@end

#endif /* EXFrameworkScanner_h */