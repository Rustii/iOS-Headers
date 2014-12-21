/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class MailboxContentViewCell, UIColor;

@interface _CellStaticView : UIView
{
    unsigned long long _lastDrawingGenerationNumber;
    unsigned long long _lastLayoutGenerationNumber;
    unsigned int _highlighted:1;
    MailboxContentViewCell *_cell;
    UIColor *_originalBackgroundColor;
}

@property(retain, nonatomic) UIColor *originalBackgroundColor; // @synthesize originalBackgroundColor=_originalBackgroundColor;
@property(nonatomic) MailboxContentViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setNeedsDisplay;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
