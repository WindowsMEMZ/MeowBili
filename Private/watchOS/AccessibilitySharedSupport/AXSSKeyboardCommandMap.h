//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSKeyboardCommandMap_h
#define AXSSKeyboardCommandMap_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXSSKeyboardCommandMap : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *keyChordsToCommands;
@property (readonly, nonatomic) NSDictionary *commandsToArraysOfKeyChords;
@property (readonly, nonatomic) NSDictionary *userDefinedCommandsToKeyChords;
@property (readonly, nonatomic) NSMutableDictionary *transientCommands;
@property (retain, nonatomic) NSSet *availableCommands;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithCommandsToKeyChordsDictionary:(id)dictionary;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isEqualToCommandMap:(id)map;
- (BOOL)_validateCommandsToKeyChords:(id)chords;
- (BOOL)_isAvailableCommand:(id)command;
- (void)_initializeDictionariesIfNeeded;
- (id)commandForKeyChord:(id)chord;
- (id)keyChordForCommand:(id)command;
- (id)commandMapWithKeyChord:(id)chord forCommand:(id)command;
- (id)addCommandsForTransientKeyChords:(id)chords;
- (void)removeTransientKeyChordsForIdentifier:(id)identifier;
@end

#endif /* AXSSKeyboardCommandMap_h */