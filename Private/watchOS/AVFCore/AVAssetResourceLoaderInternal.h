//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVAssetResourceLoaderInternal_h
#define AVAssetResourceLoaderInternal_h
@import Foundation;

#include "AVAssetClientURLRequestHelper.h"
#include "AVAssetCustomURLBridgeForNSURLSession.h"
#include "AVWeakReference.h"

@class NSMutableDictionary, NSOperationQueue, NSURLSession;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoaderInternal : NSObject {
  /* instance variables */
  AVAssetClientURLRequestHelper *URLRequestHelper;
  AVWeakReference *weakReferenceToAsset;
  NSObject<OS_dispatch_queue> *stateQueue;
  AVWeakReference *weakReferenceToDelegate;
  NSObject<OS_dispatch_queue> *delegateQueue;
  struct OpaqueFigCustomURLLoader * customURLLoader;
  struct OpaqueFigCustomURLHandler * customURLHandler;
  struct OpaqueFigCustomURLHandler * authHandler;
  struct OpaqueFigCustomURLHandler * contentKeySessionCustomURLHandler;
  int loadingCancelled;
  NSMutableDictionary *pendingRequests;
  NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
  NSMutableDictionary *contentInformationCache;
  BOOL preloadsEligibleContentKeys;
  NSURLSession *URLSession;
  AVAssetCustomURLBridgeForNSURLSession *bridgeBetweenHandlerAndSession;
  NSOperationQueue *URLSessionOperationQueue;
}

@end

#endif /* AVAssetResourceLoaderInternal_h */