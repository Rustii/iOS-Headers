//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertyAction.h>

#import "IDSIDQueryControllerDelegate.h"

@class NSArray;

@interface ABContactAddFavoriteAction : ABPropertyAction <IDSIDQueryControllerDelegate>
{
    BOOL _allowPhoneFavorites;
    BOOL _allowFaceTimeFavorites;
    BOOL _allowFaceTimeAudioFavorites;
    BOOL _hasFaceTimeFavorite;
    BOOL _hasFaceTimeAudioFavorite;
    NSArray *_faceTimeableItems;
    CDUnknownBlockType _idQueryResultHandler;
    NSArray *_filteredPhoneItems;
}

@property(nonatomic) BOOL hasFaceTimeAudioFavorite; // @synthesize hasFaceTimeAudioFavorite=_hasFaceTimeAudioFavorite;
@property(nonatomic) BOOL hasFaceTimeFavorite; // @synthesize hasFaceTimeFavorite=_hasFaceTimeFavorite;
@property(retain, nonatomic) NSArray *filteredPhoneItems; // @synthesize filteredPhoneItems=_filteredPhoneItems;
@property(copy, nonatomic) CDUnknownBlockType idQueryResultHandler; // @synthesize idQueryResultHandler=_idQueryResultHandler;
@property(retain, nonatomic) NSArray *faceTimeableItems; // @synthesize faceTimeableItems=_faceTimeableItems;
@property(nonatomic) BOOL allowFaceTimeAudioFavorites; // @synthesize allowFaceTimeAudioFavorites=_allowFaceTimeAudioFavorites;
@property(nonatomic) BOOL allowFaceTimeFavorites; // @synthesize allowFaceTimeFavorites=_allowFaceTimeFavorites;
@property(nonatomic) BOOL allowPhoneFavorites; // @synthesize allowPhoneFavorites=_allowPhoneFavorites;
- (id)_bestFaceTimeProperty;
- (void)_saveFavorite:(id)arg1 withType:(int)arg2;
- (void)_queryFaceTimeStatus;
- (void)_filterFavoritedItems;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)performActionWithSender:(id)arg1;
- (BOOL)canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;

@end
