/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class UIColor;

@interface _SwipeActionButton : UIButton
{
    UIColor *_defaultBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void)dealloc;
- (long long)_numberOfLinesForText:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

