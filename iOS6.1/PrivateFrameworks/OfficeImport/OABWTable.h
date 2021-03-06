/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ESDContainer, OABWriterState, OADTable;

@interface OABWTable : NSObject
{
    OADTable *mSrcTable;
    ESDContainer *mTgtTable;
    OABWriterState *mState;
    long mRowCount;
    long mColumnCount;
    struct vector<long, std::allocator<long>> *mpXCoords;
    struct vector<long, std::allocator<long>> *mpYCoords;
}

- (void)map;
- (void)mapVectors;
- (void)mapCells;
- (void)mapCoordinates;
- (void)mapGlobals;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;

@end

