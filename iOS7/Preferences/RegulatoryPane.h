/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSEditingPane.h"

@class UIImageView, UIScrollView;

@interface RegulatoryPane : PSEditingPane
{
    UIScrollView *_scrollView;
    UIImageView *_primaryImageView;
    UIImageView *_secondaryImageView;
}

- (void)dealloc;
- (void)viewDidBecomeVisible;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)handlesDoneButton;
- (_Bool)shouldInsetContent;

@end
