//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class DVTStepperTextField, IDEInspectorKeyPath, NSString, NSTextField;

@interface SKInspectorVector2Property : IDEInspectorProperty
{
    DVTStepperTextField *xLabel;
    DVTStepperTextField *yLabel;
    NSTextField *xTextField;
    NSTextField *yTextField;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_xValueKeyPath;
    IDEInspectorKeyPath *_yValueKeyPath;
    NSString *_nilPlaceholder;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (void)applyUserSizeFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;

@end

