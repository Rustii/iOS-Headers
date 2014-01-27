/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray;

@interface HourlyScrollerBeltView : UIScrollView <UIScrollViewDelegate>
{
    id <HourlyScrollerBeltDelegate> _hourlyScrollerDelegate;
    NSMutableArray *_cells;
}

@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) id <HourlyScrollerBeltDelegate> hourlyScrollerDelegate; // @synthesize hourlyScrollerDelegate=_hourlyScrollerDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetScrollerOffsets;
- (void)reloadData;
- (id)forecasts;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
