//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UINavigationInteractiveTransitionBase.h>

@class UIScreenEdgePanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase
{
    UIScreenEdgePanGestureRecognizer *_edgePanRecognizer;
}

@property(readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;
- (id)gestureRecognizerView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (void)_configureNavigationGesture;
- (id)initWithViewController:(id)arg1 animator:(id)arg2;

@end
