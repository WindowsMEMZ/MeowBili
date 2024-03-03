//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITypologyLogPersisting_Protocol_h
#define TITypologyLogPersisting_Protocol_h
@import Foundation;

@protocol TITypologyLogPersisting 

@property (readonly, nonatomic) unsigned long long typologyLogVersion;
@property (readonly, nonatomic) unsigned long long traceLogVersion;
@property (readonly, nonatomic) NSString *recommendedTypologyLogFilename;
@property (readonly, nonatomic) NSString *recommendedTraceLogFilename;

/* class methods */
+ (id)typologyLogFromTypologyLogFile:(id)file andTraceLogFile:(id)file error:(id *)error;
+ (BOOL)isTypologyLogFilename:(id)filename;
+ (BOOL)isTraceLogFilename:(id)filename;
+ (id)traceLogFilenameFromTypologyLogFilename:(id)filename;
+ (id)typologyLogFilenameFromTraceLogFilename:(id)filename;
+ (id)traceLogURLFromTypologyLogURL:(id)url;
+ (id)typologyLogURLFromTraceLogURL:(id)url;
/* instance methods */
- (BOOL)writeToTypologyLogFile:(id)file andTraceLogFile:(id)file withAccessibilityInfo:(id)info error:(id *)error;
- (id)propertyList;
- (id)propertyListWithTrace;
- (id)trace;
- (id)filename;
@end

#endif /* TITypologyLogPersisting_Protocol_h */