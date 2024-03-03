//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.1.0.0
//
#ifndef _TtC15SiriSuggestions18SuggestionPipeline_h
#define _TtC15SiriSuggestions18SuggestionPipeline_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface SiriSuggestions.SuggestionPipeline : Swift._SwiftObject { // (Swift)
  /* instance variables */
   suggestionPool;
   generators;
   resolutionService;
   finalizers;
   pipelineConfig;
   ranker;
   suggestionSelector;
   preGenerationStore;
   presentationService;
   dataProviderFactory;
   selfLogger;
}

@end

#endif /* _TtC15SiriSuggestions18SuggestionPipeline_h */