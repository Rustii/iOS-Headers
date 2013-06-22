/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlayPainter;

@interface VKLabelNavSupport : NSObject
{
    BOOL _needsLayout;
    BOOL _drawRoadSigns;
    VKPolylineOverlayPainter *_route;
    NSString *_currentLocationText;
    BOOL _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned int _stepIndex;
    BOOL _checkOnRouteLabelsAlignment;
    NSMutableSet *_tiles;
    NSMutableSet *_pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_a3d7a989 _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    int _countVisibleRoadSigns;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    int _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    BOOL _checkIfRouteSubrangeChanged;
    BOOL _useRouteSubrange;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
}

@property(retain, nonatomic) NSString *currentShieldGroup; // @synthesize currentShieldGroup=_currentShieldGroup;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(readonly, nonatomic) const vector_a3d7a989 *activeSigns; // @synthesize activeSigns=_activeSigns;
@property(retain, nonatomic) NSString *currentLocationText; // @synthesize currentLocationText=_currentLocationText;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) BOOL drawRoadSigns; // @synthesize drawRoadSigns=_drawRoadSigns;
@property(retain, nonatomic) VKPolylineOverlayPainter *route; // @synthesize route=_route;
@property(readonly, nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)computeRoutePositionMaskForPOIAtPixel:(const Vec2Imp_1782d7e3 *)arg1 currentPositionMask:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (BOOL)_updateActiveRouteRange;
- (BOOL)_findRouteOverlappingJunctionFrom:(int)arg1 routeJunctions:(vector_b376ae98 *)arg2 lookBackward:(BOOL)arg3 firstOverlap:(int *)arg4 secondOverlap:(int *)arg5;
- (void)_updateCurrentRoadInfo;
- (void)_initalizeCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadsInGuidance;
- (void)_updateRoadStarts;
- (void)_updateUniqueOffRouteRoads;
- (BOOL)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxVisibleLabels:(unsigned int)arg3 useAllJunctions:(BOOL)arg4 placeShieldsFrontToBack:(BOOL)arg5;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxVisibleLabels:(unsigned int)arg3;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(struct NavContext *)arg3 labelCollisionEnabled:(BOOL)arg4;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)grabTilesFromScene:(id)arg1;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)clearSceneIsMemoryWarning:(BOOL)arg1;
- (BOOL)isNavMode;
- (void)dealloc;
- (id)init;

@end
