/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "LoadRequestManagerDelegate.h"
#import "MFMessageViewingContextDelegate.h"
#import "StackDataSource.h"
#import "StackDelegate.h"

@class LoadRequestManager, MessageViewController, NSMutableDictionary, NSString, StackController, UIBarButtonItem, UIView;

@interface MailDetailViewController : UIViewController <LoadRequestManagerDelegate, StackDataSource, StackDelegate, MFMessageViewingContextDelegate>
{
    UIView *_currentMessageSnapshotView;
    UIBarButtonItem *_toolbarTransferCancelButton;
    unsigned long long _editingState;
    StackController *_stackController;
    LoadRequestManager *_loadRequestManager;
    NSMutableDictionary *_messageViews;
    _Bool _shouldScrollCurrentMessageToTop;
    _Bool _shouldResnapshotMessageForStack;
    _Bool _useStackViewForTransfer;
    MessageViewController *_messageViewController;
}

@property(retain, nonatomic) MessageViewController *messageViewController; // @synthesize messageViewController=_messageViewController;
@property(nonatomic) unsigned long long editingState; // @synthesize editingState=_editingState;
- (void)transferCancelButtonClicked:(id)arg1;
- (id)mailDetailViewController;
- (id)titleForCurrentTransferState;
- (id)_toolbarPopupButton;
- (id)_barFixedSpaceWithWidth:(double)arg1;
- (id)_toolbarTransferCancelButton;
- (void)stackController:(id)arg1 willRemoveViewForItem:(id)arg2;
- (void)stackController:(id)arg1 willDisplayView:(id)arg2 forItem:(id)arg3;
- (void)stackController:(id)arg1 willStackView:(id)arg2 forItem:(id)arg3;
- (void)stackController:(id)arg1 dataLoadTimedOutInView:(id)arg2 forItem:(id)arg3;
- (void)stackControllerDidStopStackingViews:(id)arg1;
- (void)stackControllerWillStartStackingViews:(id)arg1;
- (void)loadRequestManager:(id)arg1 loadItem:(id)arg2 userInfo:(id)arg3;
- (void)rescheduleLoadManager;
- (void)suspendLoadManager;
- (void)stackController:(id)arg1 loadDataForItem:(id)arg2 inView:(id)arg3;
- (_Bool)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inView:(id)arg3;
- (id)stackController:(id)arg1 viewForItem:(id)arg2;
- (id)defaultViewForStackController:(id)arg1;
- (id)defaultItemForStackController:(id)arg1;
- (struct UIEdgeInsets)stackContainerViewEdgeInsetsForStackController:(id)arg1;
- (id)stackContainerViewForStackController:(id)arg1;
- (void)bufferedMessageViewDidCreateImage:(id)arg1;
- (void)messageViewingContextContentLoadCompleted:(id)arg1;
- (void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(_Bool)arg3;
- (id)keyForItem:(id)arg1;
- (void)removeStackedViews:(_Bool)arg1;
- (void)displayStackedViewsForMessages:(id)arg1 options:(int)arg2 animated:(_Bool)arg3;
- (void)displayStackedViewsForMessages:(id)arg1 animated:(_Bool)arg2;
- (id)_itemsToStackFromMessages:(id)arg1 options:(int)arg2 withStackController:(id)arg3;
- (id)loadRequestManager;
- (id)stackControllerCreateIfNeeded:(_Bool)arg1;
- (void)animateMessageToPoint:(struct CGPoint)arg1 inView:(id)arg2 didFinishDelegate:(id)arg3 selector:(SEL)arg4 context:(id)arg5;
- (_Bool)hasSelectedMessages;
- (void)removeSnapshotOfCurrentMessage;
- (void)updateSnapshotOfCurrentMessage;
- (void)takeSnapshotOfCurrentMessage;
- (id)snapshotOfCurrentMessageWithType:(int)arg1;
- (struct UIEdgeInsets)edgeInsetsForNavbar;
- (void)setEditingState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)resignPreparedForTransferOfMessages:(_Bool)arg1;
- (void)hideTransferNavigationControllerFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showTransferNavigationController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
