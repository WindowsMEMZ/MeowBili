//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWKAutocorrectionContext_h
#define UIWKAutocorrectionContext_h
@import Foundation;

@class NSString;

@interface UIWKAutocorrectionContext : NSObject

@property (copy, nonatomic) NSString *contextBeforeSelection;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *contextAfterSelection;
@property (copy, nonatomic) NSString *markedText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeInMarkedText;

/* instance methods */
- (void)dealloc;
@end

#endif /* UIWKAutocorrectionContext_h */