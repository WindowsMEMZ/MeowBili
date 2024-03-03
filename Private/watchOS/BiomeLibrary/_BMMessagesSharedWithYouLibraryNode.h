//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef _BMMessagesSharedWithYouLibraryNode_h
#define _BMMessagesSharedWithYouLibraryNode_h
@import Foundation;

#include "_BMLibraryNode.h"

@interface _BMMessagesSharedWithYouLibraryNode : _BMLibraryNode
/* class methods */
+ (id)Feedback;
+ (id)storeConfigurationForFeedback;
+ (id)syncPolicyForFeedback;
+ (id)configurationForFeedback;
+ (id)identifier;
+ (id)streamNames;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)name;
+ (id)sublibraries;
@end

#endif /* _BMMessagesSharedWithYouLibraryNode_h */