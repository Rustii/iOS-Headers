/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet;

@interface IDSPushHandlerContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_topics;
    NSSet *_commands;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSSet *commands; // @synthesize commands=_commands;
@property(copy, nonatomic) NSSet *topics; // @synthesize topics=_topics;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3;

@end

