//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactDataSource_Internal_Protocol_h
#define NCABContactDataSource_Internal_Protocol_h
@import Foundation;

@protocol NCABContactDataSource_Internal <CNContactDataSource>

@property (readonly, nonatomic) NSString *preferredForNameMeContactIdentifier;

/* instance methods */
- (void)reloadAsynchronously;
- (id)preferredForNameMeContactWithKeysToFetch:(id)fetch;
- (BOOL)setMeContact:(id)contact error:(id *)error;
@end

#endif /* NCABContactDataSource_Internal_Protocol_h */