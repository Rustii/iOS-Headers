/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ADBannerControllerDelegate-Protocol.h"
#import <iAd/ADBannerControllerRecipient-Protocol.h>

@class ADBannerController, ADBannerControllerRecipient, ADLocalAd, ADRemoteView, ADTapGestureRecognizer, NSString;

@interface ADInterstitialView : UIView <ADBannerControllerRecipient, ADBannerControllerDelegate>
{
    id <ADInterstitialViewDelegate> _delegate;
    BOOL _loaded;
    BOOL _actionInProgress;
    ADBannerController *_controller;
    ADRemoteView *_remoteView;
    UIView *_dimmerView;
    ADTapGestureRecognizer *_gestureRecognizer;
    ADBannerControllerRecipient *_recipient;
    ADLocalAd *_localAd;
    NSString *_section;
    int _previousOrientation;
    id <ADInterstitialDebuggingDelegate> _debuggingDelegate;
    BOOL _touchesBeganOnCloseBox;
    BOOL _actionWasCancelled;
    BOOL _interstitialWasDismissedByUser;
    BOOL _hasLoaded;
    BOOL _shouldSkipLoadedExceptionCheck;
    BOOL _presentedInView;
    NSString *_authenticationUserName;
}

@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(nonatomic) BOOL presentedInView; // @synthesize presentedInView=_presentedInView;
@property BOOL shouldSkipLoadedExceptionCheck; // @synthesize shouldSkipLoadedExceptionCheck=_shouldSkipLoadedExceptionCheck;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property BOOL interstitialWasDismissedByUser; // @synthesize interstitialWasDismissedByUser=_interstitialWasDismissedByUser;
@property BOOL actionWasCancelled; // @synthesize actionWasCancelled=_actionWasCancelled;
@property BOOL touchesBeganOnCloseBox; // @synthesize touchesBeganOnCloseBox=_touchesBeganOnCloseBox;
@property(nonatomic) id <ADInterstitialDebuggingDelegate> debuggingDelegate; // @synthesize debuggingDelegate=_debuggingDelegate;
@property(nonatomic) int previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) ADLocalAd *localAd; // @synthesize localAd=_localAd;
@property(retain, nonatomic) ADBannerControllerRecipient *recipient; // @synthesize recipient=_recipient;
@property(retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIView *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) ADRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain, nonatomic) ADBannerController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic, getter=isActionInProgress) BOOL actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic) id <ADInterstitialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serverInterstitialViewExpiredAndWasUnloaded:(id)arg1;
- (void)serverStoryboardDidFinishFirstSignificantDraw:(id)arg1;
- (void)serverStoryboardDidTransitionOut:(id)arg1;
- (void)serverBannerViewDidFailToReceiveAd:(id)arg1 withError:(id)arg2;
- (void)serverBannerViewDidLoad:(id)arg1;
- (void)serverBannerViewWillLoad:(id)arg1;
- (id)statusBarViewController;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controllerDidClose:(id)arg1;
- (void)_disposeOfController;
- (void)controllerDidOpen:(id)arg1 withWindowContextId:(id)arg2;
- (int)creativeType;
- (void)bannerControllerDidBecomeAvailable:(id)arg1;
- (void)_gestureHandler:(id)arg1;
- (void)_sanitizeAndForwardErrorToDelegate:(id)arg1;
- (void)_propagateProperties;
- (void)_orientationChanged;
- (void)_propagateFrame;
- (void)didMoveToWindow;
- (void)skipNextLoadedExceptionCheck;
- (void)removeFromSuperview;
- (BOOL)isVisible:(BOOL)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadDebuggerFromPath:(id)arg1 portName:(id)arg2;
- (void)_setLoaded:(BOOL)arg1;
- (void)_sendDidUnload;
- (void)_sendDidLoad;
- (void)setActionInProgress:(BOOL)arg1;
- (void)cancelAction;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)exchangeSubviewAtIndex:(int)arg1 withSubviewAtIndex:(int)arg2;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

