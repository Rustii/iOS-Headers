/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AutoFetchController.h"
#import "MFContentProtectionObserver.h"
#import "PCConnectionManagerDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, PCConnectionManager, PCPersistentTimer;

@interface AutoFetchController : NSObject <AutoFetchController, MFContentProtectionObserver, PCConnectionManagerDelegate>
{
    id <AutoFetchControllerDataSource> _dataSource;
    double _lastNonvisibleAutoFetchDate;
    PCConnectionManager *_manager;
    NSMutableDictionary *_accountResponsiveness;
    NSMutableSet *_uidsToFetchAfterFirstUnlock;
    PCPersistentTimer *_failedPushTimer;
    NSMutableSet *_failedPushUids;
    unsigned long long _outstandingAccountChangeFetchRequests;
    int _notifyLockStateToken;
    unsigned long long _holdState;
    unsigned int _pmNotifier;
    struct IONotificationPort *_pmPort;
    struct __CFRunLoopSource *_pmSource;
    int _autoFetchState;
    int _fetchType;
    int _pendingFetchType;
    _Bool _lastAutoFetchHadErrors;
    _Bool _lastAutoFetchHadSources;
    NSArray *_fetchAccounts;
    NSArray *_pendingFetchAccounts;
    NSArray *_visibleSources;
    NSArray *_visibleSourceJobInvocations;
    unsigned long long _outstandingAutoFetchRequests;
    NSTimer *_networkWakeupTimeout;
    unsigned int _isReachable:1;
    unsigned int _monitoringReachability:1;
    unsigned int _tryFetchWhenReachable:1;
    unsigned int _PCTimerIsRunning:1;
    unsigned int _waitingForFirstUnlock:1;
}

+ (id)sharedController;
- (void)_dumpDiagnosticInformation:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)_finishAutoFetch;
- (void)_createJobListFinished:(id)arg1;
- (void)_gatherAllFetchJobs;
- (void)_createJobList;
- (void)_reportSynchronousFetchCompletion:(id)arg1;
- (void)_checkForWiFi;
- (_Bool)_shouldAutoFetchAccount:(id)arg1 whenVisible:(_Bool)arg2;
- (void)_checkForReachability;
- (oneway void)_reportReachabilityTimeout:(id)arg1;
- (void)_reportReachabilityChange:(id)arg1;
- (void)_cleanUpReachabilityTimer;
- (void)_startAutoFetch:(int)arg1 withAccounts:(id)arg2;
- (void)_accountChangedFinished;
- (void)_failedPushTimerFired:(id)arg1;
- (void)_clearFailedPushTimer;
- (void)_pushFetchCompleted:(id)arg1;
- (void)_accountContentsDidChange:(id)arg1;
- (void)_fetchChangedUids:(id)arg1 forAccount:(id)arg2;
- (void)_fetchChangedUids:(id)arg1 forAccount:(id)arg2 options:(int)arg3;
- (id)_invocationWithTarget:(id)arg1 priority:(int)arg2;
@property(nonatomic) int autoFetchState;
- (oneway void)networkConfigurationChanged;
- (void)_lockStateChanged;
- (oneway void)stopAutoFetch;
- (oneway void)startAutoFetch;
- (oneway void)fetchNow:(int)arg1 withSources:(id)arg2;
- (oneway void)fetchNow:(int)arg1 withAccounts:(id)arg2;
- (oneway void)fetchNow:(int)arg1;
- (void)lockStateFetch;
- (_Bool)_tryFetch:(int)arg1 withAccounts:(id)arg2;
- (_Bool)_tryFetch:(int)arg1;
- (void)_hasWokenUp;
- (int)_autoFetchOverrideInterval;
- (oneway void)setDataSource:(id)arg1;
- (void)dealloc;
- (void)startup;
- (id)init;
- (void)connectionManager:(id)arg1 handleEvent:(int)arg2;
- (void)handlePollEvent;
- (void)restartPCTimer;
- (void)_registerLockUnlockStateNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

