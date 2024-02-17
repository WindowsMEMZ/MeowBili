//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFKeychainFetchResult_h
#define _SFKeychainFetchResult_h
@import Foundation;

@class NSError;

@interface _SFKeychainFetchResult : NSObject {
  /* instance variables */
  id _keychainFetchResultInternal;
}

@property (readonly) long long resultType;
@property (readonly) id value;
@property (readonly) NSError *error;

/* class methods */
+ (id)fetchResultWithValue:(id)value;
+ (id)fetchResultWithError:(id)error;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)initWithError:(id)error;
- (void)fetchValueWithAuthenticationContext:(id)context resultHandler:(id /* block */)handler;
@end

#endif /* _SFKeychainFetchResult_h */