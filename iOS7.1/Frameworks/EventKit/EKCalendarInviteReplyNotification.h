//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification
{
    int _status;
}

@property(nonatomic) int status; // @synthesize status=_status;
- (BOOL)needsAlert;
- (id)inviteReplyNotificationFromEventStore:(id)arg1;
- (id)initWithType:(int)arg1;

@end

