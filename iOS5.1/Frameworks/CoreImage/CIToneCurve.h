/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIToneCurve : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIVector *inputPoint2;
    CIVector *inputPoint3;
    CIVector *inputPoint4;
    CIImage *_curveImage;
}

+ (void)splineCurveTable:(float *)arg1 tableSize:(int)arg2 gamma:(float)arg3 from:(const struct CGPoint *)arg4;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1 linear:(BOOL)arg2;
+ (id)customAttributes;
@property(copy, nonatomic) CIVector *inputPoint4; // @synthesize inputPoint4;
@property(copy, nonatomic) CIVector *inputPoint3; // @synthesize inputPoint3;
@property(copy, nonatomic) CIVector *inputPoint2; // @synthesize inputPoint2;
@property(copy, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(copy, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernel16;
- (id)_kernel8;
- (void)setDefaults;
- (void)dealloc;

@end

