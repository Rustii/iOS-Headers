/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PTPOperationResponsePacket, PTPWrappedBytes;

@interface PTPTransport : NSObject
{
    unsigned short _type;
    int _role;
    int _connectionStatus;
    id _delegate;
    BOOL _timedOut;
    BOOL _responseReceived;
    PTPOperationResponsePacket *_response;
    BOOL _callbackThreadIsRunning;
    struct _opaque_pthread_t {
        long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[596];
    } *_callbackThread;
    struct _opaque_pthread_mutex_t _callbackThreadMutex;
    struct _opaque_pthread_mutex_t _callbackThreadRunMutex;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } _callbackThreadCondition;
    BOOL _callbackThreadConditionSignaled;
    struct __CFRunLoop *_callbackThreadRunLoop;
    struct __CFRunLoopSource *_callbackDummyMachPortRLSrc;
    unsigned char _headerBuffer[12];
    BOOL _headerBufferFound;
    BOOL _delegateNeedsResponse;
    BOOL _busy;
    unsigned int _canceledTransactionID;
    PTPWrappedBytes *_dataForTransaction;
    unsigned long long _excessReceivedDataSize;
}

- (id)init;
- (void)dealloc;
- (void)cleanupCallbackThread;
- (void *)callbackThreadFunction;
- (BOOL)isCallbackThreadRunning;
- (struct __CFRunLoop *)callbackThreadRunLoop;
- (int)lockCallbackThreadMutex;
- (int)unlockCallbackThreadMutex;
- (int)signalCallbackThreadCondition;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)responseReceived;
- (void)setResponseReceived:(BOOL)arg1;
- (unsigned short)type;
- (int)connectionStatus;
- (BOOL)startCallbackThread;
- (void)endCallbackThread;
- (BOOL)startResponder;
- (BOOL)startInitiator;
- (void)stop;
- (int)role;
- (BOOL)connected;
- (BOOL)timedOut;
- (void)setTimedOut:(BOOL)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (void)sendData:(id)arg1;
- (BOOL)sendResponse:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (void)abortPendingIO;
- (void)cancelTransaction:(id)arg1;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (unsigned long long)excessReceivedDataSize;

@end
