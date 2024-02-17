//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSCloudStorageOffersManager_h
#define PSCloudStorageOffersManager_h
@import Foundation;

#include "CommerceRemoteUIDelegateDelegate-Protocol.h"

@class CommerceRemoteUIDelegate, NSString;
@protocol PSCloudStorageOffersManagerDelegate;

@interface PSCloudStorageOffersManager : NSObject<CommerceRemoteUIDelegateDelegate> {
  /* instance variables */
  CommerceRemoteUIDelegate *_commerceDelegate;
}

@property (weak, nonatomic) NSObject<PSCloudStorageOffersManagerDelegate> *delegate;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (nonatomic) BOOL shouldOfferFamilySharePlansOnly;
@property (nonatomic) BOOL shouldOfferDeviceOffers;
@property (nonatomic) BOOL skipRetryWithoutToken;
@property (nonatomic) BOOL skipCompletionAlert;
@property (nonatomic) BOOL supportsModernAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_setupFlowWithNavigationController:(id)controller modally:(BOOL)modally;
- (void)beginFlowWithNavigationController:(id)controller modally:(BOOL)modally;
- (void)beginFlowWithNavigationController:(id)controller purchaseToken:(id)token buyParameters:(id)parameters requestHeaders:(id)headers modally:(BOOL)modally;
- (void)cancelLoad;
- (void)dealloc;
- (void)commerceDelegate:(id)delegate willPresentObjectModel:(id)model page:(id)page;
- (void)commerceDelegate:(id)delegate loadDidFailWithError:(id)error;
- (void)commerceDelegateDidCancel:(id)cancel;
- (void)commerceDelegate:(id)delegate didCompleteWithError:(id)error;
@end

#endif /* PSCloudStorageOffersManager_h */