//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoCommSafetyEDUSendingScreen_h
#define CKNanoCommSafetyEDUSendingScreen_h
@import Foundation;

#include "CKNanoCommSafetyEDUViewController.h"
#include "CKComposition.h"
#include "CKNanoCommSafetyEDUScreenSendingDelegate-Protocol.h"
#include "CKNanoGroupComposeModel.h"

@interface CKNanoCommSafetyEDUSendingScreen : CKNanoCommSafetyEDUViewController

@property (weak, nonatomic) NSObject<CKNanoCommSafetyEDUScreenSendingDelegate> *sendingDelegate;
@property (readonly, nonatomic) CKComposition *composition;
@property (readonly, nonatomic) CKNanoGroupComposeModel *composeModel;

/* instance methods */
- (id)initWithComposition:(id)composition;
- (id)initWithComposition:(id)composition forComposeModel:(id)model;
@end

#endif /* CKNanoCommSafetyEDUSendingScreen_h */