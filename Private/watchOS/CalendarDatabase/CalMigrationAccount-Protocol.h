//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CalMigrationAccount_Protocol_h
#define CalMigrationAccount_Protocol_h
@import Foundation;

@protocol CalMigrationAccount <CalMigrationReadOnlyAccount>

@property (readonly, nonatomic) BOOL dirty;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (nonatomic) BOOL provisionedForCalendarsDataClass;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL authenticated;
@property (retain, nonatomic) NSString *username;

/* instance methods */
- (id)accountPropertyForKey:(id)key;
- (void)setAccountProperty:(id)property forKey:(id)key;
- (void)setAuthenticationTypeParent;
- (void)setAuthenticationTypeNone;
- (void)setPassword:(id)password;
@end

#endif /* CalMigrationAccount_Protocol_h */