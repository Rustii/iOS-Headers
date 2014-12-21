/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "GenericSource.h"

@class MFMessageCriterion, MFSparseMutable64IndexSet, NSArray, NSMutableArray;

@interface CriterionSource : GenericSource
{
    id <MiniMallSource> _source;
    MFMessageCriterion *_criterion;
    NSMutableArray *_messageInfos;
    NSMutableArray *_conversations;
    struct __CFDictionary *_conversationTopMessageInfos;
    MFSparseMutable64IndexSet *_conversationHashes;
    unsigned int _failedToLoadOlderMessages:1;
    NSArray *_observationTokens;
}

+ (Class)classForSourceType:(unsigned long long)arg1;
- (void)_conversationHasMerged:(id)arg1;
- (void)_forwardNotification:(id)arg1;
- (void)_handleSourceNotification:(id)arg1;
- (void)_nts_insertMessageInfos:(id)arg1 addedMessages:(id)arg2;
- (void)_nts_replaceIfNecessaryConversationTopMessageInfo:(id)arg1;
- (id)_copyCriterionForConversations:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (struct __CFDictionary *)_copyConversationTopMessageInfosForMessageInfos:(id)arg1;
- (id)_copyConversationHashesForMessageInfos:(id)arg1;
- (void)_sourceDidReload:(id)arg1;
- (void)_loadMessages;
- (id)_conversations;
- (id)diagnosticDescription;
- (void)moveAllMessagesWithObserver:(id)arg1 toMailbox:(id)arg2;
- (void)markAllMessagesAsDeletedOrArchived:(unsigned long long)arg1 withObserver:(id)arg2;
- (_Bool)supportsMarkAll;
- (_Bool)supportsMoveAll;
- (_Bool)supportsDeleteAll;
- (_Bool)supportsFlagging;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (id)remoteIDsUsingSearchContext:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;
- (id)accountForAutoFetch;
- (id)mailboxUids;
- (id)messageForMessageID:(id)arg1;
- (void)setLastViewedMessage:(id)arg1;
- (id)lastViewedMessageDate;
- (id)lastViewedMessage;
- (id)_filterMessage:(id)arg1;
- (_Bool)shouldPlayNewMailSound;
- (_Bool)shouldShowUnreadCount;
- (_Bool)shouldIncludeWholeThreads;
- (_Bool)shouldThreadConversations;
- (void)reloadPreferences;
- (_Bool)shouldArchiveByDefaultForMessageInfos:(id)arg1;
- (_Bool)supportsArchivingForMessageInfos:(id)arg1;
- (_Bool)deleteMovesToTrashForMessageInfos:(id)arg1;
- (_Bool)shouldArchiveByDefault;
- (_Bool)supportsArchiving;
- (_Bool)deleteMovesToTrash;
- (_Bool)supportsSearch;
- (id)bulletinsContext;
- (id)uniqueIDForStorage;
- (id)mailboxName;
- (_Bool)isSearchingLocalStore;
- (_Bool)canLoadOlderMessages;
- (_Bool)canFetchSearchResults;
- (id)equivalentCriterion;
- (unsigned long long)type;
- (int)correspondingType;
- (_Bool)representsMailboxID:(unsigned int)arg1;
- (_Bool)representsMailboxUid:(id)arg1;
- (id)loadMoreServerCriterion;
- (_Bool)shouldGrowFetchWindow;
- (_Bool)shouldCompactOnFetch;
- (_Bool)needsFetch;
- (unsigned long long)currentFetchWindow;
- (long long)fetchNumOlderMessages:(unsigned long long)arg1 preservingUID:(id)arg2;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)applyChanges;
- (struct __CFDictionary *)copySendersByLibraryIDForConversation:(long long)arg1;
- (id)oldestKnownMessage;
- (long long)oldestKnownConversation;
- (id)cachedMessageForMessageInfo:(id)arg1;
- (id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(_Bool)arg2;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (unsigned long long)remoteMessageCount;
- (unsigned long long)messageCount;
- (void)flushCaches;
- (void)close;
- (void)open;
- (void)setProtectedDataAvailable:(_Bool)arg1;
- (_Bool)isProtectedDataAvailable;
@property(retain, nonatomic) MFMessageCriterion *criterion;
- (void)dealloc;
- (void)registerForNotifications;
- (id)initWithSource:(id)arg1 criterion:(id)arg2;
- (id)initWithSource:(id)arg1;

@end
