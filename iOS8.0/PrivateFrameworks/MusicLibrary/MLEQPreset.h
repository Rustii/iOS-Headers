//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MLEQPreset : NSObject
{
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForBuiltInPresetType:(int)arg1;
+ (id)eqPresetForName:(id)arg1;
- (void).cxx_destruct;
- (int)typeForAVController;
- (int)builtInPresetType;
- (id)localizedName;
- (id)name;
- (id)initWithBuiltInPresetType:(int)arg1;

@end
