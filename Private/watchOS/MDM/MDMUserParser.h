//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef MDMUserParser_h
#define MDMUserParser_h
@import Foundation;

#include "MDMParser.h"

@interface MDMUserParser : MDMParser
/* instance methods */
- (id)_allCommands;
- (id)_allSettingsItems;
- (id)_profileList:(id)list;
- (id)_installProfile:(id)profile accessRights:(unsigned long long)rights;
- (id)_removeProfile:(id)profile;
- (id)_declarativeManagement:(id)management;
- (id)_restrictions:(id)_restrictions;
- (id)_allowedDeviceQueriesForAccessRights:(unsigned long long)rights;
- (void)_performQuery:(id)query withResultDictionary:(id)dictionary;
- (void)_sendAnalyticsMDMCommandEventWithRequest:(id)request response:(id)response;
- (id)_originator;
- (void)_userConfigured:(id)configured assertion:(id)assertion completionBlock:(id /* block */)block;
@end

#endif /* MDMUserParser_h */