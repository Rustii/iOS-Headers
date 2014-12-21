/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSUUID;

@interface RTStateTransitionRouteHistogramElement : NSObject
{
    NSUUID *_routeUUID;
    long long _visitCount;
    NSDate *_lastUsed;
}

@property(retain, nonatomic) NSDate *lastUsed; // @synthesize lastUsed=_lastUsed;
@property(nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
@property(retain, nonatomic) NSUUID *routeUUID; // @synthesize routeUUID=_routeUUID;
- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1 lastUsed:(id)arg2;

@end
