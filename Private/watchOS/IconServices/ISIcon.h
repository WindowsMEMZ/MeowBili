//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISIcon_h
#define ISIcon_h
@import Foundation;

#include "CALayerDelegate-Protocol.h"
#include "ISIconManager.h"
#include "ISScalableCompositorResource-Protocol.h"

@class IFSymbol, NSArray, NSMutableDictionary, NSString;
@protocol ISIconIdentity;

@interface ISIcon : NSObject<ISScalableCompositorResource, CALayerDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<ISIconIdentity> *_identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) ISIconManager *manager;
@property (retain) NSMutableDictionary *prepareISIconDigestToSignpostIDs;
@property (readonly, nonatomic) NSArray *decorations;
@property (readonly, @dynamic, nonatomic) IFSymbol *symbol;

/* class methods */
+ (id)templateTypeForType:(id)type;
+ (id)templateTypeForTag:(id)tag tagClass:(id)class;
+ (struct _LIIconVariantInfo { int x0; struct CGSize { double x0; double x1; } x1; double x2; unsigned long long x3; char * x4; } *)variantInfoForSet:(unsigned long long)set count:(unsigned long long *)count;
+ (int)findVariantFromSet:(unsigned long long)set deviceIdiom:(unsigned long long)idiom size:(struct CGSize { double x0; double x1; })size scale:(double)scale;
+ (id)sizesFromSet:(unsigned long long)set;
+ (BOOL)variant:(int)variant isMemberOfSet:(unsigned long long)set;
+ (id)layerUpdateQueue;
+ (const char *)_AttachedResourceInfoKey;
+ (BOOL)writeCustomIcon:(id)icon toURL:(id)url error:(id *)error;
+ (unsigned long long)behaviourRevision;
+ (id)applicationIcon;
+ (id)genericApplicationIcon;
+ (id)genericDocumentIcon;
+ (id)transparentIcon;
+ (id)allocWithZone:(struct _NSZone *)zone;

/* instance methods */
- (void)displayLayer:(id)layer;
- (id)imageForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (id)_prepareImageForImageDescriptor:(id)descriptor;
- (id)_init;
- (unsigned long long)variantOptions;
- (unsigned long long)badgeOptions;
- (id)iconWithDecorations:(id)decorations;
- (struct CGImage *)CGImageForImageDescriptor:(id)descriptor;
- (struct CGImage *)CGImageForDescriptor:(id)descriptor;
- (void)getCGImageForImageDescriptor:(id)descriptor completion:(id /* block */)completion;
- (double)_aspectRatio;
- (id)_beginPrepareISIconSignpost:(id)signpost funcName:(const char *)name;
- (void)_eventPrepareISIconSignpost:(id)signpost message:(id)message;
- (void)_endPrepareISIconSignpost:(id)signpost;
- (void)_prepareImagesForImageDescriptors:(id)descriptors;
- (void)prepareImagesForImageDescriptors:(id)descriptors;
- (void)prepareImagesForDescriptors:(id)descriptors;
- (id)prepareImageForDescriptor:(id)descriptor;
- (id)imageForImageDescriptor:(id)descriptor;
- (id)_imageForSymbolImageDescriptor:(id)descriptor;
- (id)imageForDescriptor:(id)descriptor;
@end

#endif /* ISIcon_h */