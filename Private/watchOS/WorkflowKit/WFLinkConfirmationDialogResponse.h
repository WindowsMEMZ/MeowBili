//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkConfirmationDialogResponse_h
#define WFLinkConfirmationDialogResponse_h
@import Foundation;

#include "WFLinkSnippetDialogResponse.h"

@interface WFLinkConfirmationDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, nonatomic) unsigned long long requestResponseCode;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)initWithConfirmationResponseCode:(unsigned long long)code;
- (id)initWithRequestedOpenURL:(id)url;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* WFLinkConfirmationDialogResponse_h */