//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSStructuredLocation : ICSProperty
{
}

- (BOOL)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
@property(retain, nonatomic) NSString *routing;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSString *abURLString;
@property(nonatomic) double radius;
@property(retain, nonatomic) NSString *loctype;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *fmtype;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;

@end

