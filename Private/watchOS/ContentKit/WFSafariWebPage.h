//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSafariWebPage_h
#define WFSafariWebPage_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFNaming-Protocol.h"

@class NSData, NSString, NSURL;

@interface WFSafariWebPage : NSObject<NSCopying, WFNaming, NSSecureCoding>

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, copy, nonatomic) NSString *selectionText;
@property (readonly, copy, nonatomic) NSData *selectionHTML;
@property (readonly, copy, nonatomic) NSData *documentHTML;
@property (readonly, copy, nonatomic) NSString *wfName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithURL:(id)url pageTitle:(id)title documentHTML:(id)html;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFSafariWebPage_h */