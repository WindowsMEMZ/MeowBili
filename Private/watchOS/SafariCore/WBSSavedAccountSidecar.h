//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSavedAccountSidecar_h
#define WBSSavedAccountSidecar_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "WBSPasswordWarningHideMarker.h"
#include "WBSSavedAccountSidecar-Protocol.h"
#include "WBSSavedAccountSidecarInternal-Protocol.h"
#include "WBSTOTPGenerator.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURLProtectionSpace;

@interface WBSSavedAccountSidecar : NSObject<WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar> {
  /* instance variables */
  NSDictionary *_originalKeychainDictionary;
}

@property (copy, nonatomic) NSString *customTitle;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (readonly, nonatomic) NSDictionary *contextSpecificData;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user protectionSpace:(id)space;
- (id)initWithUser:(id)user protectionSpace:(id)space dictionaryRepresentation:(id)representation;
- (void)setLastUsedDate:(id)date forContext:(id)context;
- (id)lastUsedDateForContext:(id)context;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WBSSavedAccountSidecar_h */