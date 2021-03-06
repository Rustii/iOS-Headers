/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class AccountLinkButton, NSURL;

@interface AccountLinkButtonView : UIView <PSHeaderFooterView>
{
    AccountLinkButton *_linkButton;
    NSURL *_helpURL;
    float _height;
}

- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)_goToAccountURL;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

