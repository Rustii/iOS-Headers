/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFSearchAlternativesManagerDelegate.h"

@class MFMessageCriterion, MFSearchAlternativesManager, NSArray, NSMutableAttributedString, NSNumber, NSString;

@interface MFSearchTextParser : NSObject <MFSearchAlternativesManagerDelegate>
{
    NSMutableAttributedString *_searchText;
    MFMessageCriterion *_criterion;
    NSArray *_terms;
    MFSearchAlternativesManager *_alternativesManager;
    NSNumber *_alternativesIdentifier;
    id <MFSearchTextParserDelegate> _delegate;
}

@property(nonatomic) id <MFSearchTextParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dumpDiagnosticInformation:(id)arg1;
- (void)alternativesManager:(id)arg1 finishedWithIdentifier:(id)arg2;
- (void)alternativesManager:(id)arg1 foundAlternatives:(id)arg2 forIdentifier:(id)arg3;
- (void)parseSearchText:(id)arg1;
- (void)_searchCriterionChanged;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
