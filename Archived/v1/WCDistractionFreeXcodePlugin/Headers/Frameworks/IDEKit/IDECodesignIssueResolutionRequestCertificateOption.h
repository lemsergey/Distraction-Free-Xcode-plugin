//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDECodesignIssueResolutionOption.h>

@class DVTDeveloperAccount, IDECodesignIssueResolutionPortalSource, NSString;

@interface IDECodesignIssueResolutionRequestCertificateOption : IDECodesignIssueResolutionOption
{
    IDECodesignIssueResolutionPortalSource *_portal;
    DVTDeveloperAccount *_account;
    NSString *_portalTeamID;
    NSString *_certificateKind;
    NSString *_platformIdentifier;
    NSString *_certificateToRevokeSerialNumber;
}

@property(copy) NSString *certificateToRevokeSerialNumber; // @synthesize certificateToRevokeSerialNumber=_certificateToRevokeSerialNumber;
@property(copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(copy) NSString *certificateKind; // @synthesize certificateKind=_certificateKind;
@property(copy) NSString *portalTeamID; // @synthesize portalTeamID=_portalTeamID;
@property(retain) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(retain) IDECodesignIssueResolutionPortalSource *portal; // @synthesize portal=_portal;
- (void).cxx_destruct;
- (id)invokeOptionWithWindowOrNil:(id)arg1;
- (BOOL)requiresUserInteraction;
- (id)name;
- (id)initWithPortalSource:(id)arg1 account:(id)arg2 portalTeamID:(id)arg3 certificiateKind:(id)arg4 platformIdentifier:(id)arg5 certificateToRevokeSerialNumberOrNil:(id)arg6 logAspect:(id)arg7;

@end

