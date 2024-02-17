//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCScreenCaptureManager_h
#define VCScreenCaptureManager_h
@import Foundation;

#include "VCScreenCapturePicker.h"
#include "VCScreenCapturePickerDelegate-Protocol.h"
#include "VCScreenShare.h"

@class NSMutableDictionary, NSString, SCContentFilter, SCStream;
@protocol OS_dispatch_queue;

@interface VCScreenCaptureManager : NSObject<VCScreenCapturePickerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_xpcCommandQueue;
  NSMutableDictionary *_screenShare;
  VCScreenShare *_pickerClientScreenShare;
}

@property (readonly, nonatomic) VCScreenCapturePicker *picker;
@property (readonly, nonatomic) SCContentFilter *contentFilter;
@property (retain, nonatomic) SCStream *screenStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;
+ (BOOL)canScreenSharePrivateContent:(id)content;
+ (long long)contentTypeForFilter:(id)filter;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)getErrorDictionaryFromError:(id)error;
- (void)screenCaptureStartFor:(id)for didSucceed:(BOOL)succeed withError:(id)error;
- (void)screenCaptureStopFor:(id)for didSucceed:(BOOL)succeed withError:(id)error;
- (id)screenShareDictionary:(id)dictionary;
- (id)newCaptureSourceID;
- (BOOL)isPickerClientProcessId:(id)id;
- (id)newScreenShareWithConfig:(id)config pid:(id)pid;
- (void)removePickerClientScreenShare:(id)share;
- (id)stopScreenShare:(id)share;
- (id)stopScreenShareAndNotifyDelegate:(id)delegate;
- (id)startScreenShare:(id)share;
- (id)updateScreenCapture:(id)capture withConfig:(id)config;
- (void)createPicker;
- (void)invalidatePicker;
- (void)registerBlocksForService;
- (void)startPrivacyAccountingInterval:(id)interval;
- (void)endPrivacyAccountingInterval:(id)interval;
- (id)errorForAttributesError:(id)error;
- (id)attributesForContentFilter:(id)filter;
- (id)updateCurrentPickerScreenCapture;
- (BOOL)shouldUpdateFilter:(id)filter;
- (void)picker:(id)picker pickedContentFilter:(id)filter forStream:(id)stream error:(id)error;
@end

#endif /* VCScreenCaptureManager_h */