//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKHTMLParser_h
#define NNMKHTMLParser_h
@import Foundation;

@class NSMutableArray, NSMutableData, NSString;

@interface NNMKHTMLParser : NSObject

@property (retain, nonatomic) NSString *htmlBodyToParse;
@property (nonatomic) unsigned long long encoding;
@property (nonatomic) struct _xmlSAXHandler { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; undefined * x12; undefined * x13; undefined * x14; undefined * x15; undefined * x16; undefined * x17; undefined * x18; undefined * x19; undefined * x20; undefined * x21; undefined * x22; undefined * x23; undefined * x24; undefined * x25; undefined * x26; unsigned int x27; void * x28; undefined * x29; undefined * x30; undefined * x31; } parsingSAXHandler;
@property (nonatomic) struct _xmlParserCtxt { struct _xmlSAXHandler * x0; void * x1; struct _xmlDoc * x2; int x3; int x4; char * x5; char * x6; int x7; int x8; struct _xmlParserInput * x9; int x10; int x11; struct _xmlParserInput * * x12; struct _xmlNode * x13; int x14; int x15; struct _xmlNode * * x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo * x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void * x0; undefined * x1; undefined * x2; struct _xmlNode * x3; int x4; int x5; struct _xmlNode * * x6; unsigned int x7; struct _xmlDoc * x8; int x9; struct _xmlValidState * x10; int x11; int x12; struct _xmlValidState * x13; struct _xmlAutomata * x14; struct _xmlAutomataState * x15; } x25; int x26; int x27; char * x28; char * x29; int x30; int x31; char * * x32; long long x33; long long x34; int x35; int x36; int x37; char * x38; char * x39; char * x40; int * x41; int x42; int x43; int * x44; int x45; struct _xmlParserInput * x46; int x47; int x48; int x49; int x50; void * x51; int x52; int x53; void * x54; int x55; int x56; struct _xmlDict * x57; char * * x58; int x59; int x60; char * x61; char * x62; char * x63; int x64; int x65; int x66; char * * x67; int * x68; struct _xmlStartTag * x69; struct _xmlHashTable * x70; struct _xmlHashTable * x71; int x72; int x73; int x74; int x75; struct _xmlNode * x76; int x77; struct _xmlAttr * x78; struct _xmlError { int x0; int x1; char * x2; int x3; char * x4; int x5; char * x6; char * x7; char * x8; int x9; int x10; void * x11; void * x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo * x83; int x84; int x85; struct _xmlParserNodeInfo * x86; int x87; unsigned long long x88; } * parserContext;
@property (retain, nonatomic) NSMutableData *charactersBuffer;
@property (retain, nonatomic) NSMutableArray *stringAttributesStack;
@property (retain, nonatomic) NSMutableArray *isQuoteElementStack;
@property (nonatomic) unsigned long long currentQuoteLevel;
@property (retain, nonatomic) NSMutableArray *listStack;
@property (nonatomic) unsigned long long currentListLevel;
@property (nonatomic) BOOL isLastCharAddedLineBreak;
@property (retain, nonatomic) NSString *ignoringElementSubtree;
@property (nonatomic) unsigned long long bodyTagStartIndex;
@property (retain, nonatomic) NSString *bodyTagStyle;
@property (nonatomic) unsigned long long currentHeadTagStartIndex;
@property (nonatomic) unsigned long long currentImgTagStartIndex;
@property (retain, nonatomic) NSString *currentImgTagSource;
@property (nonatomic) BOOL containsBlockedElements;
@property (nonatomic) BOOL parsingHead;
@property (nonatomic) BOOL parsingBody;
@property (nonatomic) BOOL cancelled;

/* instance methods */
- (id)init;
- (void)parseHTMLBody:(id)htmlbody encoding:(unsigned long long)encoding;
- (BOOL)isElementBlocked:(id)blocked attributeQueryBlock:(id /* block */)block;
- (BOOL)isErrorTypeBlocked:(char *)blocked;
- (BOOL)isElementIgnorable:(id)ignorable;
- (void)appendImageWithSource:(id)source width:(double)width height:(double)height stringAttributes:(id)attributes;
- (void)appendString:(id)string stringAttributes:(id)attributes;
- (BOOL)caresAboutHTMLContentString;
- (void)processHeadHTMLTagContent:(id)content;
- (void)processBodyHTMLContent:(id)htmlcontent style:(id)style contentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)processImgTagSource:(id)source contentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)_isElementBlocked:(id)blocked attributes:(const char * *)attributes;
- (BOOL)_isErrorBlocked:(struct _xmlError { int x0; int x1; char * x2; int x3; char * x4; int x5; char * x6; char * x7; char * x8; int x9; int x10; void * x11; void * x12; } *)blocked;
- (BOOL)_isElementDisplayedInBlock:(id)block;
- (BOOL)_isElementQuoteElement:(id)element attributes:(const char * *)attributes;
- (BOOL)_isElementLineBreak:(id)break;
- (BOOL)_isElementList:(id)list ordered:(BOOL *)ordered;
- (BOOL)_isElementListItem:(id)item;
- (BOOL)_isElementImage:(id)image;
- (BOOL)_isElementHyperlink:(id)hyperlink;
- (BOOL)_isElementHead:(id)head;
- (BOOL)_isElementBody:(id)body;
- (BOOL)_isElementIgnorable:(id)ignorable;
- (void)_stringAttributeForElement:(id)element attributes:(const char * *)attributes stringAttributeKey:(id *)key stringAttributeValue:(id *)value;
- (id)_stringAttributesForStyleAttribute:(id)attribute;
- (id)_stringAttributeValueForCSSStyleName:(id)name inStyleAttribute:(id)attribute;
- (unsigned long long)_textAlignmentFromString:(id)string;
- (unsigned long long)_writingDirectionFromString:(id)string;
- (void)_stringAttributeForHyperlink:(id)hyperlink attributes:(const char * *)attributes stringAttributeKey:(id *)key stringAttributeValue:(id *)value;
- (id)_valueForAttributeNamed:(id)named inAttributes:(const char * *)attributes;
- (void)_enumerateAttributes:(const char * *)attributes withBlock:(id /* block */)block;
- (id)_topStringAttributes;
- (void)_pushStringAttributes:(id)attributes;
- (void)_popStringAttributes;
- (void)_appendLineBreak;
- (void)_requireNewLine;
- (void)_appendCharacters:(const char *)characters length:(int)length;
- (void)_flushCharactersIfNeeded;
- (void)_appendString:(id)string;
- (void)_appendImageFromAttributes:(const char * *)attributes;
@end

#endif /* NNMKHTMLParser_h */