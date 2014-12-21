//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BRCDatabaseManager, CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncPersistedState : NSObject <NSSecureCoding>
{
    BRCDatabaseManager *_dbManager;
    CKServerChangeToken *_serverChangeToken;
    NSDate *_lastSyncDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInDBManager:(id)arg1;
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
