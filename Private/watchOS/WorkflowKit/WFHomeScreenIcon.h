//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHomeScreenIcon_h
#define WFHomeScreenIcon_h
@import Foundation;

@class NSData, WFWorkflowIcon;

@interface WFHomeScreenIcon : NSObject

@property (readonly, nonatomic) WFWorkflowIcon *workflowIcon;
@property (readonly, nonatomic) NSData *customImageData;

/* instance methods */
- (id)initWithWorkflowIcon:(id)icon customImageData:(id)data;
@end

#endif /* WFHomeScreenIcon_h */