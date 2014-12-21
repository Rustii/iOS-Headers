/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFMessageCriterion, NSArray;

@interface SearchOrderMessageContext : NSObject
{
    unsigned long long _rankValue;
    int _generation;
    unsigned long long _options;
    NSArray *_primaryTerms;
    MFMessageCriterion *_dateCriterion;
    MFMessageCriterion *_unreadCriterion;
    unsigned int _hasTerms:1;
    unsigned int _cached:1;
}

@property(readonly, retain, nonatomic) MFMessageCriterion *unreadCriterion; // @synthesize unreadCriterion=_unreadCriterion;
@property(readonly, retain, nonatomic) MFMessageCriterion *dateCriterion; // @synthesize dateCriterion=_dateCriterion;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSArray *primaryTerms; // @synthesize primaryTerms=_primaryTerms;
- (void)dealloc;

@end
