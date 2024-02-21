//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WBSSafariCyclerConfigurationCommand_h
#define _WBSSafariCyclerConfigurationCommand_h
@import Foundation;

@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *help;
@property (copy, nonatomic) NSString *usage;
@property (nonatomic) unsigned long long minimumArgumentCount;
@property (nonatomic) unsigned long long maximumArgumentCount;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name help:(id)help;
- (void)setArgumentCount:(unsigned long long)count;
- (BOOL)invokeWithParameters:(id)parameters;
@end

#endif /* _WBSSafariCyclerConfigurationCommand_h */