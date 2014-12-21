//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SKUIIndexBarControlController, SKUIIndexBarEntryDescriptor;

@protocol SKUIIndexBarControlControllerDataSource <NSObject>
- (SKUIIndexBarEntryDescriptor *)indexBarControlController:(SKUIIndexBarControlController *)arg1 entryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (int)indexBarControlController:(SKUIIndexBarControlController *)arg1 numberOfEntryDescriptorsInSection:(int)arg2;

@optional
- (int)numberOfSectionsInIndexBarControlController:(SKUIIndexBarControlController *)arg1;
- (SKUIIndexBarEntryDescriptor *)combinedEntryDescriptorForIndexBarControlController:(SKUIIndexBarControlController *)arg1;
@end
