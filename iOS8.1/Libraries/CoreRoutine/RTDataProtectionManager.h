/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RTNotifier.h"

@interface RTDataProtectionManager : RTNotifier
{
    _Bool _unlockedSinceBoot;
    long long _encryptedDataAvailability;
}

+ (id)sharedInstance;
+ (id)RTDataProtectionManagerEncryptedDataAvailabilityToString:(long long)arg1;
+ (id)RTDataProtectionManagerLockStateToString:(long long)arg1;
@property(nonatomic) _Bool unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property(nonatomic) long long encryptedDataAvailability; // @synthesize encryptedDataAvailability=_encryptedDataAvailability;
- (void)handleUnlockedSinceBoot;
- (void)handkeKeybagLockStatusChange:(long long)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)init;

@end
