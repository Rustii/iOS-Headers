/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PSListController.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface SUPrefDetailedReleaseNotes : PSListController <UIWebViewDelegate>
{
    NSString *_releaseNotes;
}

@property(retain, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadView;
- (id)specifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
