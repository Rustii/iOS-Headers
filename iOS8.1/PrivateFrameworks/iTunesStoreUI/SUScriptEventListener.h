//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString, WebScriptObject;

@interface SUScriptEventListener : NSObject
{
    WebScriptObject *_callback;
    NSLock *_lock;
    NSString *_name;
    BOOL _useCapture;
}

@property BOOL shouldUseCapture; // @synthesize shouldUseCapture=_useCapture;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) WebScriptObject *callback; // @synthesize callback=_callback;
- (void)dealloc;
- (id)init;

@end
