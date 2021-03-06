/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "AccountListControllerDelegate.h"

@class MFMailboxUid, MailAccount, MailboxListViewControllerMail, MailboxTableCell, NSArray, NSMutableArray, NSSet, NSString, TransferMailboxPickerPalette, TransferMessageViewController, UIImageView, UIView;

@interface TransferMailboxPickerController : UIViewController <AccountListControllerDelegate>
{
    NSArray *_sortedMessages;
    NSMutableArray *_senders;
    NSString *_subject;
    MailAccount *_account;
    NSSet *_sourceAccounts;
    NSSet *_sourceMailboxes;
    MFMailboxUid *_selectedMailbox;
    MailboxListViewControllerMail *_mailboxListController;
    unsigned int _multipleSourceAccounts:1;
    MailboxTableCell *_tableCell;
    TransferMailboxPickerPalette *_pickerPalette;
    TransferMessageViewController *_messageViewController;
    UIView *_animatedView;
    UIView *_lastSuperview;
    UIImageView *_backstop;
    _Bool _hasReceivedViewWillAppear;
    _Bool _isUsingPadDisplayStyle;
    id <TransferMailboxPickerDelegate> _delegate;
}

@property(readonly, nonatomic) NSSet *sourceAccounts; // @synthesize sourceAccounts=_sourceAccounts;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(nonatomic) id <TransferMailboxPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accountList:(id)arg1 didCancel:(_Bool)arg2;
- (void)accountList:(id)arg1 didSelectFavorites:(_Bool)arg2;
- (void)accountList:(id)arg1 didSelectAccount:(id)arg2;
- (void)mailboxList:(id)arg1 didSelectMailbox:(id)arg2;
- (void)allMessageAnimationsDidStop;
- (void)animateMessageToPoint:(struct CGPoint)arg1 inView:(id)arg2 didFinishDelegate:(id)arg3 selector:(SEL)arg4 context:(id)arg5;
- (void)messageAnimationDidStop;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateMessageToCell:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)initiateTransfer;
- (void)finishAnimated:(_Bool)arg1;
- (void)finish;
- (_Bool)canDismiss;
- (_Bool)shouldSnapshot;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateSourceMailboxesFromMessages:(id)arg1;
- (void)updateSubjectFromMessages:(id)arg1;
- (void)updateSenderFromMessages:(id)arg1;
- (double)_navigationBarAndPaletteMaxY;
- (double)_navigationBarMaxY;
- (void)restoreScrollOffset;
- (void)saveScrollOffset;
- (double)_yOffsetMaximum;
- (void)updateTitle;
- (id)contentScrollView;
- (void)loadView;
- (void)mailAccountsDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

