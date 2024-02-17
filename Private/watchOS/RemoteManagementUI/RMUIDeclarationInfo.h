//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMUIDeclarationInfo_h
#define RMUIDeclarationInfo_h
@import Foundation;

@class NSArray, NSString, RMModelDeclarationBase;

@interface RMUIDeclarationInfo : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *descriptor;
@property (retain, nonatomic) RMModelDeclarationBase *declaration;
@property (retain, nonatomic) NSString *declarationIdentifier;
@property (retain, nonatomic) NSString *declarationServerToken;
@property (retain, nonatomic) NSString *declarationType;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isRequired;
@property (retain, nonatomic) NSArray *details;

/* instance methods */
- (id)initWithDeclarationIdentifier:(id)identifier declarationServerToken:(id)token declarationType:(id)type label:(id)label descriptor:(id)descriptor;
- (id)initWithDeclaration:(id)declaration label:(id)label descriptor:(id)descriptor;
- (id)initWithProfileDeclaration:(id)declaration label:(id)label profileIdentifier:(id)identifier isRequired:(BOOL)required isActive:(BOOL)active;
@end

#endif /* RMUIDeclarationInfo_h */