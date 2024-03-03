//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef UIAirDropNode_h
#define UIAirDropNode_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SHSheetPeopleSuggestionProxy-Protocol.h"

@class NSString, NSUUID, SDSuggestionNode, SFProxyText;
@protocol SFPeopleSuggestion;

@interface UIAirDropNode : NSObject<NSSecureCoding, SHSheetPeopleSuggestionProxy> {
  /* instance variables */
  atomic unsigned int _mainLabelSlotID;
  atomic double _mainLabelSlotHeight;
  atomic unsigned int _bottomLabelSlotID;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SDSuggestionNode *suggestionNode;
@property (retain, nonatomic) SFProxyText *displayName;
@property (retain, nonatomic) SFProxyText *subtitle;
@property (retain, nonatomic) NSObject<SFPeopleSuggestion> *peopleSuggestion;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (nonatomic) BOOL hasSquareImage;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) unsigned int avatarImageSlotID;
@property (readonly, nonatomic) unsigned int transportImageSlotID;
@property (retain, nonatomic) NSString *suggestionReason;
@property (readonly, nonatomic) BOOL isTapToRadar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)nodeWithIdentifier:(id)identifier suggestionNode:(id)node;
+ (id)nodeWithIdentifier:(id)identifier displayName:(id)name subtitle:(id)subtitle avatarImageSlotID:(unsigned int)id transportImageSlotID:(unsigned int)id;
+ (id)nodeWithIdentifier:(id)identifier peopleSuggestion:(id)suggestion;
+ (id)TTRAirDropNode;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setMainLabelSlotID:(unsigned int)id;
- (unsigned int)mainLabelSlotID;
- (void)setMainLabelSlotHeight:(double)height;
- (double)mainLabelSlotHeight;
- (void)setBottomLabelSlotID:(unsigned int)id;
- (unsigned int)bottomLabelSlotID;
- (BOOL)isEqual:(id)equal;
- (BOOL)load;
- (unsigned int)imageSlotID;
- (unsigned int)transportSlotID;
@end

#endif /* UIAirDropNode_h */