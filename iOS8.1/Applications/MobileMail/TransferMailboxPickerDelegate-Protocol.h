/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol TransferMailboxPickerDelegate <NSObject>
- (void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(_Bool)arg2;
- (void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3;

@optional
- (id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2;
- (void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(struct CGRect)arg2 inView:(id)arg3 completion:(id)arg4;
- (void)transferMailboxPickerController:(id)arg1 animateMessageToPoint:(struct CGPoint)arg2 inView:(id)arg3 didFinishDelegate:(id)arg4 selector:(SEL)arg5 context:(id)arg6;
@end

