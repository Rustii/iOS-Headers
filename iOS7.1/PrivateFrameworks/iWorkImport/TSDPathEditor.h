//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDStyledDrawableEditor.h>

#import "TSDDecorator.h"

@class CAShapeLayer, TSDDrawableInfo, TSDPathKnob, TSDRep<TSDPathEditableRep>;

__attribute__((visibility("hidden")))
@interface TSDPathEditor : TSDStyledDrawableEditor <TSDDecorator>
{
    CAShapeLayer *mGhostPathLayer;
    struct CGPoint mLastGhostPosition;
    BOOL mIsInCommandGroup;
    TSDPathKnob *mHoveringKnob;
    CDUnknownBlockType mPathCreateBlock;
    TSDDrawableInfo *mCreatingInfo;
    BOOL mIsCreatingPath;
    BOOL mIsCreatingReversed;
    BOOL mShouldCreateNewPath;
    BOOL mWillBecomeCurrentEditorAgain;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldCreateNewPath; // @synthesize shouldCreateNewPath=mShouldCreateNewPath;
@property(nonatomic) BOOL isCreatingReversed; // @synthesize isCreatingReversed=mIsCreatingReversed;
@property(nonatomic) BOOL isCreatingPath; // @synthesize isCreatingPath=mIsCreatingPath;
@property(copy, nonatomic) CDUnknownBlockType pathCreateBlock; // @synthesize pathCreateBlock=mPathCreateBlock;
- (BOOL)canBeginEditingRepOnDoubleTap:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)pathReturnsTrueForSelector:(SEL)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)nudgeByDelta:(struct CGPoint)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)distributeNodesByEdge:(int)arg1;
- (void)alignNodesByEdge:(int)arg1;
- (BOOL)pathHasSelectedNodes:(unsigned int)arg1;
- (void)distributeDrawablesVertically:(id)arg1;
- (void)distributeDrawablesHorizontally:(id)arg1;
- (void)alignDrawablesByHorizontalCenter:(id)arg1;
- (void)alignDrawablesByBottomEdge:(id)arg1;
- (void)alignDrawablesByTopEdge:(id)arg1;
- (void)alignDrawablesByVerticalCenter:(id)arg1;
- (void)alignDrawablesByRightEdge:(id)arg1;
- (void)alignDrawablesByLeftEdge:(id)arg1;
- (void)close:(id)arg1;
- (void)join:(id)arg1;
- (void)split:(id)arg1;
- (void)makeBezier:(id)arg1;
- (void)makeSmooth:(id)arg1;
- (void)makeSharp:(id)arg1;
- (void)toggleSelectedNodeToType:(int)arg1;
- (void)insertNewline:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)endPathEditing;
- (BOOL)canEndPathCreationWithKnob:(id)arg1;
- (BOOL)canClosePathToKnob:(id)arg1;
- (BOOL)canContinuePathFromKnob:(id)arg1 reversed:(char *)arg2;
- (void)closeLastSubpath;
- (void)updateGhost;
- (void)updateGhostForNodeCreationAtPoint:(struct CGPoint)arg1;
- (void)endMovingKnob;
- (struct CGPoint)constrainedUnscaledPointForPathCreation:(struct CGPoint)arg1;
@property(retain, nonatomic) TSDRep<TSDPathEditableRep> *creatingRep;
- (id)decoratorOverlayLayers;
- (void)setGhostStrokeColor;
- (id)ghostLayer;
- (void)selectAll:(id)arg1;
- (void)performBlockOnPathEditableRepsWhileEditingPaths:(CDUnknownBlockType)arg1 filterWithBlock:(CDUnknownBlockType)arg2;
- (id)newTrackerForKnob:(id)arg1 forRep:(id)arg2;
- (void)updatePositionsOfKnobs:(id)arg1 forRep:(id)arg2;
- (void)addKnobsForRep:(id)arg1 toArray:(id)arg2;
- (BOOL)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;
- (void)invalidateKnobs;
- (void)didResignTextInputEditor;
- (void)makeShapePathsEditable;
- (void)didBecomeCurrentEditor;
- (void)dealloc;

@end

