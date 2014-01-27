/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class PSAppCellularUsageGroupController, PSSpecifier;

@interface SettingsNetworkController : PSListController
{
    PSSpecifier *_specifierRAT;
    PSSpecifier *_specifierRATGroup;
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    _Bool _disabled;
    int _RATSwitchKind;
    _Bool _3GOverrideTo4G;
    _Bool _LTEOverrideTo4G;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_lifetimeSpecifier;
    PSSpecifier *_lastResetSpecifier;
    PSAppCellularUsageGroupController *_appUsageGroupController;
}

- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;
- (id)_lastUpdateDate;
- (id)callTime:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)dataUsageWorkspaceInfo;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (_Bool)isCellularDisabled;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (void)newCarrierNotification;
- (void)totalBytesUsedChangedNotification;
- (void)setupCellularFaceTime:(id)arg1;
- (_Bool)shouldShowFaceTimeSetup;
- (void)viewAccountPressed:(id)arg1;
- (_Bool)shouldShowViewAccount;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (void)reloadRATStatus:(id)arg1;
- (_Bool)updateRATSpecifiers;
- (void)updateRATStateWithDictionary:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (void)_setRATModeStateIsOn:(_Bool)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (_Bool)shouldShowRATModeSwitch;
- (id)localizableRATModeStringKeyForKey:(id)arg1;
- (id)isMobileDataEnabled:(id)arg1;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(_Bool)arg1;
- (void)_setMobileDataSwitch:(_Bool)arg1;
- (void)canceledDataSwitch:(id)arg1;
- (void)acceptedDataSwitch:(id)arg1;
- (void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2;
- (_Bool)isConnectedOverWiFi;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end
