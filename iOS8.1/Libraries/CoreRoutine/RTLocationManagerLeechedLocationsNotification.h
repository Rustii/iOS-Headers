/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RTNotification.h"

@class NSArray;

@interface RTLocationManagerLeechedLocationsNotification : RTNotification
{
    NSArray *_leechedLocations;
}

+ (id)notificationName;
@property(retain, nonatomic) NSArray *leechedLocations; // @synthesize leechedLocations=_leechedLocations;
- (void).cxx_destruct;
- (id)initWithLocations:(id)arg1;

@end

