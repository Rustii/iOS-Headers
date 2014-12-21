/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFTiltedTabView, UIView, _MFTiltedTabCloseButton, _MFTiltedTabItemView, _TabGradientView;

@interface _MFTiltedTabItem : NSObject
{
    _Bool _topBackdropScaled;
    _Bool _contentViewNeedsRemoval;
    _Bool _editing;
    _Bool _reordering;
    _Bool _closing;
    _Bool _finishedClosing;
    MFTiltedTabView *_tiltedTabView;
    UIView *_headerView;
    _MFTiltedTabItemView *_contentView;
    UIView *_contentClipperView;
    _TabGradientView *_contentShadowView;
    double _topBackdropHeight;
    _MFTiltedTabCloseButton *_closeButton;
    double _borrowedContentScale;
    unsigned long long _contentViewType;
    UIView *_borrowedContentView;
    unsigned long long _indexForLayout;
    unsigned long long _countForLayout;
    double _verticalScrollAdjustment;
    struct CGRect _closeButtonHitRect;
    struct UIEdgeInsets _boundsInsets;
    struct CGRect _borrowedContentViewBounds;
}

+ (id)_newContentShadowView;
@property(nonatomic) double verticalScrollAdjustment; // @synthesize verticalScrollAdjustment=_verticalScrollAdjustment;
@property(nonatomic) unsigned long long countForLayout; // @synthesize countForLayout=_countForLayout;
@property(nonatomic) unsigned long long indexForLayout; // @synthesize indexForLayout=_indexForLayout;
@property(nonatomic, getter=isFinishedClosing) _Bool finishedClosing; // @synthesize finishedClosing=_finishedClosing;
@property(nonatomic, getter=isClosing) _Bool closing; // @synthesize closing=_closing;
@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool contentViewNeedsRemoval; // @synthesize contentViewNeedsRemoval=_contentViewNeedsRemoval;
@property(nonatomic) struct CGRect borrowedContentViewBounds; // @synthesize borrowedContentViewBounds=_borrowedContentViewBounds;
@property(retain, nonatomic) UIView *borrowedContentView; // @synthesize borrowedContentView=_borrowedContentView;
@property(nonatomic) unsigned long long contentViewType; // @synthesize contentViewType=_contentViewType;
@property(nonatomic) struct UIEdgeInsets boundsInsets; // @synthesize boundsInsets=_boundsInsets;
@property(nonatomic) double borrowedContentScale; // @synthesize borrowedContentScale=_borrowedContentScale;
@property(readonly, nonatomic) _MFTiltedTabCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) struct CGRect closeButtonHitRect; // @synthesize closeButtonHitRect=_closeButtonHitRect;
@property(nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(nonatomic) _Bool topBackdropScaled; // @synthesize topBackdropScaled=_topBackdropScaled;
@property(readonly, nonatomic) _TabGradientView *contentShadowView; // @synthesize contentShadowView=_contentShadowView;
@property(readonly, nonatomic) UIView *contentClipperView; // @synthesize contentClipperView=_contentClipperView;
@property(readonly, nonatomic) _MFTiltedTabItemView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) MFTiltedTabView *tiltedTabView; // @synthesize tiltedTabView=_tiltedTabView;
- (void)dealloc;
- (void)_updateBorrowedContentFrame;
- (struct CGRect)contentShadowFrame;
- (void)updateClipperView;
- (struct CGRect)contentClipperBounds;
- (struct CGRect)clippedContentFrame;
- (void)layoutHeaderViewAnimated:(_Bool)arg1 closeButton:(_Bool)arg2;
- (id)init;

@end
