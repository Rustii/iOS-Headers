/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UILabel.h"

@class FocusedTruncationRenderer;

@interface MFSimpleLabel : UILabel
{
    FocusedTruncationRenderer *_renderer;
    id _layout;
    struct _NSRange _focusedRange;
}

@property(retain, nonatomic) id layout; // @synthesize layout=_layout;
@property(nonatomic) struct _NSRange focusedRange; // @synthesize focusedRange=_focusedRange;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)dealloc;
- (id)init;

@end

