/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer-Protocol.h"
#import "VKStylesheetObserver-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, VKAnnotationMarker, VKMapModel, VKStylesheet;

// Not exported
@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStylesheetObserver>
{
    NSMutableArray *_annotationMarkers;
    VKAnnotationMarker *_selectedAnnotationMarker;
    NSMutableSet *_animatingMarkers;
    NSMutableArray *_markersToAnimate;
    id <VKAnnotationModelDelegate> _delegate;
    VKAnnotationMarker *_draggingAnnotationMarker;
    _Bool _didDragMarker;
    _Bool _hasEverDrawnSomething;
    CDStruct_cfeb8bef _styleTransitionState;
    id _annotationMarkerDeselectionCallback;
    VKMapModel *_mapModel;
}

+ (_Bool)reloadOnStylesheetChange;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
@property(copy, nonatomic) id annotationMarkerDeselectionCallback; // @synthesize annotationMarkerDeselectionCallback=_annotationMarkerDeselectionCallback;
@property(nonatomic) CDStruct_cfeb8bef styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(readonly, nonatomic) NSArray *annotationMarkers; // @synthesize annotationMarkers=_annotationMarkers;
@property(nonatomic) id <VKAnnotationModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) VKStylesheet *stylesheet;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint)arg1 avoidCurrent:(_Bool)arg2 canvasSize:(struct CGSize)arg3;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (void)dealloc;
@property(readonly, nonatomic) _Bool needsLayout;
- (void)anchorPositionChangedForMarker:(id)arg1;
@property(readonly, nonatomic) VKAnnotationMarker *selectedAnnotationMarker;
- (unsigned int)supportedRenderPasses;
- (unsigned long long)mapLayerPosition;

@end

