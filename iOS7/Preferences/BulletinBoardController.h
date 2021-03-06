/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSEditableListController.h"

@class BBSectionInfo, NSDictionary, NSObject<OS_dispatch_semaphore>, PSSpecifier;

@interface BulletinBoardController : PSEditableListController
{
    int _inCount;
    long long _orderRule;
    PSSpecifier *_inGroupEmptyCell;
    PSSpecifier *_outGroupEmptyCell;
    unsigned long long _cellChangeAction;
    NSObject<OS_dispatch_semaphore> *_loadSem;
    long long _todaySection;
    long long _inNotificationCenterSection;
    long long _outOfNotificationCenterSection;
    _Bool _loadingFromBBGateway;
    _Bool _telephonyDevice;
    unsigned long long _dndDataTypes;
    NSDictionary *_urlResourceDictionary;
    BBSectionInfo *_todaySectionInfo;
    BBSectionInfo *_stocksSectionInfo;
    BBSectionInfo *_attributionSectionInfo;
}

@property(retain, nonatomic) BBSectionInfo *attributionSectionInfo; // @synthesize attributionSectionInfo=_attributionSectionInfo;
@property(retain, nonatomic) BBSectionInfo *stocksSectionInfo; // @synthesize stocksSectionInfo=_stocksSectionInfo;
@property(retain, nonatomic) BBSectionInfo *todaySectionInfo; // @synthesize todaySectionInfo=_todaySectionInfo;
@property(nonatomic) _Bool telephonyDevice; // @synthesize telephonyDevice=_telephonyDevice;
@property(retain, nonatomic) NSDictionary *urlResourceDictionary; // @synthesize urlResourceDictionary=_urlResourceDictionary;
@property(nonatomic) unsigned long long dndDataTypes; // @synthesize dndDataTypes=_dndDataTypes;
@property _Bool loadingFromBBGateway; // @synthesize loadingFromBBGateway=_loadingFromBBGateway;
@property(retain, nonatomic) PSSpecifier *outGroupEmptyCell; // @synthesize outGroupEmptyCell=_outGroupEmptyCell;
@property(retain, nonatomic) PSSpecifier *inGroupEmptyCell; // @synthesize inGroupEmptyCell=_inGroupEmptyCell;
- (void)_loadSegmentCellState:(long long)arg1;
- (void)_reloadSections;
- (id)cmasAlertsValue:(id)arg1;
- (void)setCmasAlertState:(id)arg1 forSpecifier:(id)arg2;
- (id)todaySectionState:(id)arg1;
- (void)setTodaySectionState:(id)arg1 specifier:(id)arg2;
- (void)_checkAndUpdateAttributionState;
- (id)trafficConditionsState:(id)arg1;
- (void)setTrafficConditionsState:(id)arg1 forSpecifier:(id)arg2;
- (void)_loadSections;
- (void)_reallyLoadSections:(id)arg1 chronologicalSections:(id)arg2;
- (id)_filterSuppressedSections:(id)arg1;
- (void)_pushControllerAtIndexPath:(id)arg1;
- (void)_clearSections;
- (id)_sectionUIDescriptions;
- (id)_sectionDescriptions;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)adjustEmptyCells;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)indexOfBBSectionInfoForIndexPath:(id)arg1;
- (void)moveSpecifier:(id)arg1 toOnPosition:(_Bool)arg2;
- (id)_sectionIDs;
- (void)setOrderingMode:(id)arg1 specifier:(id)arg2;
- (id)orderingMode:(id)arg1;
- (void)createGroupIndices;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (id)enabledInLockScreen:(id)arg1;
- (id)specifiers;
- (void)loadedDNDData:(unsigned long long)arg1;
- (id)sectionsOrderedByInOutState:(id)arg1;
- (void)handleURL:(id)arg1;
- (id)inOutSpecifiersFrom:(id)arg1;
- (void)_addRegionalAlertGroupToSpecifiers:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)notifyFMFOfChanges;
- (void)notifyGamedOfChanges:(unsigned long long)arg1 mask:(unsigned long long)arg2;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)profileNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

