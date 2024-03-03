//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalIDEditorCellHeightChangeDelegate_Protocol_h
#define HKMedicalIDEditorCellHeightChangeDelegate_Protocol_h
@import Foundation;

@protocol HKMedicalIDEditorCellHeightChangeDelegate 
/* instance methods */
- (void)medicalIDEditorCell:(id)cell didChangeHeight:(double)height keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)medicalIDEditorCellDidBeginEditing:(id)editing keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)medicalIDEditorCellDidChangeSelection:(id)selection keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
@end

#endif /* HKMedicalIDEditorCellHeightChangeDelegate_Protocol_h */