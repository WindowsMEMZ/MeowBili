//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDObjectAuthorizationRequest_h
#define _HDObjectAuthorizationRequest_h
@import Foundation;

@class HKObjectAuthorizationPromptSessionMetadata, NSArray, NSUUID;

@interface _HDObjectAuthorizationRequest : NSObject {
  /* instance variables */
  BOOL _promptWithAllSamples;
  id /* block */ _completion;
  NSUUID *_identifier;
  NSArray *_samples;
  HKObjectAuthorizationPromptSessionMetadata *_metadata;
  NSArray *_authorizationRecords;
  NSUUID *_sessionIdentifier;
}

/* instance methods */
@end

#endif /* _HDObjectAuthorizationRequest_h */