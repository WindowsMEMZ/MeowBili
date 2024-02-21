//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPMADServiceImageProcessingTaskBatch_h
#define VCPMADServiceImageProcessingTaskBatch_h
@import Foundation;

#include "VCPMABaseTask.h"

@class NSDictionary, NSString, PHPhotoLibrary;

@interface VCPMADServiceImageProcessingTaskBatch : VCPMABaseTask {
  /* instance variables */
  NSDictionary *_requests;
  PHPhotoLibrary *_photolibrary;
  NSString *_clientBundleID;
  NSString *_clientTeamID;
}

@property (retain, nonatomic) NSString *signpostPayload;

/* class methods */
+ (id)taskWithCloudIdentifierRequests:(id)requests photoLibrary:(id)library clientBundleID:(id)id clientTeamID:(id)id cancelBlock:(id /* block */)block andCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithCloudIdentifierRequests:(id)requests photoLibrary:(id)library clientBundleID:(id)id clientTeamID:(id)id cancelBlock:(id /* block */)block andCompletionHandler:(id /* block */)handler;
- (BOOL)cachesResources;
- (id)assetWithIdentifier:(id)identifier isCloudIdentifier:(BOOL)identifier error:(id *)error;
- (BOOL)run:(id *)run;
@end

#endif /* VCPMADServiceImageProcessingTaskBatch_h */