//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSTransactionLogTaskHandlerAccountInfo_h
#define IDSTransactionLogTaskHandlerAccountInfo_h
@import Foundation;

@class ENAccountIdentity, NSDictionary, NSString;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject

@property (readonly, nonatomic) ENAccountIdentity *accountIdentity;
@property (readonly, nonatomic) NSDictionary *aliasToAccountsMap;
@property (readonly, nonatomic) NSString *serviceName;

/* instance methods */
- (id)initWithAccountIdentity:(id)identity aliasToAccountsMap:(id)map serviceName:(id)name;
- (id)accountForAlias:(id)alias;
@end

#endif /* IDSTransactionLogTaskHandlerAccountInfo_h */