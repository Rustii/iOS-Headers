/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, PSSpecifier, UIActionSheet, UIAlertView;

@interface LocationServicesListController : PSListController
{
    NSDictionary *_locationEntitiesDetails;
    NSArray *_ignoredLocationEntities;
    UIActionSheet *_locationConfirmationSheet;
    UIAlertView *_locationConfirmationAlert;
    _Bool _locationSwitchedAlertButtons;
    _Bool _deferredRefreshDueToConfirm;
    _Bool _locationNotificationsEnabled;
    _Bool _disablingFMiP;
    PSSpecifier *_findMyFriendsSpecifier;
    NSMutableDictionary *_coalesceAppKeys;
    NSDate *_twentyFourHoursAgo;
    id _deviceLocatorChangedHandler;
}

+ (_Bool)isLocationRestricted;
+ (void)setCoreRoutineAuthorized:(_Bool)arg1;
+ (_Bool)isCoreRoutineAuthorized;
+ (void)setFindMyiPhoneAuthorized:(_Bool)arg1;
+ (_Bool)isFindMyiPhoneAuthorized;
@property(copy, nonatomic) id deviceLocatorChangedHandler; // @synthesize deviceLocatorChangedHandler=_deviceLocatorChangedHandler;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)locationDetailSpecifiers;
- (id)hiddenBundlesByIdentifier;
- (void)showLocationPrivacyPage;
- (void)willBecomeActive;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateForApplicationDidBecomeActive:(id)arg1;
- (void)updateRecentlyUsedDate;
- (void)updateSpecifiersForImposedSettings;
- (void)updateMutableStateForFMF;
- (void)updateMutableStateBasedOnRestriction;
- (void)setEntityAuthorized:(id)arg1 specifier:(id)arg2;
- (id)isEntityAuthorized:(id)arg1;
- (void)confirmationClickedButtonAtIndex:(long long)arg1;
- (void)confirmationActionWithSpecifier:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_setLocationServicesEnabled:(_Bool)arg1;
- (void)disableLocationServicesAfterConfirm:(id)arg1;
- (void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2;
- (void)refreshLinkStatusInParent;
- (id)isLocationServicesEnabled:(id)arg1;
- (id)findMyiPhoneEnabledStatus:(id)arg1;
- (void)locatorStateDidChange:(id)arg1;
- (void)runAndClearDeviceLocatorChangedHandler:(_Bool)arg1;
- (int)locationUsageForEntity:(id)arg1;
- (int)locationUsageBasedOnDetails:(id)arg1;
- (void)stopLocationStatusUpdates;
- (void)startLocationStatusUpdates;
- (void)updateLocationUsage;
- (void)setUsage:(int)arg1 forCell:(id)arg2;
- (void)dealloc;
- (id)init;

@end
