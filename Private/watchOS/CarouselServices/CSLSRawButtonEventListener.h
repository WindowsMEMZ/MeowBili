//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSRawButtonEventListener_h
#define CSLSRawButtonEventListener_h
@import Foundation;

@protocol CSLSRawButtonEventListenerDelegate;

@interface CSLSRawButtonEventListener : NSObject

@property (readonly, weak, nonatomic) NSObject<CSLSRawButtonEventListenerDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)_sendEvent:(unsigned long long)event forButton:(unsigned long long)button;
@end

#endif /* CSLSRawButtonEventListener_h */