//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMessageCriterion_h
#define MFMessageCriterion_h
@import Foundation;

#include "EDSearchableCriterion-Protocol.h"
#include "MFMessageCriterion.h"
#include "NSCopying-Protocol.h"

@class CSSuggestion, EFInt64Set, NSArray, NSString;

@interface MFMessageCriterion : NSObject<EDSearchableCriterion, NSCopying> {
  /* instance variables */
  long long _type;
  NSString *_uniqueId;
  int _dateUnitType;
  unsigned int x :1 _allCriteriaMustBeSatisfied;
  unsigned int x :1 _dateIsRelative;
  NSArray *_requiredHeaders;
}

@property (readonly, copy, nonatomic) MFMessageCriterion *criterionForSQL;
@property (readonly, nonatomic) BOOL canUseSearchableIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) long long criterionType;
@property (retain, nonatomic) NSString *criterionIdentifier;
@property (nonatomic) long long qualifier;
@property (copy, nonatomic) NSString *expression;
@property (copy, nonatomic) NSArray *expressionLanguages;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (retain, nonatomic) EFInt64Set *libraryIdentifiers;
@property (nonatomic) BOOL preferFullTextSearch;
@property (nonatomic) BOOL useFlaggedForUnreadCount;
@property (nonatomic) BOOL includeRelatedMessages;
@property (nonatomic) BOOL expressionIsSanitized;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *criteria;

/* class methods */
+ (id)criterionForMailboxPredictionMessageQuery:(unsigned long long)query variable:(id)variable;
+ (id)criteriaFromDefaultsArray:(id)array;
+ (id)criteriaFromDefaultsArray:(id)array removingRecognizedKeys:(BOOL)keys;
+ (id)defaultsArrayFromCriteria:(id)criteria;
+ (id)criterionFromDefaultsDictionary:(id)dictionary;
+ (id)defaultsDictionaryFromCriterion:(id)criterion;
+ (long long)criterionTypeForString:(id)string;
+ (id)stringForCriterionType:(long long)type;
+ (id)expressionForDate:(id)date;
+ (id)criterionForMailbox:(id)mailbox;
+ (id)criterionForMailboxURL:(id)url;
+ (id)criterionForAccount:(id)account;
+ (id)criterionExcludingMailboxes:(id)mailboxes;
+ (id)messageIsDeletedCriterion:(BOOL)criterion;
+ (id)messageIsJournaledCriterion:(BOOL)criterion;
+ (id)criterionForNotDeletedConversationID:(long long)id;
+ (id)criterionForConversationID:(long long)id;
+ (id)criterionForLibraryID:(id)id;
+ (id)criterionForDocumentID:(id)id;
+ (id)messageIsServerSearchResultCriterion:(BOOL)criterion;
+ (id)senderIsVIPCriterion:(BOOL)vipcriterion;
+ (id)threadNotifyMessageCriterion;
+ (id)threadMuteMessageCriterion;
+ (id)flaggedMessageCriterion;
+ (id)criterionForFlagColor:(unsigned long long)color;
+ (id)unreadMessageCriterion;
+ (id)readMessageCriterion;
+ (id)includesMeCriterion;
+ (id)toMeCriterion;
+ (id)ccMeCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)todayMessageCriterion;
+ (id)yesterdayMessageCriterion;
+ (id)lastWeekMessageCriterion;
+ (id)readLaterMessageCriterion;
+ (id)followUpMessageCriterion;
+ (id)sendLaterMessageCriterion;
+ (id)messageCriterionForUnsubscribeTypeNotMatching:(long long)matching;
+ (id)_todayDateComponents;
+ (id)_criterionForDateReceivedBetweenDateComponents:(id)components endDateComponents:(id)components;
+ (id)_criterionForDateReceivedBetween:(id)between endDate:(id)date;
+ (id)criterionForDateReceivedOlderThanDate:(id)date;
+ (id)criterionForDateReceivedNewerThanDate:(id)date;
+ (id)notCriterionWithCriterion:(id)criterion;
+ (id)andCompoundCriterionWithCriteria:(id)criteria;
+ (id)orCompoundCriterionWithCriteria:(id)criteria;
+ (id)matchEverythingCriterion;
+ (id)matchNothingCriterion;

/* instance methods */
- (id)daBasicSearchString;
- (id)daSearchPredicate;
- (id)unreadCountCriterion;
- (id)spotlightQueryExpression;
- (id)_attributesForHeaderCriterion;
- (id)_comparisonOperationMatchingValue:(id)value qualifier:(long long)qualifier;
- (id)_queryWithAttributes:(id)attributes matchingValue:(id)value;
- (id)_queryWithAttributes:(id)attributes matchingValue:(id)value qualifier:(long long)qualifier;
- (id)criteriaForSpotlightCriteria:(id)criteria;
- (id)_spotlightQuerySearchString:(id *)string hasSuggestion:(BOOL)suggestion;
- (id)fixOnce;
- (id)SQLExpressionWithContext:(id)context depth:(unsigned int)depth;
- (BOOL)hasLibraryIDCriterion;
- (id)_SQLExpressionForMailboxCriterion;
- (id)_criterionForSQL;
- (BOOL)_containsNotCriterion;
- (id)_evaluateFTSCriterionWithIndex:(id)index mailboxIDs:(id)ids;
- (id)_collapsedMessageNumberCriterion:(id)criterion allMustBeSatisfied:(BOOL)satisfied collapsedIndexes:(id *)indexes;
- (id)_resolveWithIndex:(id)index mailboxIDs:(id)ids;
- (id)SQLExpressionWithTables:(unsigned int *)tables baseTable:(unsigned int)table protectedDataAvailable:(BOOL)available searchableIndex:(id)index mailboxIDs:(id)ids propertyMapper:(id)mapper;
- (unsigned int)bestBaseTable;
- (void)_addCriteriaSatisfyingPredicate:(undefined *)predicate toCollector:(id)collector;
- (id)criteriaSatisfyingPredicate:(undefined *)predicate;
- (BOOL)includesCriterionSatisfyingPredicate:(undefined *)predicate restrictive:(BOOL)restrictive;
- (id)criterionByApplyingTransform:(id /* block */)transform;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (id)init;
- (id)initWithCriterion:(id)criterion expression:(id)expression;
- (id)initWithType:(long long)type qualifier:(long long)qualifier expression:(id)expression;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithDictionary:(id)dictionary andRemoveRecognizedKeysIfMutable:(BOOL)mutable;
- (BOOL)isEqual:(id)equal;
- (id)descriptionWithDepth:(unsigned int)depth redacted:(BOOL)redacted;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_qualifierString;
- (id)_headersRequiredForEvaluation;
- (BOOL)_evaluateCompoundCriterion:(id)criterion;
- (BOOL)_evaluateNotCriterion:(id)criterion;
- (BOOL)_evaluateFlagCriterion:(id)criterion;
- (BOOL)_evaluateFlagColorCriterion:(id)criterion;
- (BOOL)_evaluateHeaderCriterion:(id)criterion;
- (BOOL)_evaluateSenderHeaderCriterion:(id)criterion;
- (BOOL)_evaluatePartOfStructure:(id)structure;
- (BOOL)_evaluateAddressBookCriterion:(id)criterion;
- (BOOL)_evaluateFullNameCriterion:(id)criterion;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)criterion;
- (BOOL)_evaluateIsEncryptedCriterion:(id)criterion;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)criterion;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)criterion;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)criterion;
- (BOOL)_evaluateAttachmentCriterion:(id)criterion;
- (BOOL)_evaluateAccountCriterion:(id)criterion;
- (BOOL)_evaluateAddressHistoryCriterion:(id)criterion;
- (BOOL)_evaluateDateCriterion:(id)criterion;
- (BOOL)_evaluateConversationIDCriterion:(id)idcriterion;
- (BOOL)_evaluateMailboxCriterion:(id)criterion;
- (BOOL)_evaluateReadLaterCriterion:(id)criterion;
- (BOOL)_evaluateSenderBucketCriterion:(id)criterion;
- (BOOL)doesMessageSatisfyCriterion:(id)criterion;
- (long long)messageRuleQualifierForString:(id)string;
- (id)stringForMessageRuleQualifier:(long long)qualifier;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)satisfied;
- (int)dateUnits;
- (void)setDateUnits:(int)units;
- (BOOL)dateIsRelative;
- (void)setDateIsRelative:(BOOL)relative;
- (id)dateFromExpression;
- (id)simplifyOnce;
- (id)simplifiedCriterion;
- (BOOL)isVIPCriterion;
- (void)tokenizeUsingTokenizationHandler:(id /* block */)handler;
@end

#endif /* MFMessageCriterion_h */