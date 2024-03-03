//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.100.1.0.0
//
#ifndef TPSSubscriptionLabeler_h
#define TPSSubscriptionLabeler_h
@import Foundation;

@class NSArray, NSLocale, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface TPSSubscriptionLabeler : NSObject

@property (retain, nonatomic) NSMutableDictionary *labelDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSArray *applicableUnlocalizedLabels;
@property (retain, nonatomic) NSString *applicableLanguage;
@property (retain, nonatomic) NSLocale *updatingLocale;
@property (retain, nonatomic) NSArray *cachedResult;

/* class methods */
+ (id)localizedStringDictionaryForLanguageIdentifiers:(id)identifiers selectedLanguage:(id *)language;
+ (id)localizedLabelForLabel:(id)label;
+ (id)localizedLabelsForLabels:(id)labels languageIdentifiers:(id)identifiers;
+ (id)localizedLabelsForLabels:(id)labels languageStringOverrides:(id)overrides;
+ (id)localizedLabelForLabel:(id)label longForm:(BOOL)form languageStringOverrides:(id)overrides;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)labels languageStringOverrides:(id)overrides;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)labels languageIdentifiers:(id)identifiers;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)labels;
+ (id)displayShortLabelStringsForLongFormShortLabels:(id)labels;
+ (id)stringsByAbbreviatingToPrefixesOfStrings:(id)strings;
+ (id)stringsByClippingStrings:(id)strings toWidthOfString:(id)string;
+ (id)fontAttributeDictionary;
+ (double)widthOfString:(id)string attributes:(id)attributes;
+ (id)stringByShorteningString:(id)string maximumWidth:(double)width attributes:(id)attributes;
+ (id)stringsByNumericallyDisambiguatingStrings:(id)strings;
+ (BOOL)_dictionary:(id)_dictionary containsCollationEquivalentKey:(id)key;
+ (id)_groupStringsByCollationEquivalency:(id)equivalency;
+ (id)standardLabelIdentifiers;
+ (BOOL)isExclusivelyCJKString:(id)cjkstring characterSets:(id)sets;
+ (BOOL)isString:(id)string exclusivelyInCharacterSet:(struct USet *)set;
+ (id)_resultWithAllCharacters:(id /* block */)characters string:(id)string;

/* instance methods */
- (id)initWithLabelStorage:(id)storage;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)labels languageIdentifiers:(id)identifiers;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)labels;
- (void)_validateLabelsForInstalledUnlocalizedLabels:(id)labels languageIdentifiers:(id)identifiers;
@end

#endif /* TPSSubscriptionLabeler_h */