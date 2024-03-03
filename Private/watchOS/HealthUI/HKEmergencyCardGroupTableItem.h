//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEmergencyCardGroupTableItem_h
#define HKEmergencyCardGroupTableItem_h
@import Foundation;

#include "HKEmergencyCardTableItem.h"

@class NSArray, NSMutableArray, NSString;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {
  /* instance variables */
  NSMutableArray *_cumulativeRowOffsets;
  NSArray *_allSubItems;
}

@property (retain, nonatomic) NSArray *subitems;
@property (retain, nonatomic) NSString *titleForHeader;

/* instance methods */
- (void)_getSubitem:(id *)subitem andSubitemRow:(long long *)row forTableViewRow:(long long)row;
- (void)setData:(id)data;
- (void)setProfileFirstName:(id)name;
- (void)setOwningViewController:(id)controller;
- (BOOL)hasPresentableData;
- (long long)numberOfRows;
- (id)tableView:(id)view cellForRowAtIndex:(long long)index;
- (double)tableView:(id)view estimatedHeightForRowAtIndex:(long long)index;
- (double)tableView:(id)view heightForRowAtIndex:(long long)index;
- (BOOL)shouldHighlightRowAtIndex:(long long)index;
- (void)tableView:(id)view didSelectRowAtIndex:(long long)index;
- (BOOL)canEditRowAtIndex:(long long)index;
- (long long)editingStyleForRowAtIndex:(long long)index;
- (long long)commitEditingStyle:(long long)style forRowAtIndex:(long long)index;
- (void)didCommitEditingStyle:(long long)style forRowAtIndex:(long long)index;
- (void)commitEditing;
@end

#endif /* HKEmergencyCardGroupTableItem_h */