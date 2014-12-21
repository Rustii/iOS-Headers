//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ColorBarView, EKCalendarDate, NSAttributedString, NSDate, NSDictionary, NSLayoutConstraint, NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface EKUIOccurrenceTableViewCell : UITableViewCell
{
    UIView *_separatorViewForNonOpaqueTables;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_topTimeLabel;
    UILabel *_bottomTimeLabel;
    ColorBarView *_colorBarView;
    UIImageView *_angleStripeBackgroundView;
    NSLayoutConstraint *_primaryTextTopToBaselineConstraint;
    NSLayoutConstraint *_secondaryTextTopToBaselineConstraint;
    NSLayoutConstraint *_secondaryTextBottomToBaselineConstraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextLeftMarginConstraint;
    NSLayoutConstraint *_timeTextRightMarginConstraint;
    double _travelTime;
    int _routingMode;
    UIColor *_eventCalendarColor;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventStartDate;
    EKCalendarDate *_eventEndDate;
    NSAttributedString *_eventTitleAttrString;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_travelTimeLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTimeLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    int _truncatingOptions;
    int _nontruncatingOptions;
    UIImage *_routingModeImage;
    BOOL _isAllDay;
    BOOL _isRecurring;
    BOOL _isBirthday;
    BOOL _isFacebook;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _cancelled;
    BOOL _showingTravelTime;
    BOOL _drawsOwnRowSeparators;
    BOOL _usesVibrantSeparatorOverlayDrawing;
    BOOL _usesInsetMargin;
}

+ (id)_tentativeAngledStripeBackground;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (id)_facebookIcon;
+ (id)_birthdayIcon;
+ (float)_rightImageSpacing;
+ (float)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (id)tentativeBackgroundColor;
+ (float)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)needsReplyBackgroundColor;
+ (id)normalBackgroundColor;
+ (id)strikethroughTimeTextColor;
+ (id)normalBottomTimeTextColor;
+ (id)normalTopTimeTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)strikethroughPrimaryTextColor;
+ (id)invitationPrimaryTextColor;
+ (id)prefixPrimaryTextColor;
+ (id)normalPrimaryTextColor;
+ (id)cancelledDeclinedColorBarColor;
+ (void)clearFontCaches;
+ (id)secondaryTextLabelFont;
+ (id)constrainedPrimaryTextLabelFont;
+ (id)scalablePrimaryTextLabelFont;
+ (id)timeLabelsFont;
+ (float)cellHeightForWidth:(float)arg1;
+ (id)reuseIdentifier;
+ (void)_clearCaches;
+ (void)initialize;
@property(nonatomic) BOOL usesInsetMargin; // @synthesize usesInsetMargin=_usesInsetMargin;
@property(nonatomic) BOOL usesVibrantSeparatorOverlayDrawing; // @synthesize usesVibrantSeparatorOverlayDrawing=_usesVibrantSeparatorOverlayDrawing;
@property(nonatomic) BOOL drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
- (void).cxx_destruct;
- (id)_textForDepartureTimeLabel;
- (id)_textForBottomTimeLabel;
- (id)_textForTopTimeLabel;
- (BOOL)isDeclined;
- (BOOL)needsReply;
- (BOOL)isTentative;
- (BOOL)isFacebook;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isAllDay;
- (id)_textLabelWithAddedImageAttachmentsFromText:(id)arg1 withFont:(id)arg2;
- (BOOL)_textLabelHasAddedImages;
- (void)_addIcon:(id)arg1 toString:(id)arg2 withFont:(id)arg3;
- (void)_updateRoutingModeIcon;
- (void)_updateTravelTimeAddressLabel;
- (void)_updateTravelTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateBottomTimeLabel;
- (void)_updateTopTimeLabel;
- (void)_updateSecondaryTextLabel;
- (void)_updatePrimaryTextLabel;
- (void)_updateAngleBackgroundColor;
- (void)_updateColorBarColor;
- (void)_setUpConstraints;
- (float)_rightMarginForTimeViewsFromTimeWidth:(float)arg1;
- (float)_leftMarginForTimeViewsFromTimeWidth:(float)arg1;
- (float)_widthForTimeViews;
- (float)_verticalSpacingBottomToBaselineForBottomLabel;
- (float)_verticalSpacingTopToBaselineForBottomLabel;
- (float)_verticalSpacingTopToBaselineForTopLabel;
- (void)updateConstraints;
- (void)contentCategorySizeChanged;
- (void)_createViews;
- (id)_travelTimeIcon;
- (void)setFrame:(struct CGRect)arg1;
- (void)forceUpdateOfAllElements;
- (id)primaryTextLabelFont;
- (void)layoutSubviews;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 showCalendarColors:(BOOL)arg4 extendHeightForTravelTime:(BOOL)arg5;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 showCalendarColors:(BOOL)arg4;
- (void)_setMarginExtendsToFullWidth:(BOOL)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
