//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDWebContentParserResults_h
#define EDWebContentParserResults_h
@import Foundation;

@class NSArray, NSDictionary, NSString;

@interface EDWebContentParserResults : NSObject

@property (copy, nonatomic) NSDictionary *dataDetectionResults;
@property (copy, nonatomic) NSArray *remoteContentLinks;
@property (copy, nonatomic) NSArray *richLinkResults;
@property (copy, nonatomic) NSString *oneTimeCode;

/* instance methods */
@end

#endif /* EDWebContentParserResults_h */