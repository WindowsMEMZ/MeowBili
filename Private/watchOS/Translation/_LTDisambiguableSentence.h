//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDisambiguableSentence_h
#define _LTDisambiguableSentence_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_LTDisambiguableSentenceDelegate-Protocol.h"
#include "_LTDisambiguableSentenceHistoryProviding-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSUUID;

@interface _LTDisambiguableSentence : NSObject<_LTDisambiguableSentenceHistoryProviding, NSSecureCoding, NSCopying>

@property (weak, nonatomic) NSObject<_LTDisambiguableSentenceDelegate> *delegate;
@property (weak, nonatomic) NSObject<_LTDisambiguableSentenceHistoryProviding> *historyProvider;
@property (readonly, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSArray *targetPhrases;
@property (nonatomic) unsigned long long selectedPhraseIndex;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) _LTDisambiguationNode *selectedTargetPhrase;
@property (readonly, nonatomic) BOOL hasDisambiguations;
@property (readonly, nonatomic) NSString *targetText;
@property (readonly, copy, nonatomic) NSArray *history;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSourceText:(id)text targetPhrases:(id)phrases selectedPhraseIndex:(unsigned long long)index;
- (void)_commonInit;
- (BOOL)hasDisambiguationsOfType:(unsigned long long)type;
- (id)menuConfigurationsForLinkIndex:(unsigned long long)index;
- (id)sourceTextSnippetForLinkIndex:(unsigned long long)index;
- (id)meaningDescriptionForLinkIndex:(unsigned long long)index inTargetPhrase:(unsigned long long)phrase;
- (void)_insertPrefix:(id)prefix;
- (void)addNodeIndexToHistory:(unsigned long long)history;
- (BOOL)_restoreChanges:(id)changes;
- (id)_userSelectionFromIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (id)_genderForLinkIndex:(unsigned long long)index inPhraseIndex:(unsigned long long)index;
- (unsigned long long)_preferredGenderFromEdgesWithDuplicateMeaning:(id)meaning forLinkIndex:(unsigned long long)index inPhrase:(unsigned long long)phrase;
- (id)_preferredEdgeFromEdgesWithDuplicateMeaning:(id)meaning forLinkIndex:(unsigned long long)index inPhrase:(unsigned long long)phrase;
- (id)_generateAttributedStringForLocation:(unsigned long long)location result:(id)result excludedTypes:(id)types globalAttributes:(id)attributes attributeProvider:(id /* block */)provider;
- (id)_includedTypesFromExcludedTypes:(id)types;
- (id)_includedTypesFromDelegate;
- (void)_validateAndPopulateEdges;
- (void)_removeUnvalidatedAdjacencyLists;
- (id)_directedEdgeFromUnvalidatedEdge:(id)edge;
- (BOOL)_hasOverlapInRangeArray:(id)array;
- (id)_historyForEncoding;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _LTDisambiguableSentence_h */