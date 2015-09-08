//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTSourceControlIdentifiable.h"
#import "NSSecureCoding.h"

@class DVTSourceControlBranchAndTagLocations, DVTSourceControlRemoteRepository, DVTSourceControlRepository, DVTSourceControlRevision, DVTSourceControlRevisionLocation, NSMutableSet, NSString, NSURL;

@interface DVTSourceControlWorkingCopy : NSObject <DVTSourceControlIdentifiable, NSSecureCoding>
{
    NSMutableSet *_cachedRemoteRepositories;
    BOOL _needsUpgrade;
    NSString *__id;
    NSURL *_fileURL;
    DVTSourceControlRepository *_repository;
    DVTSourceControlBranchAndTagLocations *_branchAndTagLocations;
    unsigned long long _state;
    DVTSourceControlRevision *_cachedBaseRevision;
    DVTSourceControlRevisionLocation *_cachedCurrentLocation;
    DVTSourceControlRemoteRepository *_primaryRemoteRepository;
}

+ (BOOL)supportsSecureCoding;
+ (id)scanForWorkingCopiesInFolderPaths:(id)arg1 traversingUp:(BOOL)arg2 usingSourceControlSystems:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly) DVTSourceControlRemoteRepository *primaryRemoteRepository; // @synthesize primaryRemoteRepository=_primaryRemoteRepository;
@property(retain) DVTSourceControlRevisionLocation *cachedCurrentLocation; // @synthesize cachedCurrentLocation=_cachedCurrentLocation;
@property(retain) DVTSourceControlRevision *cachedBaseRevision; // @synthesize cachedBaseRevision=_cachedBaseRevision;
@property BOOL needsUpgrade; // @synthesize needsUpgrade=_needsUpgrade;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) DVTSourceControlBranchAndTagLocations *branchAndTagLocations; // @synthesize branchAndTagLocations=_branchAndTagLocations;
@property(retain) DVTSourceControlRepository *repository; // @synthesize repository=_repository;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (id)upgradeWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)baseRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)currentLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)historyFromRevision:(id)arg1 toRevision:(id)arg2 maximumLogItems:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)forceUpdateWorkingCopyFromRepository:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)filesAndStatusWithRemoteStatus:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateRepositoryIdentifierWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithUpgradableFileURL:(id)arg1 repository:(id)arg2;
- (id)initWithFileURL:(id)arg1 repository:(id)arg2 locationInRepository:(id)arg3 branchAndTagLocations:(id)arg4;
- (id)initWithFileURL:(id)arg1 repository:(id)arg2 locationInRepository:(id)arg3;
- (id)initWithFileURL:(id)arg1 unidentifiableRepository:(id)arg2;
- (id)initWithFileURL:(id)arg1 repository:(id)arg2;
- (id)_initWithFileURL:(id)arg1 repository:(id)arg2 enforceRepositoryIdentifier:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
