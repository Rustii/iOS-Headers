/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSDictionary.h"

@class NSSet;

@interface MMMessagesChangedContext : NSDictionary
{
    NSSet *_messages;
    NSSet *_indexPaths;
}

@property(retain, nonatomic) NSSet *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(retain, nonatomic) NSSet *messages; // @synthesize messages=_messages;
- (void)dealloc;

@end

