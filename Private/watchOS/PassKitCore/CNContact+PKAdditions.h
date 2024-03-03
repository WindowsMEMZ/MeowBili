//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef CNContact_PKAdditions_h
#define CNContact_PKAdditions_h
@import Foundation;

@interface CNContact (PKAdditions)
/* class methods */
+ (id)pkPassbookRequiredKeys;
+ (id)contactWithPkDictionary:(id)dictionary;
+ (id)pkContactWithNameComponents:(id)components labeledValues:(id)values;
+ (id)pkContactWithNameFromContact:(id)contact labeledValue:(id)value property:(id)property;
+ (id)pkContactWithNameComponents:(id)components postalAddresses:(id)addresses emailAddresses:(id)addresses phoneNumbers:(id)numbers;
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)address;
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)number;

/* instance methods */
- (id)pkDictionaryForProperty:(id)property;
- (void)pkAddLabeledValues:(id)values withProperty:(id)property;
- (id)pkFormattedContactAddress;
- (id)pkFormattedContactAddressWithoutName;
- (id)pkFormattedContactAddressIncludingPhoneticName:(BOOL)name;
- (id)pkFormattedContactAddressIncludingPhoneticName:(BOOL)name showName:(BOOL)name;
- (id)pkSingleLineFormattedContactAddress;
- (id)pkSingleLineFormattedContactAddressIncludingCountryName:(BOOL)name;
- (void)setRecentContact:(id)contact;
- (id)recentContact;
- (void)setContactSource:(unsigned long long)source;
- (unsigned long long)contactSource;
- (BOOL)isSubsetOfMeCard;
- (void)setRecentFromContactInformation:(BOOL)information;
- (BOOL)recentFromContactInformation;
- (void)setValueSource:(id)source;
- (id)valueSource;
- (void)setFormattingConstrained:(unsigned long long)constrained;
- (unsigned long long)formattingConstrained;
- (void)setIsHideMyEmail:(BOOL)email;
- (BOOL)isHideMyEmail;
- (id)pkFullyQualifiedName;
- (id)pkFullName;
- (id)pkPhoneticName;
- (id)pkFullAndPhoneticName;
- (id)_fullNameFromComponents:(id)components style:(long long)style;
- (id)_phoneticNameFromComponents:(id)components style:(long long)style;
- (id)nameComponents;
- (id)sanitizedContact;
- (id)contactWithCleanedUpDistrict;
- (id)pkContactWithCleanedUpCountryCode;
- (id)pk_displayName;
- (id)pkDeconstructContactUsingKey:(id)key;
- (id)pkDeconstructContactUsingKey:(id)key substring:(id)substring;
- (BOOL)representsContact:(id)contact forContactKeys:(id)keys;
@end

#endif /* CNContact_PKAdditions_h */