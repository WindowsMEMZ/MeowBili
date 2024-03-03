//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMenuElement_h
#define UIMenuElement_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UIAction.h"
#include "UIImage.h"
#include "_UIMenuImageOrName-Protocol.h"

@class NSAttributedString, NSString;

@interface UIMenuElement : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_accessibilityIdentifier;
}

@property (copy, nonatomic) NSString *_internalIdentifier;
@property (readonly, nonatomic) BOOL _isLeaf;
@property (readonly, nonatomic) BOOL _isLoadingPlaceholder;
@property (readonly, nonatomic) NSObject<_UIMenuImageOrName> *_imageOrName;
@property (copy, nonatomic) UIAction *_accessoryAction;
@property (nonatomic) unsigned long long _preferredDisplayMode;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title image:(id)image imageName:(id)name;
- (void)encodeWithCoder:(id)coder;
- (void)_acceptMenuVisit:(id /* block */)visit commandVisit:(id /* block */)visit actionVisit:(id /* block */)visit deferredElementVisit:(id /* block */)visit;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)visit commandVisit:(id /* block */)visit actionVisit:(id /* block */)visit;
- (void)_acceptMenuVisit:(id /* block */)visit leafVisit:(id /* block */)visit;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)visit leafVisit:(id /* block */)visit;
- (id)_immutableCopy;
- (id)_mutableCopy;
- (void)_setTitle:(id)title;
- (void)_setSubtitle:(id)subtitle;
- (void)_setImage:(id)image;
- (void)_willBePreparedForInitialDisplay:(id)display;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)accessibilityIdentifier;
- (void)setAccessibilityIdentifier:(id)identifier;
- (void)_setPreferredDisplayMode:(unsigned long long)mode;
@end

#endif /* UIMenuElement_h */