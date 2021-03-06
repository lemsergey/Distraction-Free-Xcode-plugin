//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEPlaygroundAppBundleCreator.h"

@class DVTDevice, DVTFilePath, DVTSDK, NSString, NSUUID;

@interface IDEAbstractPlaygroundAppBundleCreator : NSObject <IDEPlaygroundAppBundleCreator>
{
    NSString *_playgroundName;
    NSUUID *_playgroundUUID;
    NSString *_uniquingString;
    DVTFilePath *_resourcesPath;
    DVTFilePath *_frameworkSearchPath;
    DVTSDK *_sdk;
    DVTDevice *_device;
}

+ (id)supportedPlatform;
@property(readonly) DVTDevice *device; // @synthesize device=_device;
@property(readonly) DVTSDK *sdk; // @synthesize sdk=_sdk;
@property(readonly, copy) DVTFilePath *frameworkSearchPath; // @synthesize frameworkSearchPath=_frameworkSearchPath;
@property(readonly, copy) DVTFilePath *resourcesPath; // @synthesize resourcesPath=_resourcesPath;
@property(readonly, copy) NSString *uniquingString; // @synthesize uniquingString=_uniquingString;
@property(readonly, copy) NSUUID *playgroundUUID; // @synthesize playgroundUUID=_playgroundUUID;
@property(readonly, copy) NSString *playgroundName; // @synthesize playgroundName=_playgroundName;
- (void).cxx_destruct;
- (id)constructPlaygroundAppBundleInDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)playgroundAppBundleForAppAtPath:(id)arg1 withExecutableSubpath:(id)arg2 bundleIdentifier:(id)arg3;
- (BOOL)signPlaygroundAppAtPath:(id)arg1 error:(id *)arg2;
- (id)createFileWrapperForPlaygroundAppReturningRelativeExecutablePath:(id *)arg1 bundleIdentifier:(id *)arg2 error:(id *)arg3;
- (id)initWithPlaygroundName:(id)arg1 UUID:(id)arg2 uniquingString:(id)arg3 resourcesPath:(id)arg4 frameworkSearchPath:(id)arg5 sdk:(id)arg6 device:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

