/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PSCellularUsageApp : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_displayName;
    double _totalBytesUsed;
    double _roamingBytesUsed;
}

@property(nonatomic) double roamingBytesUsed; // @synthesize roamingBytesUsed=_roamingBytesUsed;
@property(nonatomic) double totalBytesUsed; // @synthesize totalBytesUsed=_totalBytesUsed;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)dealloc;

@end

