/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class City;

@interface LocationPickerCell : UITableViewCell
{
    City *city;
}

+ (double)height;
+ (id)grayTextAttributes;
+ (id)hightlightTextAttributes;
@property(retain, nonatomic) City *city; // @synthesize city;
- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)_contentString;
- (void)setText:(id)arg1 highlightedText:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

