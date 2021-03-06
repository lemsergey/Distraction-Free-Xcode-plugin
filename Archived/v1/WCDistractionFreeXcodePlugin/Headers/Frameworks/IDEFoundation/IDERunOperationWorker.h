//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDispatchLock, DVTStackBacktrace, IDELaunchSession, NSString;

@interface IDERunOperationWorker : NSObject <DVTInvalidation>
{
    NSString *_extensionIdentifier;
    IDELaunchSession *_launchSession;
    id <IDERunOperationWorkerDelegate> _runOperation;
    id <IDERunOperationWorkerTracker> _runnableTracker;
    DVTDispatchLock *_lock;
}

+ (void)initialize;
@property(retain) id <IDERunOperationWorkerTracker> runnableTracker; // @synthesize runnableTracker=_runnableTracker;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(readonly) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (void)terminate;
- (void)finishedWithError:(id)arg1;
- (void)start;
- (void)setRunOperation:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

