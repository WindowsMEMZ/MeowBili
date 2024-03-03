//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDynamicTemplateLayout_h
#define PKDynamicTemplateLayout_h
@import Foundation;

@class NSMutableDictionary, NSString;

@interface PKDynamicTemplateLayout : NSObject {
  /* instance variables */
  NSMutableDictionary *_layoutStrings;
  NSMutableDictionary *_layoutImages;
  NSMutableDictionary *_layoutLinks;
}

@property (readonly, nonatomic) NSString *templateIdentifier;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)_initWithLayoutDictionary:(id)dictionary;
- (id)layoutStrings;
- (id)layoutImages;
- (id)layoutLinks;
- (id)anyLayoutStringNamed:(id)named;
- (id)anyLayoutImageNamed:(id)named;
- (id)anyLayoutLinkNamed:(id)named;
- (id)layoutStringNamed:(id)named passingTest:(id /* block */)test;
- (id)layoutImageNamed:(id)named passingTest:(id /* block */)test;
- (id)layoutLinkNamed:(id)named passingTest:(id /* block */)test;
@end

#endif /* PKDynamicTemplateLayout_h */