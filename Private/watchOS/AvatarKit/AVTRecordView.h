//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTRecordView_h
#define AVTRecordView_h
@import Foundation;

#include "AVTView.h"

@protocol AVTRecordViewDelegate;

@interface AVTRecordView : AVTView

@property (weak, nonatomic) NSObject<AVTRecordViewDelegate> *recordDelegate;
@property (readonly, nonatomic) BOOL recording;
@property (readonly, nonatomic) BOOL previewing;
@property (nonatomic) BOOL mute;
@property (nonatomic) float maxRecordingDuration;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame options:(id)options;
- (id)initWithCoder:(id)coder;
- (void)startRecording;
- (void)cancelRecording;
- (void)stopRecording;
- (void)startPreviewing;
- (void)playPreviewOnce;
- (void)stopPreviewing;
- (BOOL)isRecording;
- (BOOL)isPreviewing;
- (BOOL)exportMovieToURL:(id)url options:(id)options completionHandler:(id /* block */)handler;
@end

#endif /* AVTRecordView_h */