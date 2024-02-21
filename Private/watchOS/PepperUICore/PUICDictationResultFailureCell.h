//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICDictationResultFailureCell_h
#define PUICDictationResultFailureCell_h
@import Foundation;

#include "PUICTableViewCell.h"
#include "PUICDictationResultCell-Protocol.h"

@class NSString, UILabel;

@interface PUICDictationResultFailureCell : PUICTableViewCell<PUICDictationResultCell> {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_messageLabel;
}

@property (readonly, nonatomic) double cellHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)configureForLanguage:(id)language;
- (void)layoutSubviews;
@end

#endif /* PUICDictationResultFailureCell_h */