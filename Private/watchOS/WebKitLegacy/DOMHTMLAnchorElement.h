//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMHTMLAnchorElement_h
#define DOMHTMLAnchorElement_h
@import Foundation;

#include "DOMHTMLElement.h"

@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (copy) NSString *charset;
@property (copy) NSString *coords;
@property (copy) NSString *hreflang;
@property (copy) NSString *name;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (copy) NSString *type;
@property (copy) NSString *accessKey;
@property (readonly, copy) NSString *text;
@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *href;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *search;
@property (readonly, copy) NSString *hashName;

/* instance methods */
- (id)download;
- (void)setDownload:(id)download;
- (id)ping;
- (void)setPing:(id)ping;
- (id)relList;
- (id)origin;
@end

#endif /* DOMHTMLAnchorElement_h */