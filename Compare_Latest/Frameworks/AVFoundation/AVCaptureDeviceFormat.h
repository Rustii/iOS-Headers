//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

+ (void)initialize;
@property(readonly, nonatomic) int autoFocusSystem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly, nonatomic) float maxISO;
@property(readonly, nonatomic) float minISO;
- (id)figCaptureSourceFormat;
- (id)AVCaptureSessionPresets;
- (CDStruct_1ef3fb1f)previewDimensions;
- (CDStruct_1ef3fb1f)sensorDimensions;
- (id)vtScalingMode;
- (BOOL)isDefaultActiveFormat;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (int)supportedFormatsArrayIndex;
- (BOOL)needsPhotoPreviewDPCC;
- (BOOL)supportsHighProfileH264;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (BOOL)isExperimental;
- (int)rawBitDepth;
- (BOOL)isSISSupported;
- (BOOL)supportsDynamicCrop;
- (BOOL)supportsLowLightBoost;
- (BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (int)supportedStabilizationMethod;
- (BOOL)supportsHighResolutionStillImageOutput;
@property(readonly, nonatomic) CDStruct_1ef3fb1f highResolutionStillImageDimensions;
- (BOOL)isVideoStabilizationModeSupported:(int)arg1;
@property(readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property(readonly, nonatomic) float videoZoomFactorUpscaleThreshold;
@property(readonly, nonatomic) float videoMaxZoomFactor;
@property(readonly, nonatomic) float videoFieldOfView;
@property(readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (id)description;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2;

@end

