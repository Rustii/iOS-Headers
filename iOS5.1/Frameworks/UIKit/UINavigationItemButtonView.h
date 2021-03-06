/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UINavigationItemView.h>

@class UIColor, _UIBarButtonItemAppearanceStorage;

@interface UINavigationItemButtonView : UINavigationItemView
{
    int _style;
    BOOL _pressed;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
}

- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (float)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)_backButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)dealloc;
- (id)_defaultFont;
- (id)_scriptingInfo;
- (BOOL)pressed;
- (void)setPressed:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct CGSize)imageSize;
- (id)image;
- (id)title;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBackground;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(int)arg1;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (id)_appearanceStorage;

@end

