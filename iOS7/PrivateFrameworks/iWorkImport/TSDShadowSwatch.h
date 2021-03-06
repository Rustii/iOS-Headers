/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDPathPainter-Protocol.h"

@class TSDShadow;

// Not exported
@interface TSDShadowSwatch : NSObject <TSDPathPainter>
{
    TSDShadow *mShadow;
}

@property(readonly, nonatomic) TSDShadow *shadow; // @synthesize shadow=mShadow;
- (void)p_drawCurvedShadowInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 forShadow:(id)arg3 forImage:(struct CGImage *)arg4 forSwatchRect:(struct CGRect)arg5;
- (void)p_drawContactShadowInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 forShadow:(id)arg3 forImage:(struct CGImage *)arg4 forSwatchRect:(struct CGRect)arg5;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 forImage:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithShadow:(id)arg1;

@end

