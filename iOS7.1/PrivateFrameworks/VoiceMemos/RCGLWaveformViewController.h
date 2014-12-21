//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RCGLWaveformRendererDelegate.h"
#import "RCWaveformSelectionOverlayDelegate.h"
#import "UIScrollViewDelegate.h"

@class CADisplayLink, NSMutableArray, NSTimer, RCAcousticAnnotationView, RCGLWaveformRenderer, RCUIConfiguration, RCWaveformScrollView, RCWaveformSelectionOverlay, UIView;

@interface RCGLWaveformViewController : UIViewController <UIScrollViewDelegate, RCGLWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate>
{
    RCWaveformScrollView *_scrollView;
    RCGLWaveformRenderer *_rendererController;
    RCWaveformSelectionOverlay *_selectionOverlay;
    RCAcousticAnnotationView *_acousticAnnotationView;
    UIView *_bottomLineView;
    UIView *_topLineView;
    NSMutableArray *_timeMarkerViews;
    NSTimer *_overlayAutoscrollTimer;
    CADisplayLink *_displayLink;
    CDStruct_73a5d3ca _visibleTimeRangeBeforeSelectionTracking;
    BOOL _timeMarkerViewsNeedInitialLayout;
    BOOL _timeMarkerViewsUpdatesDisabled;
    BOOL _scrubbing;
    float _resumingToForegroundAutoscrollRate;
    double _timeBeganAutoscrolling;
    float _layoutWidth;
    double _autoscrollRate;
    double _autoscrollBaseDuration;
    BOOL _scrubbingEnabled;
    BOOL _screenUpdatesDisabled;
    BOOL _playing;
    BOOL _selectedTimeRangeEditingEnabled;
    BOOL _clipTimeMarkersToDuration;
    BOOL _autoscrolling;
    id <RCGLWaveformViewDelegate> _delegate;
    RCUIConfiguration *_UIConfiguration;
    unsigned int _currentTimeDisplayOptions;
    float _selectionVisibleMargin;
    double _currentTime;
    double _duration;
    double _maximumSelectionDuration;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _selectedTimeRange;
}

@property(readonly, nonatomic, getter=isAutoscrolling) BOOL autoscrolling; // @synthesize autoscrolling=_autoscrolling;
@property(nonatomic) BOOL clipTimeMarkersToDuration; // @synthesize clipTimeMarkersToDuration=_clipTimeMarkersToDuration;
@property(nonatomic) float selectionVisibleMargin; // @synthesize selectionVisibleMargin=_selectionVisibleMargin;
@property(nonatomic) unsigned int currentTimeDisplayOptions; // @synthesize currentTimeDisplayOptions=_currentTimeDisplayOptions;
@property(copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(nonatomic, getter=isSelectedTimeRangeEditingEnabled) BOOL selectedTimeRangeEditingEnabled; // @synthesize selectedTimeRangeEditingEnabled=_selectedTimeRangeEditingEnabled;
@property(nonatomic) double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
@property(nonatomic) CDStruct_73a5d3ca selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) BOOL screenUpdatesDisabled; // @synthesize screenUpdatesDisabled=_screenUpdatesDisabled;
@property(nonatomic) BOOL scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) __weak id <RCGLWaveformViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_stopDisplayLink;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_startDisplayLink;
- (void)_scrollViewPanGestureRecognized:(id)arg1;
- (void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
- (void)_setTimeMarkerViewsNeedInitialLayout:(BOOL)arg1;
- (struct CGRect)_frameForTimeMarkerView:(id)arg1;
- (void)_updateCurrentTimeDisplay;
- (void)_updateSelectionOverlayWithAnimationDuration:(double)arg1;
- (void)_updateVisibleAreaWithAnimationDuration:(double)arg1;
- (BOOL)_shouldAutoAnimateScrollChanges;
- (void)_updateAnnotationViews;
- (void)_setTimeMarkerViewUpdatesDisabled:(BOOL)arg1;
- (void)_updateWaveformViewContentSizeAndOffset;
- (id)_waveformRenderer;
- (void)waveformRendererContentDidFinishLoading:(id)arg1;
- (void)waveformRenderer:(id)arg1 contentWidthDidChange:(float)arg2;
- (void)_autoscrollOverlayIfNecessary;
- (double)waveformSelectionOverlay:(id)arg1 timeForOffset:(float)arg2;
- (float)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3;
- (CDStruct_73a5d3ca)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(CDStruct_73a5d3ca)arg2 isTracking:(BOOL)arg3;
- (void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
- (void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)_isScrubbing;
- (BOOL)_isScrubbingSelectionTimeRange;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)stopAutoscrolling;
- (void)beginAutoscrollingAtTime:(double)arg1 atRate:(float)arg2;
- (float)currentPlayheadPosition;
- (CDStruct_73a5d3ca)timeRangeByInsettingVisibleTimeRange:(CDStruct_73a5d3ca)arg1 inset:(float)arg2;
- (struct CGRect)waveformRectForLayoutBounds:(struct CGRect)arg1;
- (void)_applyUIConfiguration;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
- (void)_setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 updateVisibleTimeRange:(BOOL)arg2 notifyDelegate:(BOOL)arg3 animationDuration:(double)arg4;
- (CDStruct_73a5d3ca)_visibleTimeRangeForCurrentSelectionTimeRange;
- (void)setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)viewDidLayoutSubviews;
- (void)setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 animationDuration:(double)arg2;
@property(nonatomic) __weak id <RCWaveformDataSource> dataSource;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
