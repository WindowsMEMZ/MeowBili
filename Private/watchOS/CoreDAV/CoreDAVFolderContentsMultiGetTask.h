//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVFolderContentsMultiGetTask_h
#define CoreDAVFolderContentsMultiGetTask_h
@import Foundation;

#include "CoreDAVContainerMultiGetTask.h"

@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask
/* instance methods */
- (id)initWithURLs:(id)urls atContainerURL:(id)url appSpecificDataItemClass:(Class)class;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;
@end

#endif /* CoreDAVFolderContentsMultiGetTask_h */