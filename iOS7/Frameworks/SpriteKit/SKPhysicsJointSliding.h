/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint
{
    BOOL _shouldEnableLimits;
    float _lowerDistanceLimit;
    float _upperDistanceLimit;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGPoint)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) float upperDistanceLimit; // @synthesize upperDistanceLimit=_upperDistanceLimit;
@property(nonatomic) float lowerDistanceLimit; // @synthesize lowerDistanceLimit=_lowerDistanceLimit;
@property(nonatomic) BOOL shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;

@end
