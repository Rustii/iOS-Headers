/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MessageSelectionDataSource <NSObject>
- (id)conversationContainingMessage:(id)arg1;
- (id)messageToSelectFromMessage:(id)arg1 withDirection:(int)arg2;
- (id)messageForMessageInfo:(id)arg1;
- (id)messageAtFlattenedIndex:(unsigned long long)arg1;
- (unsigned long long)flattenedIndexOfWhereMessageShouldGo:(id)arg1;
- (unsigned long long)flattenedIndexOfMessage:(id)arg1;
- (int)lastChangeDirection;
- (_Bool)allSourcesThreadMessages;
- (unsigned long long)localMessageCount;
- (id)comparatorForMallContainingMessage:(SEL)arg1;
- (id)comparator;
@end

