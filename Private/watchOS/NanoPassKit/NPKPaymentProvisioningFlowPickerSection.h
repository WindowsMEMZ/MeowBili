//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningFlowPickerSection_h
#define NPKPaymentProvisioningFlowPickerSection_h
@import Foundation;

@class NSMutableArray, NSNumber, NSString;

@interface NPKPaymentProvisioningFlowPickerSection : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;
@property (readonly, copy, nonatomic) NSMutableArray *items;
@property (readonly, copy, nonatomic) NSNumber *productType;
@property (readonly, nonatomic) BOOL isTransitSection;
@property (readonly, nonatomic) BOOL isPaymentSection;
@property (readonly, nonatomic) BOOL isEMoneySection;
@property (readonly, nonatomic) BOOL isAppleBalanceSection;

/* class methods */
+ (id)sectionWithTitle:(id)title productType:(id)type;
+ (id)sectionWithTitle:(id)title productType:(id)type items:(id)items;
+ (id)sectionWithTitle:(id)title footer:(id)footer productType:(id)type;
+ (id)sectionWithTitle:(id)title footer:(id)footer productType:(id)type items:(id)items;

/* instance methods */
- (id)description;
@end

#endif /* NPKPaymentProvisioningFlowPickerSection_h */