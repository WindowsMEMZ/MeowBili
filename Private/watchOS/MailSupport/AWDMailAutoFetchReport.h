//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef AWDMailAutoFetchReport_h
#define AWDMailAutoFetchReport_h
@import Foundation;

#include "PBCodable.h"
#include "AWDMailError.h"
#include "NSCopying-Protocol.h"

@interface AWDMailAutoFetchReport : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 bucketedLocalNonDeletedCount; unsigned int x :1 duration; unsigned int x :1 fetchSize; unsigned int x :1 numMessagesFetched; unsigned int x :1 options; unsigned int x :1 timestamp; unsigned int x :1 emailProvider; unsigned int x :1 mailboxType; unsigned int x :1 newMessagesState; unsigned int x :1 protocol; unsigned int x :1 totalBytesReceived; unsigned int x :1 totalBytesSent; unsigned int x :1 trigger; unsigned int x :1 didTimeout; unsigned int x :1 foreground; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) int protocol;
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) int emailProvider;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) int mailboxType;
@property (readonly, nonatomic) BOOL hasMailError;
@property (retain, nonatomic) AWDMailError *mailError;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasNewMessagesState;
@property (nonatomic) int newMessagesState;
@property (nonatomic) BOOL hasForeground;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL hasDidTimeout;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL hasFetchSize;
@property (nonatomic) unsigned long long fetchSize;
@property (nonatomic) BOOL hasNumMessagesFetched;
@property (nonatomic) unsigned long long numMessagesFetched;
@property (nonatomic) BOOL hasTotalBytesSent;
@property (nonatomic) int totalBytesSent;
@property (nonatomic) BOOL hasTotalBytesReceived;
@property (nonatomic) int totalBytesReceived;
@property (nonatomic) BOOL hasBucketedLocalNonDeletedCount;
@property (nonatomic) unsigned long long bucketedLocalNonDeletedCount;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;

/* instance methods */
- (id)protocolAsString:(int)string;
- (int)StringAsProtocol:(id)protocol;
- (id)emailProviderAsString:(int)string;
- (int)StringAsEmailProvider:(id)provider;
- (id)mailboxTypeAsString:(int)string;
- (int)StringAsMailboxType:(id)type;
- (id)triggerAsString:(int)string;
- (int)StringAsTrigger:(id)trigger;
- (id)newMessagesStateAsString:(int)string;
- (int)StringAsNewMessagesState:(id)state;
- (id)totalBytesSentAsString:(int)string;
- (int)StringAsTotalBytesSent:(id)sent;
- (id)totalBytesReceivedAsString:(int)string;
- (int)StringAsTotalBytesReceived:(id)received;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* AWDMailAutoFetchReport_h */