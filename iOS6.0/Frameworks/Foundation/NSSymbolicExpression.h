/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSExpression.h>

@class NSString;

@interface NSSymbolicExpression : NSExpression
{
    NSString *_token;
}

- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)constantValue;
- (id)predicateFormat;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end

