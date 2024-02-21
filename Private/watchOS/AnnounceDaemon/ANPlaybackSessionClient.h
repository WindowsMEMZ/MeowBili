//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANPlaybackSessionClient_h
#define ANPlaybackSessionClient_h
@import Foundation;

@class NSString, NSUUID, NSXPCConnection;

@interface ANPlaybackSessionClient : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSUUID *endpointID;

/* class methods */
+ (id)clientWithXPCConnection:(id)xpcconnection;

/* instance methods */
- (id)description;
- (id)copy;
@end

#endif /* ANPlaybackSessionClient_h */