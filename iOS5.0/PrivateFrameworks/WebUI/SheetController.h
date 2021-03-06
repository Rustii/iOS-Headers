/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BrowserPanel-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, UIAlertView;

@interface SheetController : NSObject <BrowserPanel, UIModalViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    struct __CFDictionary *_views;
    UIAlertView *_view;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    int _actionToPerform;
    BOOL _isDismissed;
}

- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (int)panelType;
- (int)panelState;
- (int)pausesPages;
- (BOOL)ignoresPrivateBrowsingStyle;
- (BOOL)disablesStatusBarPress;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)hideSheet;
- (void)setDelegate:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)didPresentAlertView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

