/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCondition;

@interface _ThreadSafeContainer : NSObject
{
    NSCondition *_condition;
    id _value;
}

+ (id)container;
@property(retain) id value; // @synthesize value=_value;
- (void)signal;
- (_Bool)waitUntilDate:(id)arg1;
- (void)wait;
- (void)dealloc;
- (id)init;

@end
