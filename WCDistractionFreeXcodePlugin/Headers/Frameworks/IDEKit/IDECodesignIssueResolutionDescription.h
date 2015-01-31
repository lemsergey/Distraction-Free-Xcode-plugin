//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IDECodesignIssueResolutionDescription : NSObject
{
    NSArray *_resolutionOptions;
    NSString *_title;
    NSString *_message;
}

@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSArray *resolutionOptions; // @synthesize resolutionOptions=_resolutionOptions;
- (void).cxx_destruct;
- (id)errorRepresentationWithCancel:(BOOL)arg1;
- (id)errorRepresentation;
- (id)initWithResolutionOptions:(id)arg1 title:(id)arg2 message:(id)arg3;

@end
