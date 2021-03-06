//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class DVTLineOffsetAwareStringWrapper, IDEPlaygroundPreparationParameters, NSNumber, NSURL;

@interface IDEPlaygroundExecutionParameters : NSObject <NSSecureCoding>
{
    DVTLineOffsetAwareStringWrapper *_sourceCodeToExecute;
    NSURL *_documentFileURL;
    NSNumber *_documentContentTimestamp;
    CDUnknownBlockType _reportResultBlock;
    CDUnknownBlockType _reportConsoleItemBlock;
    CDUnknownBlockType _executionWillFinishBlock;
    CDUnknownBlockType _errorHandlerBlock;
    CDUnknownBlockType _playgroundExpressionCompleteBlock;
    CDUnknownBlockType _playgroundDataHandlerBlock;
    IDEPlaygroundPreparationParameters *_preparationParameters;
    unsigned long long _autoTerminationDelay;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) unsigned long long autoTerminationDelay; // @synthesize autoTerminationDelay=_autoTerminationDelay;
@property(readonly) IDEPlaygroundPreparationParameters *preparationParameters; // @synthesize preparationParameters=_preparationParameters;
@property(readonly) CDUnknownBlockType playgroundDataHandlerBlock; // @synthesize playgroundDataHandlerBlock=_playgroundDataHandlerBlock;
@property(readonly) CDUnknownBlockType playgroundExpressionCompleteBlock; // @synthesize playgroundExpressionCompleteBlock=_playgroundExpressionCompleteBlock;
@property(readonly) CDUnknownBlockType errorHandlerBlock; // @synthesize errorHandlerBlock=_errorHandlerBlock;
@property(readonly) CDUnknownBlockType executionWillFinishBlock; // @synthesize executionWillFinishBlock=_executionWillFinishBlock;
@property(readonly) CDUnknownBlockType reportConsoleItemBlock; // @synthesize reportConsoleItemBlock=_reportConsoleItemBlock;
@property(readonly) CDUnknownBlockType reportResultBlock; // @synthesize reportResultBlock=_reportResultBlock;
@property(readonly) NSNumber *documentContentTimestamp; // @synthesize documentContentTimestamp=_documentContentTimestamp;
@property(readonly) NSURL *documentFileURL; // @synthesize documentFileURL=_documentFileURL;
@property(readonly, copy) DVTLineOffsetAwareStringWrapper *sourceCodeToExecute; // @synthesize sourceCodeToExecute=_sourceCodeToExecute;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceCodeToExecute:(id)arg1 documentFileURL:(id)arg2 documentContentTimestamp:(id)arg3 autoTerminationDelay:(unsigned long long)arg4 executionPreparationParameters:(id)arg5 playgroundReportResultBlock:(CDUnknownBlockType)arg6 playgroundReportConsoleItemBlock:(CDUnknownBlockType)arg7 playgroundExecutionWillFinishBlock:(CDUnknownBlockType)arg8 playgroundExpressionCompleteBlock:(CDUnknownBlockType)arg9 playgroundDataHandlerBlock:(CDUnknownBlockType)arg10 errorHandlerBlock:(CDUnknownBlockType)arg11;

@end

