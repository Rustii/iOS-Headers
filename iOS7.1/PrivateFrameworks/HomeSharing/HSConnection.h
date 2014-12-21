//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSConnectionConfiguration, HSConnectionStream, HSFairPlayInfo, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface HSConnection : NSObject
{
    HSConnectionConfiguration *_configuration;
    int _connectionState;
    HSConnectionStream *_connectionStream;
    int _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_activityTimerSource;
    BOOL authenticationRequired;
    BOOL tokenCheckRequired;
    BOOL _tokenCheckRequred;
    unsigned int basePlaylistContainerID;
    unsigned int databaseID;
    unsigned int databaseRevision;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    NSString *password;
    unsigned int sessionID;
    NSString *username;
    unsigned int _interfaceID;
    unsigned int _controlKey;
    unsigned int _controlPort;
    unsigned int _promptID;
}

@property(nonatomic) unsigned int promptID; // @synthesize promptID=_promptID;
@property unsigned int controlPort; // @synthesize controlPort=_controlPort;
@property unsigned int controlKey; // @synthesize controlKey=_controlKey;
@property unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property(readonly, getter=isTokenCheckRequired) BOOL tokenCheckRequred; // @synthesize tokenCheckRequred=_tokenCheckRequred;
@property(copy) NSString *username; // @synthesize username;
@property BOOL tokenCheckRequired; // @synthesize tokenCheckRequired;
@property unsigned int sessionID; // @synthesize sessionID;
@property(copy) NSString *password; // @synthesize password;
@property(copy) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID;
@property(retain) HSFairPlayInfo *fairPlayInfo; // @synthesize fairPlayInfo;
@property unsigned int databaseRevision; // @synthesize databaseRevision;
@property unsigned int databaseID; // @synthesize databaseID;
@property(readonly) int connectionType; // @synthesize connectionType=_connectionType;
@property int connectionState; // @synthesize connectionState=_connectionState;
@property unsigned int basePlaylistContainerID; // @synthesize basePlaylistContainerID;
@property(getter=isAuthenticationRequired) BOOL authenticationRequired; // @synthesize authenticationRequired;
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(CDUnknownBlockType)arg2;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (id)newControlConnection;
- (void)disconnect;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSURL *baseURL;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 connectionType:(int)arg2;
- (id)initWithBaseURL:(id)arg1 connectionType:(int)arg2;
- (id)initWithBaseURL:(id)arg1;

@end
