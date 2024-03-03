//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIPreferenceValueKVOObserver_h
#define AAUIPreferenceValueKVOObserver_h
@import Foundation;

@class PSSpecifier;

@interface AAUIPreferenceValueKVOObserver : NSObject

@property (retain, nonatomic) PSSpecifier *specifier;
@property (copy, nonatomic) id /* block */ changeBlock;

/* class methods */
+ (id)_enabledKVOKeypath;
+ (id)_valueKVOKeypath;
+ (id)_specifierObservingKeyPaths;

/* instance methods */
- (id)initWithChangeBlock:(id /* block */)block;
- (void)dealloc;
- (void)_registerKVOObservation;
- (void)_unregisterKVOObservation;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* AAUIPreferenceValueKVOObserver_h */