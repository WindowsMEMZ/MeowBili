//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.11.3.0.0
//
#ifndef VRXVisualResponse_Protocol_h
#define VRXVisualResponse_Protocol_h
@import Foundation;

@protocol VRXVisualResponse <NSObject>

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *responseViewId;
@property (nonatomic) long long currentIdiom;
@property (nonatomic) double snippetWidth;
@property (weak, nonatomic) NSObject<VRXInteractionDelegate> *interactionDelegate;
@property (nonatomic) long long backgroundMaterial;
@property (readonly, nonatomic) NSArray *aceCommands;
@property (readonly, nonatomic) BOOL containsComponentsWithAction;
@property (readonly, nonatomic) BOOL requestsKeyWindow;
@property (nonatomic) BOOL isRedacted;
@property (nonatomic) long long visualResponseLocation;

/* instance methods */
- (BOOL)showConversationAreaKeylines;
- (void)updateSharedState:(id)state;
- (void)updateSharedStateData:(id)data;
- (void)setAsrText:(id)text;
- (void)setPlayerState:(long long)state aceId:(id)id;
- (void)postSiriEvent:(long long)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setIsInAmbient:(BOOL)ambient withScaleFactor:(double)factor;
- (void)setInitialFocusIndex:(long long)index;
@end

#endif /* VRXVisualResponse_Protocol_h */