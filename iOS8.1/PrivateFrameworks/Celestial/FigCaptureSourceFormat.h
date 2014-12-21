//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FigXPCCoding.h"

@class NSArray, NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding>
{
    NSDictionary *_formatDictionary;
    BOOL _isMultiStreamFormat;
    struct opaqueCMFormatDescription *_formatDescription;
}

+ (void)initialize;
- (CDStruct_1ef3fb1f)_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1;
- (CDStruct_1ef3fb1f)_maxUseableSensorDimensions;
- (CDStruct_1ef3fb1f)_outputDimensions;
@property(readonly) NSArray *AVCaptureSessionPresets;
@property(readonly, getter=isHighProfileH264Supported) BOOL highProfileH264Supported;
@property(readonly) CDStruct_1ef3fb1f highResStillImageDimensions;
@property(readonly, getter=isHighResStillImageSupported) BOOL highResStillImageSupported;
@property(readonly, getter=isHDRSupported) BOOL hdrSupported;
@property(readonly, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property(readonly) BOOL needsPreviewDPCC;
@property(readonly, getter=isHighResPhotoFormat) BOOL highResPhotoFormat;
@property(readonly, getter=isPhotoFormat) BOOL photoFormat;
@property(readonly) BOOL prefersSensorHDREnabled;
@property(readonly) int sensorHDRCompanionIndex;
@property(readonly) BOOL hasSensorHDRCompanionIndex;
@property(readonly) CDStruct_1ef3fb1f sourceCropAspectRatio;
@property(readonly) CDStruct_1ef3fb1f sensorCropDimensions;
@property(readonly) int frontEndScalerCompanionIndex;
@property(readonly) BOOL hasFrontEndScalerCompanionIndex;
@property(readonly, getter=isMultiStreamFormat) BOOL multiStreamFormat;
@property(readonly) int autoFocusSystem;
@property(readonly) int maxIntegrationTimeOverride;
@property(readonly) float aeMaxGain;
@property(readonly) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly) float maxISO;
@property(readonly) float minISO;
@property(readonly) BOOL ispChromaNoiseReduction;
@property(readonly) int temporalNoiseReductionMode;
@property(readonly) float videoScaleFactor;
@property(readonly) int videoRawBitDepth;
@property(readonly, getter=isVideoLowLightBinningSwitchSupported) BOOL videoLowLightBinningSwitchSupported;
@property(readonly, getter=isVideoZoomDynamicSensorCropSupported) BOOL videoZoomDynamicSensorCropSupported;
@property(readonly) float videoZoomFactorUpscaleThreshold;
@property(readonly) float videoMaxZoomFactor;
@property(readonly, getter=isVideoZoomSupported) BOOL videoZoomSupported;
@property(readonly) int videoStabilizationTypeOverrideForStandard;
- (BOOL)isVideoStabilizationModeSupported:(int)arg1;
@property(readonly, getter=isVideoBinned) BOOL videoBinned;
@property(readonly) float videoFieldOfView;
@property(readonly) float videoDefaultMaxFrameRate;
@property(readonly) float videoDefaultMinFrameRate;
@property(readonly) float videoMaxSupportedFrameRate;
@property(readonly) float videoMinSupportedFrameRate;
@property(readonly) CDStruct_1ef3fb1f sensorDimensions;
@property(readonly) CDStruct_1ef3fb1f videoDimensions;
@property(readonly) unsigned long videoFormat;
@property(readonly) int videoFormatIndex;
@property(readonly, getter=isDefaultActiveFormat) BOOL defaultActiveFormat;
@property(readonly, getter=isExperimental) BOOL experimental;
@property(readonly) struct opaqueCMFormatDescription *formatDescription;
@property(readonly) unsigned long mediaType;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithNewVideoPixelFormat:(unsigned long)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
