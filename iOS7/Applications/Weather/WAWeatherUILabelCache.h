/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CPBitmapStore, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WAWeatherUILabelCache : NSObject
{
    CPBitmapStore *_store;
    NSMutableDictionary *_timeLabels;
    NSMutableDictionary *_temperatureLabels;
    NSMutableDictionary *_lightTemperatureLabels;
    NSMutableDictionary *_boldTemperatureLabels;
    NSMutableDictionary *_precipitationLabels;
    NSMutableDictionary *_cityCardNameLabels;
    NSMutableDictionary *_cityCardNameBaselines;
    NSMutableDictionary *_cityCardTempLabels;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)baselineForCityCardName:(id)arg1;
+ (id)imageForCityCardName:(id)arg1;
+ (id)imageForPrecipitation:(id)arg1;
+ (id)imageForTemperature:(id)arg1 withStyle:(unsigned long long)arg2;
+ (id)imageForWeekday:(id)arg1;
+ (id)imageForTime:(id)arg1;
+ (void)precachePrecipitation;
+ (void)precacheTemperatures;
+ (void)precacheSpecialCaseText:(id)arg1;
+ (void)_slowlyPrecacheTemperatures;
+ (void)precacheWeekdays;
+ (void)precacheTimes;
+ (void)_slowlyPrecacheTimes;
+ (void)precacheLabels;
+ (id)imageForLabelWithText:(id)arg1 withLightlabel:(_Bool)arg2;
+ (id)imageForLabelWithText:(id)arg1 withLightlabel:(_Bool)arg2 withFont:(id)arg3 limitToWidth:(double)arg4;
+ (id)imageForLabelWithText:(id)arg1 withLightlabel:(_Bool)arg2 withFont:(id)arg3;
+ (id)attributesForType:(unsigned long long)arg1;
+ (id)imageForAttributedString:(id)arg1;
+ (id)imageForString:(id)arg1 attributes:(id)arg2;
+ (id)imageForString:(id)arg1 attributes:(id)arg2 size:(struct CGSize)arg3 baselineOffset:(double *)arg4;
+ (id)sharedUILabelCache;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *cityCardTempLabels; // @synthesize cityCardTempLabels=_cityCardTempLabels;
@property(retain, nonatomic) NSMutableDictionary *cityCardNameBaselines; // @synthesize cityCardNameBaselines=_cityCardNameBaselines;
@property(retain, nonatomic) NSMutableDictionary *cityCardNameLabels; // @synthesize cityCardNameLabels=_cityCardNameLabels;
@property(retain, nonatomic) NSMutableDictionary *precipitationLabels; // @synthesize precipitationLabels=_precipitationLabels;
@property(retain, nonatomic) NSMutableDictionary *boldTemperatureLabels; // @synthesize boldTemperatureLabels=_boldTemperatureLabels;
@property(retain, nonatomic) NSMutableDictionary *lightTemperatureLabels; // @synthesize lightTemperatureLabels=_lightTemperatureLabels;
@property(retain, nonatomic) NSMutableDictionary *temperatureLabels; // @synthesize temperatureLabels=_temperatureLabels;
@property(retain, nonatomic) NSMutableDictionary *timeLabels; // @synthesize timeLabels=_timeLabels;
@property(retain, nonatomic) CPBitmapStore *store; // @synthesize store=_store;
- (id)cachedImageForWeekday:(id)arg1;
- (id)cachedImageForTime:(id)arg1;
- (void)resetLocale;
- (void)deleteAndCreateCache;
- (void)dealloc;
- (id)init;

@end

