/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer, CAStateController, City, NSMutableArray;

@interface WAWeatherCondition : NSObject
{
    CALayer *_rootLayer;
    _Bool _playing;
    _Bool _hidden;
    _Bool _shouldRasterize;
    _Bool _multiCityMode;
    _Bool _forcesCondition;
    float _balanceValue;
    City *_city;
    double _alpha;
    double _speed;
    double _timeOffset;
    CALayer *_layer;
    long long _condition;
    long long _forcesNight;
    NSMutableArray *_gyroLayers;
    CAStateController *_stateController;
}

@property(retain, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(retain, nonatomic) NSMutableArray *gyroLayers; // @synthesize gyroLayers=_gyroLayers;
@property(nonatomic) long long forcesNight; // @synthesize forcesNight=_forcesNight;
@property(nonatomic) _Bool forcesCondition; // @synthesize forcesCondition=_forcesCondition;
@property(nonatomic) long long condition; // @synthesize condition=_condition;
@property(nonatomic) _Bool multiCityMode; // @synthesize multiCityMode=_multiCityMode;
@property(nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) float balanceValue; // @synthesize balanceValue=_balanceValue;
@property(nonatomic) City *city; // @synthesize city=_city;
- (void)_resetState;
- (void)_setMultiCityModeEnabled;
- (void)_setMultiCityMode:(_Bool)arg1;
- (void)refresh;
- (void)togglePlaying;
- (void)setTime:(float)arg1;
- (void)resume;
- (void)pause;
- (void)setCondition:(long long)arg1 balanceValue:(float)arg2;
- (void)setAlpha:(double)arg1 animationDuration:(double)arg2;
- (void)dealloc;
- (id)init;

@end

