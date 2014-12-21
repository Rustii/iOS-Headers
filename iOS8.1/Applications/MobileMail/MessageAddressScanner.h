/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CRRecentContactsLibrary, MFMailMessageLibrary, NSObject<OS_dispatch_queue>, _MessageAddressScannerQueue;

@interface MessageAddressScanner : NSObject
{
    void *_ab;
    NSObject<OS_dispatch_queue> *_queue;
    CRRecentContactsLibrary *_recentsLibrary;
    struct __DDScanner *_scanner;
    _MessageAddressScannerQueue *_pendingRemovalQueue;
    unsigned int _scheduledPendingRemovalQueueFlush:1;
    MFMailMessageLibrary *_library;
}

+ (id)sharedInstance;
+ (id)weightForMessage:(id)arg1 addressBook:(void *)arg2;
+ (id)coreRecentsMetadataForMessage:(id)arg1;
@property(retain, nonatomic) MFMailMessageLibrary *library; // @synthesize library=_library;
- (void)_addAddressDetectorResult:(struct __DDResult *)arg1 forMessage:(id)arg2;
- (void)scanSummary:(id)arg1 forMessage:(id)arg2;
- (void)handleAddressBookChange;
- (void)_messagesWereCompacted:(id)arg1;
- (void)_messagesWillBeCompacted:(id)arg1;
- (void)_messagesFlagsChanged:(id)arg1;
- (void *)addressBook;
- (struct __DDScanner *)scanner;
- (id)recentsLibrary;
- (void)_scheduleRemovalOfDetectedAddressesInMessages:(id)arg1;
- (void)dealloc;
- (id)init;

@end
