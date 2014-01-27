/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSObject<OS_dispatch_queue>, NSTimer;

@interface WAAsynchronousAssetLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <WAAssetLoaderDelegate> _delegate;
    NSCache *_resourceCache;
    NSCache *_dataCache;
    NSCache *_caDataCache;
    NSTimer *_opportunityTimer;
}

+ (id)sharedAssetLoader;
@property(retain, nonatomic) NSTimer *opportunityTimer; // @synthesize opportunityTimer=_opportunityTimer;
@property(retain, nonatomic) NSCache *caDataCache; // @synthesize caDataCache=_caDataCache;
@property(retain, nonatomic) NSCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) NSCache *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(nonatomic) id <WAAssetLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)CAMLParser:(id)arg1 formatErrorString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (void)CAMLParser:(id)arg1 formatWarningString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
- (id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
- (void)didReceivedMemoryWarning;
- (void)_primeOpportunisticLoad;
- (void)cancelLoading;
- (void)beginLoading;
- (void)loadCADataForCity:(id)arg1;
- (void)loadRootLayerForFile:(id)arg1 completion:(id)arg2;
- (id)filenameForCondition:(long long)arg1 isDay:(_Bool)arg2;
- (void)_opportunisticallyLoad;
- (void)setResource:(id)arg1 forKey:(id)arg2;
- (id)queue;
- (void)dealloc;
- (id)init;

@end
