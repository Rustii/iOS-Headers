//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet
{
    unsigned char _cfinfo[4];
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)getObjects:(id *)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (unsigned int)_trueCount;
- (id)member:(id)arg1;
- (unsigned int)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)finalize;
- (unsigned int)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
