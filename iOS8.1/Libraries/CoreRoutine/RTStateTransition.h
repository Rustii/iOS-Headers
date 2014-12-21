/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray;

@interface RTStateTransition : NSObject <NSSecureCoding>
{
    NSMutableArray *_listTransitions;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *listTransitions; // @synthesize listTransitions=_listTransitions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)count;
- (id)getRoutes;
- (id)getPredTrans:(double)arg1 duration:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4;
- (void)cleanTransition:(double)arg1;
- (void)showTransition;
- (void)submitTransition:(id)arg1;
- (id)init;

@end
