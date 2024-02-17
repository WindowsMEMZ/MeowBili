//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningCardOnFileCell_h
#define NPKPaymentProvisioningCardOnFileCell_h
@import Foundation;

#include "NPKListDetailSensitiveDetailPlatterCell.h"

@class PKPaymentCredential;

@interface NPKPaymentProvisioningCardOnFileCell : NPKListDetailSensitiveDetailPlatterCell

@property (retain, nonatomic) PKPaymentCredential *credential;

/* class methods */
+ (id)_detailTextForCredential:(id)credential;
+ (id)_titleTextForCredential:(id)credential;
+ (id)_attributedStringForString:(id)string;

/* instance methods */
@end

#endif /* NPKPaymentProvisioningCardOnFileCell_h */