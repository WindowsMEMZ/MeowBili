//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowNoInputBehavior_Protocol_h
#define WFWorkflowNoInputBehavior_Protocol_h
@import Foundation;

@protocol WFWorkflowNoInputBehavior <NSObject>
/* class methods */
+ (id)behaviorName;
+ (BOOL)resolvesInput;
/* instance methods */
- (void)resolveWithUserInterface:(id)interface runningDelegate:(id)delegate completionHandler:(id /* block */)handler;
- (id)initWithSerializedRepresentation:(id)representation;
- (id)serializedRepresentation;
@end

#endif /* WFWorkflowNoInputBehavior_Protocol_h */