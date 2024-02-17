//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REScriptBuffer_Protocol_h
#define REScriptBuffer_Protocol_h
@import Foundation;

@protocol REScriptBuffer <NSObject>

@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) unsigned short current;

/* instance methods */
- (void)next;
- (id)contentForLine:(unsigned long long)line;
- (BOOL)isEmpty;
@end

#endif /* REScriptBuffer_Protocol_h */