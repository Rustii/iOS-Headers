//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIModalItemTextFiledBGView : _UITextFieldRoundedRectBackgroundViewNeue
{
    int _textFieldsCount;
    UIColor *_backgroundColor;
    UIColor *_separatorsColor;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIColor *separatorsColor; // @synthesize separatorsColor=_separatorsColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int textFieldsCount; // @synthesize textFieldsCount=_textFieldsCount;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
