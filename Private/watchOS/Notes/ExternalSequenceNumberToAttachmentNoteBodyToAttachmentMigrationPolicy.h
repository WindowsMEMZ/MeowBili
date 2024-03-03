//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy_h
#define ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy_h
@import Foundation;

#include "NSEntityMigrationPolicy.h"

@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy
/* instance methods */
- (id)unarchiveObjectWithExternalRepresentation:(id)representation;
- (BOOL)createDestinationInstancesForSourceInstance:(id)instance entityMapping:(id)mapping manager:(id)manager error:(id *)error;
- (BOOL)createRelationshipsForDestinationInstance:(id)instance entityMapping:(id)mapping manager:(id)manager error:(id *)error;
- (BOOL)endEntityMapping:(id)mapping manager:(id)manager error:(id *)error;
@end

#endif /* ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy_h */