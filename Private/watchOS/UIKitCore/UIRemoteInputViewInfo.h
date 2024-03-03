//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIRemoteInputViewInfo_h
#define UIRemoteInputViewInfo_h
@import Foundation;

@class RTIInputViewInfo;

@interface UIRemoteInputViewInfo : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (nonatomic) int processId;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) BOOL shouldShowDockView;
@property (readonly, nonatomic) RTIInputViewInfo *rtiInputViewInfo;

/* instance methods */
- (id)description;
@end

#endif /* UIRemoteInputViewInfo_h */