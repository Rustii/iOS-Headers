/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HomeSharing/HSDAAPML3TrackDataSource.h>

@class NSDictionary, NSNumber;

@interface HSJaliscoML3TrackDataSource : HSDAAPML3TrackDataSource
{
    NSDictionary *_chapterDataForAdamIDs;
    NSDictionary *_flavorDataForAdamIDs;
    NSNumber *_accountID;
    long long _preferredVideoQuality;
}

@property(nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
- (void)dealloc;
- (void)invalidate;
- (id)createImportItem;
- (id)initWithItemsResponseData:(id)arg1 flavorDataForAdamIDs:(id)arg2 chapterDataForAdamIDs:(id)arg3;

@end
