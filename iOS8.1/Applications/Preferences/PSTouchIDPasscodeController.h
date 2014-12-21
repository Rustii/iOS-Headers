/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PasscodeLockController.h"

#import "BiometricKitDelegate.h"
#import "BiometricKitUIEnrollResultDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class BiometricKit, NSObject<OS_dispatch_queue>, NSString, PSEnrollContainerViewController, UIPopoverController;

@interface PSTouchIDPasscodeController : PasscodeLockController <UIPopoverControllerDelegate, BiometricKitUIEnrollResultDelegate, BiometricKitDelegate>
{
    _Bool _currentlyEnablingTouchIDForPurchases;
    long long _storeState;
    BiometricKit *_highlightMatcher;
    NSObject<OS_dispatch_queue> *_highlightQueue;
    PSEnrollContainerViewController *_enrollController;
    id _modalFlowSuccessCompletion;
    id _modalFlowCancelCompletion;
    UIPopoverController *_enrollmentPopoverController;
}

+ (_Bool)_shouldPresentEnrollmentInPopover;
@property(retain, nonatomic) UIPopoverController *enrollmentPopoverController; // @synthesize enrollmentPopoverController=_enrollmentPopoverController;
@property(nonatomic) _Bool currentlyEnablingTouchIDForPurchases; // @synthesize currentlyEnablingTouchIDForPurchases=_currentlyEnablingTouchIDForPurchases;
@property(copy, nonatomic) id modalFlowCancelCompletion; // @synthesize modalFlowCancelCompletion=_modalFlowCancelCompletion;
@property(copy, nonatomic) id modalFlowSuccessCompletion; // @synthesize modalFlowSuccessCompletion=_modalFlowSuccessCompletion;
@property(nonatomic) PSEnrollContainerViewController *enrollController; // @synthesize enrollController=_enrollController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *highlightQueue; // @synthesize highlightQueue=_highlightQueue;
@property(retain, nonatomic) BiometricKit *highlightMatcher; // @synthesize highlightMatcher=_highlightMatcher;
@property(nonatomic) long long storeState; // @synthesize storeState=_storeState;
- (void)didCancelEnteringPIN;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)updateAfterFingerprintChanges;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)_fingerprintSpecifierAtIndexPath:(id)arg1;
- (void)cancelModalFlow;
- (void)completeModalFlow;
- (void)enrollmentCompletedForIdentity:(id)arg1;
- (void)hideCancelButton;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)_popEnrollmentController;
- (void)presentPasscodePaneFromSpecifier:(id)arg1;
- (void)pushPasscodePane;
- (id)_passcodeControllerForSpecifier:(id)arg1;
- (void)addEnrollment:(id)arg1;
- (void)_presentPopoverForContentViewController:(id)arg1;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1;
- (void)highlightFingerprintSpecifier:(id)arg1;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1;
- (void)backgrounded:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_cancelMatching;
- (void)_setupMatching;
- (id)fingerprintSpecifiers;
- (id)_fingerprintSpecifierForIdentity:(id)arg1;
- (id)touchIDSwitchSpecifiers;
- (void)setupTouchIDLogoHeader;
- (void)updateAddFingerprintSpecifier;
- (_Bool)isEnrollmentAvailable;
- (_Bool)shouldRestrictFeaturesRequiringEnrollment;
- (_Bool)isFingerprintEditingAllowed;
- (void)updateTouchIDForStockholmSpecifier;
- (_Bool)isTouchIDForStockholmRestricted;
- (void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2;
- (id)isTouchIDForStockholmEnabled:(id)arg1;
- (void)updateTouchIDForPurchasesSpecifier;
- (_Bool)isTouchIDForPurchasesRestricted;
- (void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2;
- (id)isTouchIDForPurchasesEnabled:(id)arg1;
- (id)_authorizationToken;
- (void)updateStoreBiometricsState;
- (void)updateTouchIDUnlockSpecifier;
- (_Bool)isTouchIDUnlockRestricted;
- (void)setTouchIDUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (id)isTouchIDUnlockEnabled:(id)arg1;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id)arg1;
- (_Bool)hasPasscodeAndFingerprints;
- (id)specifiers;
- (void)didUnlock;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
