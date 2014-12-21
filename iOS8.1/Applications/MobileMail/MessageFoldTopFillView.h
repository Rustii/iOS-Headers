/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIScrollView;

@interface MessageFoldTopFillView : UIView
{
    UIView *_backgroundView;
    UIView *_topInnerShadowView;
    UIView *_bottomInnerShadowView;
    unsigned long long _fillMode;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setFillMode:(unsigned long long)arg1;
- (void)createBackgroundLayersIfNecessary;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
