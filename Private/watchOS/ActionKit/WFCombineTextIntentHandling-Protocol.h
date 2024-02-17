//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCombineTextIntentHandling_Protocol_h
#define WFCombineTextIntentHandling_Protocol_h
@import Foundation;

@protocol WFCombineTextIntentHandling <NSObject>
/* instance methods */
- (void)handleCombineText:(id)text completion:(id /* block */)completion;
- (void)resolveTextForCombineText:(id)text withCompletion:(id /* block */)completion;
- (void)resolveSeparatorForCombineText:(id)text withCompletion:(id /* block */)completion;
- (void)resolveCustomSeparatorForCombineText:(id)text withCompletion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmCombineText:(id)text completion:(id /* block */)completion;
@end

#endif /* WFCombineTextIntentHandling_Protocol_h */