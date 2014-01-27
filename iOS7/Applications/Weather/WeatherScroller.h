/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class UIImage, UIImageView, UIView;

@interface WeatherScroller : UIScrollView <UIScrollViewDelegate>
{
    id <WeatherScrollerDelegate> _weatherScrollerDelegate;
    UIImageView *_backgroundHeader;
    UIImageView *_backgroundImage;
    UIView *_todayHeader;
    UIView *_todayHourlyForecasts;
    UIView *_tomorrowHeader;
    UIView *_tomorrowHourlyForecasts;
    UIView *_unusedDaysFooter;
    UIImageView *_infoFooter;
    UIImageView *_todayBackground;
    UIImageView *_tomorrowBackground;
    UIImageView *_unusedBackground;
    UIImageView *_tomorrowCastShadow;
    UIImageView *_extraDaysCastShadow;
    UIImageView *_footerCastShadow;
    _Bool _isDay;
    _Bool _isOpeningOrClosing;
    _Bool _isSlammingShut;
    _Bool _isDroppedShut;
    UIImage *_stretchableDrawer;
    UIImageView *_topDrawerShadow;
    UIImageView *_bottomDrawerShadow;
    UIImageView *_todayTopBevel;
    UIImageView *_tomorrowTopBevel;
}

@property(retain, nonatomic) UIImageView *tomorrowTopBevel; // @synthesize tomorrowTopBevel=_tomorrowTopBevel;
@property(retain, nonatomic) UIImageView *todayTopBevel; // @synthesize todayTopBevel=_todayTopBevel;
@property(retain, nonatomic) UIImageView *bottomDrawerShadow; // @synthesize bottomDrawerShadow=_bottomDrawerShadow;
@property(retain, nonatomic) UIImageView *topDrawerShadow; // @synthesize topDrawerShadow=_topDrawerShadow;
@property(retain, nonatomic) UIImage *stretchableDrawer; // @synthesize stretchableDrawer=_stretchableDrawer;
@property(nonatomic) id <WeatherScrollerDelegate> weatherScrollerDelegate; // @synthesize weatherScrollerDelegate=_weatherScrollerDelegate;
@property(nonatomic) _Bool isOpeningOrClosing; // @synthesize isOpeningOrClosing=_isOpeningOrClosing;
- (void)prepareForClosureAnimation;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateHeaderBackgrounds;
- (void)setDrawerPosition:(float)arg1;
- (float)maxDistance;
- (float)closeDistance;
- (void)closeDrawer:(id)arg1;
- (CDStruct_b2fbf00d)timeToPartiallyCloseDrawer:(_Bool)arg1;
- (void)openDrawerCompletely:(_Bool)arg1;
- (CDStruct_b2fbf00d)timeToPartiallyOpenDrawer:(_Bool)arg1;
- (void)showBevels:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_layoutShadows;
- (void)_updateBevelAlphas;
- (void)slide:(id)arg1;
- (void)showInfoShadow:(_Bool)arg1;
- (void)_createHeadersAndFooters:(id)arg1;
- (void)_createShadows;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dictionary:(id)arg2;

@end
