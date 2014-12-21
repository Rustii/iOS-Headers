/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MFTiltedTabViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MFTiltedTabView, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSTimer, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController<MFApplicationSceneActor>, _MFActorItem;

@interface MFApplicationSceneController : UIViewController <MFTiltedTabViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    UIView *_sceneDimmingView;
    _Bool _isPrimaryViewProstrated;
    _Bool _isPrimaryViewConstricted;
    _Bool _isWallpaperVisible;
    struct CGPoint _engagementPoint;
    UITapGestureRecognizer *_engageTapGesture;
    UIPanGestureRecognizer *_engagePanGesture;
    NSTimer *_purgingTimer;
    NSMapTable *_actorItemToDecayTimeMapTable;
    NSObject<OS_dispatch_queue> *_purgingQueue;
    NSMutableArray *_actorItems;
    _MFActorItem *_activeActorItem;
    _MFActorItem *_primaryActorItem;
    struct UIViewController *_primaryViewController;
    MFTiltedTabView *_tiltedTabView;
    _Bool _exposeModeActivated;
    unsigned long long _tabItemIndexToSelect;
    _MFActorItem *_interactivelyAnimatingActorItem;
    UIColor *_opaqueBackgroundColor;
    NSMutableSet *_savedSnapshotUUIDs;
    _Bool _automaticallyPurgesInactiveActors;
    id <MFApplicationSceneDelegate> _sceneDelegate;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)_dimmedWallpaperColor;
+ (id)_wallpaperColor;
@property(nonatomic) id <MFApplicationSceneDelegate> sceneDelegate; // @synthesize sceneDelegate=_sceneDelegate;
@property(nonatomic, getter=isExposeModeActivated) _Bool exposeModeActivated; // @synthesize exposeModeActivated=_exposeModeActivated;
@property(nonatomic) _Bool automaticallyPurgesInactiveActors; // @synthesize automaticallyPurgesInactiveActors=_automaticallyPurgesInactiveActors;
- (_Bool)shouldAutorotate;
- (double)tiltedTabView:(id)arg1 alphaValueForItemAtIndex:(unsigned long long)arg2;
- (struct CATransform3D)tiltedTabView:(id)arg1 layerTransformForItemAtIndex:(unsigned long long)arg2;
- (struct CGRect)tiltedTabView:(id)arg1 frameForItemAtIndex:(unsigned long long)arg2;
- (double)tiltedTabView:(id)arg1 headerHeightForItemAtIndex:(unsigned long long)arg2;
- (void)tiltedTabView:(id)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)tiltedTabView:(id)arg1 closeItemAtIndex:(unsigned long long)arg2;
- (_Bool)tiltedTabView:(id)arg1 canCloseItemAtIndex:(unsigned long long)arg2;
- (void)tiltedTabView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)tiltedTabView:(id)arg1 relinquishSnapshotView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)tiltedTabView:(id)arg1 relinquishContentView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned long long)arg2 withBoundsInsets:(out struct UIEdgeInsets *)arg3;
- (id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfItemsInTiltedTabView:(id)arg1;
- (void)tiltedTabViewDidDismiss:(id)arg1;
- (void)tiltedTabViewWillDismiss:(id)arg1;
- (void)tiltedTabViewDidPresent:(id)arg1;
- (void)tiltedTabViewWillPresent:(id)arg1;
- (id)_actorItemAtIndex:(unsigned long long)arg1;
- (void)_invalidatePurgingDecayForActorItem:(id)arg1;
- (void)_beginPurgingDecayForActorItemIfNecessary:(id)arg1;
- (void)_purgeInactiveActorsTimerFired:(id)arg1;
- (_Bool)_resurrectActorItemIfNecessary:(id)arg1;
- (void)_purgeInactiveActorsBeyondDepthThreshold;
- (void)_purgeActorItem:(id)arg1;
- (_Bool)_sceneDelegateSupportsPurgingAndResurrection;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_setPrimaryViewConstrictedForBottomShelf:(_Bool)arg1;
- (void)_handleEngagePanGesture:(id)arg1;
- (void)_handleEngageTapGesture:(id)arg1;
- (struct CGRect)_engagementRect;
- (void)_sceneStateDidChange;
- (_Bool)restoreStateFromDisk;
- (void)_populateSavedSnapshotUUIDsIfNecessary;
- (void)flushRestorableStateToDisk;
- (void)_flushRestorableStateToDiskWithNewSnapshots:(_Bool)arg1;
- (struct CGImage *)_copySnapshotImageContentsForIdentifier:(id)arg1;
- (void)_removeAllActorSnapshotsExcludingIdentifiers:(id)arg1;
- (void)_saveActorSnapshotToDisk:(id)arg1 completion:(id)arg2;
- (void)forciblyPurgeAllInactiveActorViewControllers;
- (id)actorViewControllersOfKind:(Class)arg1;
@property(readonly, nonatomic) NSArray *actorViewControllers; // @dynamic actorViewControllers;
- (void)setExposeModeActivated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)withdrawActiveViewControllerAnimated:(_Bool)arg1;
- (void)dismissViewController:(struct UIViewController *)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (void)dismissViewController:(struct UIViewController *)arg1 animated:(_Bool)arg2;
- (void)presentModalViewController:(struct UIViewController *)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (void)presentModalViewController:(struct UIViewController *)arg1 animated:(_Bool)arg2;
- (void)_presentActorItem:(id)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (struct UIViewController *)activeViewController;
@property(retain, nonatomic) UIViewController<MFApplicationSceneActor> *primaryViewController; // @dynamic primaryViewController;
- (id)primarySplitViewController;
- (void)_removeActorItem:(id)arg1;
- (id)_actorItemForActorViewController:(struct UIViewController *)arg1 createIfNecessary:(_Bool)arg2;
- (void)_setActiveActorItem:(id)arg1 animated:(_Bool)arg2;
- (void)_didWithdrawActorItem:(id)arg1;
- (void)_willWithdrawActorItem:(id)arg1;
- (void)_layoutActorViewControllers;
- (void)_layoutActorItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_layoutPrimaryViewControllerView;
- (void)_layoutActiveViewControllerView;
- (void)_layoutTiltedTabView;
- (double)_bottomShelfHeight;
- (struct CGRect)_activeViewControllerFrame;
- (void)_setActorViewBordersVisible:(_Bool)arg1;
- (void)_setWallpaperVisible:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)_setDimmingViewDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setPrimaryViewProstrated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_animate:(_Bool)arg1 sceneForActiveActorItem:(id)arg2;
- (_Bool)_useRegularSizeClassBehavior;
- (id)_additionalViewControllersToCheckForUserActivity;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPrimaryViewController:(struct UIViewController *)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
