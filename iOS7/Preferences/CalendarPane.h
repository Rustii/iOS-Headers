/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSEditingPane.h"

#import "EKCalendarChooserDelegate-Protocol.h"

@class EKCalendarChooser;

@interface CalendarPane : PSEditingPane <EKCalendarChooserDelegate>
{
    EKCalendarChooser *_chooser;
}

@property(retain, nonatomic) EKCalendarChooser *chooser; // @synthesize chooser=_chooser;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

