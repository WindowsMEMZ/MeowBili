//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BUOSStateHandler_h
#define BUOSStateHandler_h
@import Foundation;

@interface BUOSStateHandler : NSObject

@property (nonatomic) unsigned long long osStateHandle;

/* instance methods */
- (id)initWithTitle:(id)title block:(id /* block */)block;
- (id)initWithTitle:(id)title queue:(id)queue block:(id /* block */)block;
- (void)dealloc;
@end

#endif /* BUOSStateHandler_h */