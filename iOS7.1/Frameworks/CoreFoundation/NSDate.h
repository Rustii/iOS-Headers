//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSDate : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)date;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)distantPast;
+ (id)distantFuture;
+ (double)timeIntervalSinceReferenceDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)addTimeInterval:(double)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqualToDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceDate:(id)arg1;
- (id)laterDate:(id)arg1;
- (id)earlierDate:(id)arg1;
- (int)compare:(id)arg1;
- (unsigned long)_cfTypeID;
- (BOOL)isNSDate__;
- (double)timeIntervalSinceReferenceDate;

@end
