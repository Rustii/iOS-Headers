//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSSet, NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding>
{
    int _creativeType;
    int _options;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int options; // @synthesize options=_options;
@property(nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
