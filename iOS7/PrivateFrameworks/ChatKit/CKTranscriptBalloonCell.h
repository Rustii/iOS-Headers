/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKBalloonView, NSAttributedString, UILabel, UIView<CKGradientReferenceView>;

@interface CKTranscriptBalloonCell : CKTranscriptMessageCell
{
    CKBalloonView *_balloonView;
    double _transcriptDrawerWidth;
    double _drawerPercentRevealed;
    UILabel *_drawerLabel;
}

@property(retain, nonatomic) UILabel *drawerLabel; // @synthesize drawerLabel=_drawerLabel;
@property(nonatomic) double drawerPercentRevealed; // @synthesize drawerPercentRevealed=_drawerPercentRevealed;
@property(nonatomic) double transcriptDrawerWidth; // @synthesize transcriptDrawerWidth=_transcriptDrawerWidth;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(copy, nonatomic) NSAttributedString *drawerAttributedText;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

