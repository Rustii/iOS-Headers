/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ADAdRecipient-Protocol.h"

@class ADAdSpace, ADRemoteView, ADTapGestureRecognizer, NSString, NSTimer, NSURL, UIViewController;

@interface ADBannerView : UIView <ADAdRecipient>
{
    id <ADBannerViewDelegate> _weakDelegate;
    id <ADBannerViewInternalDelegate> _weakInternalDelegate;
    BOOL _bannerViewActionInProgress;
    BOOL _createdForIBInternal;
    BOOL _hasFailedHitTest;
    BOOL _dimmed;
    int _options;
    int _internalAdType;
    int _adType;
    NSString *_advertisingSection;
    ADRemoteView *_remoteView;
    UIView *_dimmerView;
    UIView *_highlightClippedView;
    UIView *_highlightHittableView;
    NSTimer *_highlightUpdateTimer;
    ADTapGestureRecognizer *_gestureRecognizer;
    NSString *_authenticationUserName;
    NSURL *_serverURL;
    ADAdSpace *_adSpace;
}

+ (struct CGSize)_sizeThatFitsSize:(struct CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3;
+ (struct CGRect)_frameThatFits:(struct CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3;
+ (struct CGSize)_landscapeBannerSize;
+ (struct CGSize)_portraitBannerSize;
+ (struct CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1;
+ (void)setServerURL:(id)arg1;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
@property(nonatomic) BOOL hasFailedHitTest; // @synthesize hasFailedHitTest=_hasFailedHitTest;
@property(readonly, nonatomic) BOOL createdForIBInternal; // @synthesize createdForIBInternal=_createdForIBInternal;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) NSTimer *highlightUpdateTimer; // @synthesize highlightUpdateTimer=_highlightUpdateTimer;
@property(retain, nonatomic) UIView *highlightHittableView; // @synthesize highlightHittableView=_highlightHittableView;
@property(retain, nonatomic) UIView *highlightClippedView; // @synthesize highlightClippedView=_highlightClippedView;
@property(retain, nonatomic) UIView *dimmerView; // @synthesize dimmerView=_dimmerView;
@property(retain, nonatomic) ADRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress; // @synthesize bannerViewActionInProgress=_bannerViewActionInProgress;
@property(readonly, nonatomic) int adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) int internalAdType; // @synthesize internalAdType=_internalAdType;
@property(readonly, nonatomic) int options; // @synthesize options=_options;
- (void)cancelScheduledAd;
- (void)playbackFailed:(id)arg1;
- (void)playbackFinished:(id)arg1;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)scheduleAd;
- (id)descriptionForLCD;
- (id)headlineForLCD;
- (id)logoImageURL;
- (id)staticImageURL;
- (id)videoAssets;
- (id)audioURL;
- (double)videoCountdownDuration;
- (void)resumeImpressionCycling;
- (void)suspendImpressionCycling;
- (void)setInternalDelegate:(id)arg1;
- (id)internalDelegate;
- (void)_forwardErrorToDelegate:(id)arg1;
- (void)cancelBannerViewAction;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)currentContentSizeIdentifier;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (id)requiredContentSizeIdentifiers;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
@property(nonatomic) __weak id <ADBannerViewDelegate> delegate;
- (void)storyboardViewControllerDidPresent;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;
- (void)setRemoteWindowContextId:(unsigned int)arg1;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)_resetHighlightTimer;
- (void)_updateHighlight:(id)arg1;
- (void)layoutSubviews;
- (void)_bannerTapped:(id)arg1;
- (void)presentStoryboardForVideoAd;
- (void)didMoveToWindow;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=isBannerLoaded) BOOL bannerLoaded;
- (void)cycleImpressionImmediately;
- (void)encodeWithCoder:(id)arg1;
- (id)_accessibilityUserTestingElementAttributes;
@property(readonly, nonatomic) UIView *adSpaceView;
- (void)_commonInit;
- (id)initFromIBWithFrame:(struct CGRect)arg1 adType:(int)arg2;
- (id)initFromIBWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithInternalAdType:(int)arg1 options:(int)arg2;
- (id)initWithAdType:(int)arg1;
- (void)dealloc;

@end
