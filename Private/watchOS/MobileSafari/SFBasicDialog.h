//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFBasicDialog_h
#define SFBasicDialog_h
@import Foundation;

#include "SFDialog.h"

@class NSArray, NSString, UIImage;

@interface SFBasicDialog : SFDialog

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultText;
@property (copy, nonatomic) NSString *textPlaceholder;
@property (copy, nonatomic) NSString *defaultPassword;
@property (copy, nonatomic) NSString *passwordPlaceholder;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL alertControllerPresentsAsActionSheet;
@property (nonatomic) BOOL shouldHideWebContent;
@property (nonatomic) BOOL canceledOnProvisionalNavigation;
@property (nonatomic) BOOL canceledOnCommittedNavigation;
@property (nonatomic) BOOL canceledOnApplicationBackground;
@property (copy, nonatomic) NSArray *additionalCancellationExemptions;
@property (nonatomic) BOOL completionHandlerBlocksWebProcess;
@property (nonatomic) long long presentationStyle;
@property (copy, nonatomic) id /* block */ completionHandler;

/* instance methods */
- (id)init;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)handler;
- (void)didCompleteWithResponse:(id)response;
@end

#endif /* SFBasicDialog_h */