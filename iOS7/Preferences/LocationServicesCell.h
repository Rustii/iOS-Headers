/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSSwitchTableCell.h"

@class LocationUsageMixin, NSURL;

@interface LocationServicesCell : PSSwitchTableCell
{
    LocationUsageMixin *_location;
    NSURL *_bundleURL;
    _Bool _isWebApp;
}

@property(readonly, nonatomic) LocationUsageMixin *location; // @synthesize location=_location;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)getLazyIcon;
- (id)getLazyIconID;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
