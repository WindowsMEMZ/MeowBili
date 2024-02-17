//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef _TtC15SeymourServices28AssetBundleProgressPublisher_h
#define _TtC15SeymourServices28AssetBundleProgressPublisher_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface SeymourServices.AssetBundleProgressPublisher : Swift._SwiftObject { // (Swift)
  /* instance variables */
   lock;
   eventHub;
   bundleIdToWorkoutIdentifier;
   bundleIdentifierToURLs;
   urlToBundleIdentifiers;
   urlToProgress;
}

@end

#endif /* _TtC15SeymourServices28AssetBundleProgressPublisher_h */