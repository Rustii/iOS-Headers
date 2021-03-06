/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface ADCacheManager : NSObject
{
    NSMutableDictionary *_adCaches;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCacheManager;
@property(retain, nonatomic) NSMutableDictionary *adCaches; // @synthesize adCaches=_adCaches;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearAllCaches;
- (void)discardCachesForBundleIdentifier:(id)arg1;
- (void)stopLoadingDataForController:(id)arg1 withSpecification:(id)arg2;
- (void)loadDataForController:(id)arg1 withSpecification:(id)arg2;
- (void)updatePropertiesForController:(id)arg1 withSpecification:(id)arg2;
- (void)removeControllerFromAnyCaches:(id)arg1;
- (void)removeCache:(id)arg1 forBundleIdentifier:(id)arg2 specificationIdentifier:(id)arg3;
- (void)setCache:(id)arg1 forBundleIdentifier:(id)arg2 specificationIdentifier:(id)arg3;
- (id)cacheForBundleIdentifier:(id)arg1 specificationIdentifier:(id)arg2;
- (id)init;

@end

