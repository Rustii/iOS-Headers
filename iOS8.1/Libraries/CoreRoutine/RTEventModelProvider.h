/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface RTEventModelProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_locationOfInterestHistograms;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *locationOfInterestHistograms; // @synthesize locationOfInterestHistograms=_locationOfInterestHistograms;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchLocationsOfInterestAssociatedToEvent:(id)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)onDeviceLocationPredictorNotification:(id)arg1;
- (void)refreshAllLOIHistogramsWithHandler:(id)arg1;
- (id)getAllLOIHistogramsForEvents:(id)arg1 andLocationsOfInterest:(id)arg2;
- (id)getObjectForSimilarIdentifier:(id)arg1 fromDictionary:(id)arg2;
- (void)fetchAllLOIHistogramsWithHandler:(id)arg1;
- (void)fetchLOIHistogramForEventLocation:(id)arg1 withHandler:(id)arg2;
- (id)getLOIHistogramForEvents:(id)arg1 andLocationsOfInterest:(id)arg2;
- (double)getOverlapTimeForIntervalStart1:(id)arg1 intervalEnd1:(id)arg2 intervalStart2:(id)arg3 intervalEnd2:(id)arg4;
- (id)init;
- (void)dealloc;

@end

