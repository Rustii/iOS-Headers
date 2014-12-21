/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "RTVisitMonitorDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RTStateModelEarliestLatestEl, RTStateModelOneVisit, RTVisitMonitor;

@interface RTStateModel : NSObject <RTVisitMonitorDelegate, NSSecureCoding>
{
    _Bool _processingRawLocations;
    int _archive1Fd;
    int _archive2Fd;
    id <RTStateModelDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    double _latestIdentification;
    struct RTStateModelOneVisit *_lastCluster;
    NSMutableDictionary *_stateModelLut;
    RTStateModelEarliestLatestEl *_earliestLatestStateModelEl;
    long long _version;
    long long _currentStateModelArchive;
    NSMutableDictionary *_routes;
    RTVisitMonitor *_visitMonitor;
}

+ (double)deriveClusterThresholdFromUncClustAplha:(double)arg1 andUncClustBeta:(double)arg2;
+ (double)getOutOfStateConfidenceWithOneStatePred:(id)arg1;
+ (double)getDistfromLat:(double)arg1 fromLon:(double)arg2 toLat:(double)arg3 toLon:(double)arg4;
+ (_Bool)supportsSecureCoding;
+ (_Bool)archiveExists;
+ (id)diagnosticFiles;
+ (id)pathToChecksumFor:(long long)arg1;
+ (id)pathToArchiveFor:(long long)arg1;
@property(retain, nonatomic) RTVisitMonitor *visitMonitor; // @synthesize visitMonitor=_visitMonitor;
@property(retain, nonatomic) NSMutableDictionary *routes; // @synthesize routes=_routes;
@property(nonatomic) _Bool processingRawLocations; // @synthesize processingRawLocations=_processingRawLocations;
@property(nonatomic) long long currentStateModelArchive; // @synthesize currentStateModelArchive=_currentStateModelArchive;
@property(nonatomic) int archive2Fd; // @synthesize archive2Fd=_archive2Fd;
@property(nonatomic) int archive1Fd; // @synthesize archive1Fd=_archive1Fd;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) RTStateModelEarliestLatestEl *earliestLatestStateModelEl; // @synthesize earliestLatestStateModelEl=_earliestLatestStateModelEl;
@property(retain, nonatomic) NSMutableDictionary *stateModelLut; // @synthesize stateModelLut=_stateModelLut;
@property(retain, nonatomic) RTStateModelOneVisit *lastCluster; // @synthesize lastCluster=_lastCluster;
@property(nonatomic) double latestIdentification; // @synthesize latestIdentification=_latestIdentification;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <RTStateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onVisits:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisits;
- (void)purgeProcessedData;
- (void)processRawLocations:(id)arg1;
- (id)getOOStClusterData:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 refLoc:(id)arg4;
- (id)demoLocationsOfInterest;
- (id)createLocationOfInterestFromOneState:(id)arg1 shouldGeocode:(_Bool)arg2;
- (double)getMaxDistFromInterval:(double)arg1 withVelocity:(double)arg2;
- (double)getNumberOfWeeksInStateModel;
- (_Bool)anyClusterOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 andEnteredEarlierThan:(double)arg3;
- (id)getPredictedLocationsOfInterestFromStartingLocationOfInterest:(id)arg1;
- (id)getLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2;
- (id)findClusterWithLocation:(id)arg1;
- (void)createNewState:(id)arg1;
- (id)getLocationsOfInterestOfType:(long long)arg1;
- (_Bool)geocodeAllLocationsOfInterest;
- (id)getAllLocationsOfInterest;
- (void)removeLocationOfInterest:(id)arg1;
- (void)injectLocationOfInterest:(id)arg1;
- (id)getLocationOfInterestAtLocation:(id)arg1;
- (id)getPredictedLocationsOfInterestOnDate:(id)arg1;
- (long long)getRoutineModeFromLocation:(id)arg1;
- (id)getNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3;
- (void)identifyHomeAndWork;
- (void)showRecentActivities:(int)arg1;
- (void)extractEarliestLatestStateModelEntry;
- (void)showData;
- (void)submitClusters:(id)arg1 withCompletionHandler:(id)arg2;
- (void)identifySequentialClustersFromLocations:(id)arg1 withCompletionHandler:(id)arg2;
- (double)getLoiConfidenceFromDataPts:(long long)arg1;
- (id)unarchive;
- (id)unarchiveStateModelFor:(long long)arg1;
- (void)archive;
- (void)purge;
- (void)sequentialClusterIdentification;
- (void)clear;
- (void)clearArchiveFor:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)shutdown;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (int)openFileDescriptorFor:(long long)arg1;
- (int)fdToArchiveFor:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
