//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef KSHTMLWriter_h
#define KSHTMLWriter_h
@import Foundation;

#include "KSXMLWriter.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface KSHTMLWriter : KSXMLWriter {
  /* instance variables */
  BOOL _isXHTML;
  NSMutableSet *_IDs;
  NSMutableArray *_classNames;
}

@property (copy, nonatomic) NSString *docType;

/* class methods */
+ (BOOL)isDocTypeXHTML:(id)xhtml;

/* instance methods */
- (id)initWithOutputWriter:(id)writer;
- (id)initWithOutputWriter:(id)writer docType:(id)type encoding:(unsigned long long)encoding;
- (void)startDocumentWithDocType:(id)type encoding:(unsigned long long)encoding;
- (BOOL)isXHTML;
- (id)currentElementClassName;
- (void)pushClassName:(id)name;
- (void)pushAttribute:(id)attribute value:(id)value;
- (id)currentAttributes;
- (BOOL)hasCurrentAttributes;
- (void)writeHTMLString:(id)htmlstring;
- (void)writeHTMLFormat:(id)htmlformat;
- (void)startElement:(id)element className:(id)name;
- (void)startElement:(id)element idName:(id)name className:(id)name;
- (BOOL)isIDValid:(id)idvalid;
- (void)writeLineBreak;
- (void)startAnchorElementWithHref:(id)href title:(id)title target:(id)target rel:(id)rel;
- (void)writeImageWithSrc:(id)src alt:(id)alt width:(id)width height:(id)height;
- (void)writeLinkWithHref:(id)href type:(id)type rel:(id)rel title:(id)title media:(id)media;
- (void)writeLinkToStylesheet:(id)stylesheet title:(id)title media:(id)media;
- (void)writeJavascriptWithSrc:(id)src encoding:(unsigned long long)encoding;
- (void)writeJavascriptWithSrc:(id)src charset:(id)charset;
- (void)writeJavascript:(id)javascript useCDATA:(BOOL)cdata;
- (void)startJavascriptElementWithSrc:(id)src;
- (void)startJavascriptCDATA;
- (void)endJavascriptCDATA;
- (void)writeParamElementWithName:(id)name value:(id)value;
- (void)writeStyleElementWithCSSString:(id)cssstring;
- (void)startStyleElementWithType:(id)type;
- (BOOL)topElementIsList;
- (BOOL)elementCanBeEmpty:(id)empty;
- (BOOL)canWriteElementInline:(id)inline;
- (BOOL)validateElement:(id)element;
- (id)validateAttribute:(id)attribute value:(id)value ofElement:(id)element;
- (void)startElement:(id)element writeInline:(BOOL)inline;
- (void)closeEmptyElementTag;
@end

#endif /* KSHTMLWriter_h */