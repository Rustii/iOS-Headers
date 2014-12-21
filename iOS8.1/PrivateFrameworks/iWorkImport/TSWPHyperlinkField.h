//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSWPHyperlinkField : TSWPSmartField
{
    NSURL *_url;
}

+ (id)newURLFromURLReference:(id)arg1;
+ (id)urlReferenceFromURL:(id)arg1;
+ (id)defaultMailURL;
+ (id)defaultFileURL;
+ (id)urlWithEmailAddress:(id)arg1 subject:(id)arg2;
+ (id)defaultWebURL;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (BOOL)schemeIsValidForURLReference:(id)arg1;
+ (BOOL)schemeIsValidForURL:(id)arg1;
+ (int)schemeFromURL:(id)arg1;
+ (id)defaultFieldStyleIdentifier;
- (BOOL)isEqual:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct HyperlinkFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct HyperlinkFieldArchive *)arg1 archiver:(id)arg2;
- (id)fullPath;
- (id)filePath;
- (BOOL)hasDisplayText;
- (BOOL)isFileURL;
- (id)urlPrefix;
- (int)scheme;
- (void)setURLReference:(id)arg1;
- (id)urlReference;
@property(retain, nonatomic, setter=setURL:) NSURL *url;
- (BOOL)allowsEditing;
- (int)smartFieldKind;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 url:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSString *displayText;

@end
