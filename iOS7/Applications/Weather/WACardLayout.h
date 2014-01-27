/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewLayout.h"

@class NSMutableArray, NSMutableDictionary;

@interface WACardLayout : UICollectionViewLayout
{
    unsigned long long _numOfItems;
    struct CGSize _contentSize;
    struct CGSize _itemSize;
    struct CGRect *_itemFrames;
    NSMutableArray *_visibleAttributes;
    NSMutableDictionary *_cachedAttributes;
    id <WACardLayoutDelegate> _layoutDelegate;
    struct CGSize _footerReferenceSize;
}

@property(nonatomic) id <WACardLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
- (id)description;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (long long)targetIndexForProposedStartIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGRect)frameForItem:(long long)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)collectionView;
- (void)dealloc;
- (id)init;

@end

