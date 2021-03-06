//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountUtilities, CPExclusiveLock, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSNumber, NSPersistentStoreCoordinator, NSPredicate, NoteAccountObject, NoteStoreObject;

@interface NoteContext : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_searchPredicate;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    struct __CXIndex *__SharedNoteStoreSearchIndex;
    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;
    int __SharedNoteStoreSearchIndexCount;
    BOOL _isIndexing;
    AccountUtilities *_accountUtilities;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned int _notificationCount;
    BOOL _logChanges;
    BOOL _indexInBatches;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
}

+ (id)generateGUID;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;
+ (void)clearTestsNotesRootPath;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (BOOL)databaseIsCorrupt:(id)arg1;
+ (BOOL)shouldLogIndexing;
@property(retain, nonatomic) AccountUtilities *accountUtilities; // @synthesize accountUtilities=_accountUtilities;
@property(readonly, nonatomic) BOOL isIndexing; // @synthesize isIndexing=_isIndexing;
- (void).cxx_destruct;
- (BOOL)deleteIndexFile;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)cleanUpLocks;
- (id)findNotesWithText:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;
- (id)copyNotesForSearch:(void *)arg1 predicate:(id)arg2 complete:(char *)arg3;
- (id)copyNotesForSearch:(void *)arg1 complete:(char *)arg2;
- (void *)newSearchContextWithText:(id)arg1;
- (void)trackChanges:(id)arg1;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (void)updateSearchIndex:(id)arg1;
- (void)resetNotificationCount;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (BOOL)shouldObserveDarwinNotifications;
- (void)indexInBatches:(BOOL)arg1;
- (void)resumeIndexing;
- (void)wrapUpIndexing;
- (void)destroySearchIndex;
- (struct __CXIndex *)searchIndex:(char *)arg1;
- (void)indexNotes:(id)arg1;
- (id)notesToResumeIndexing;
- (BOOL)shouldResumeIndexing;
- (void)saveNotesToResumeIndexing:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
@property(readonly, retain, nonatomic) NSManagedObjectContext *managedObjectContext;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (id)urlForPersistentStore;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (id)nextIndex;
- (id)getNextIdObject;
- (void)handleMigration;
- (id)propertyValueForKey:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (BOOL)hasMultipleEnabledStores;
- (BOOL)shouldDisableLocalStore;
- (BOOL)deleteStore:(id)arg1;
- (BOOL)deleteAccount:(id)arg1;
- (BOOL)forceDeleteAccount:(id)arg1;
- (id)localAccount;
- (id)localStore;
- (id)defaultStoreForNewNote;
- (id)accountForAccountId:(id)arg1;
- (id)newlyAddedAccount;
- (id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allAccounts;
- (unsigned int)countOfStores;
- (id)faultedInStoresForAccounts:(id)arg1;
- (id)allStores;
- (id)newlyAddedStore;
- (id)collectionForInfo:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)noteForObjectID:(id)arg1;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (id)allNotesInCollection:(id)arg1;
- (unsigned int)countOfNotes;
- (id)allNotes;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2;
- (id)allVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotes;
- (id)allVisibleNotes;
- (BOOL)saveSilently:(id *)arg1;
- (BOOL)save:(id *)arg1;
- (BOOL)saveOutsideApp:(id *)arg1;
- (void)invalidate;
- (void)enableChangeLogging:(BOOL)arg1;
- (void)deleteChanges:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (void)deleteNote:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (id)newlyAddedAttachment;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedNote;
- (void)batchFaultNotes:(id)arg1;
- (void)sortNotes:(id)arg1;
- (void)clearCaches;
- (id)newFetchRequestForNotes;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)liveNotesNeedingBodiesPredicate;
- (id)visibleNotesPredicate;
- (void)dealloc;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initForMigrator;
- (id)init;
- (void)tearDownCoreDataStack;
- (BOOL)setUpCoreDataStack;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (void)setUpUniqueObjects;
- (void)forceSetUpUniqueObjects;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)_createLocalAccount:(id *)arg1 andStore:(id *)arg2;
- (id)storeOptions;

@end

