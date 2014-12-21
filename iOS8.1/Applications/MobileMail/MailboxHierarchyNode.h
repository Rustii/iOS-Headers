/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFMailboxUid, NSMutableArray, NSString;

@interface MailboxHierarchyNode : NSObject
{
    NSMutableArray *_children;
    MFMailboxUid *_mailbox;
    MFMailboxUid *_parentMailbox;
    NSString *_displayName;
    int _level;
}

@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) MFMailboxUid *parentMailbox; // @synthesize parentMailbox=_parentMailbox;
- (id)description;
- (int)level;
- (void)setLevel:(int)arg1;
- (id)findNodeForMailbox:(id)arg1;
- (id)removeNodeForMailbox:(id)arg1;
- (id)_findNodeForMailbox:(id)arg1 removeNode:(_Bool)arg2;
- (void)addChild:(id)arg1;
- (id)mailbox;
- (id)children;
- (void)dealloc;
- (id)initWithMailbox:(id)arg1;

@end
