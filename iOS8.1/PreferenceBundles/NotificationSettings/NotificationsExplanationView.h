/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class UILabel;

@interface NotificationsExplanationView : UIView <PSHeaderFooterView>
{
    UILabel *_labels[3];
    double _sized;
    double _width;
}

- (id)_accessibilityLabels;
- (void)layoutSubviews;
- (void)dealloc;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)newRegionSampleLabelUnderlined;

@end
