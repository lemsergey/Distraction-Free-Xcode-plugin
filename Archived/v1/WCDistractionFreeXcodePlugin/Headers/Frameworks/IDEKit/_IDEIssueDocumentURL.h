//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface _IDEIssueDocumentURL : NSObject
{
    NSURL *_url;
    int _type;
}

@property(readonly) int issueType; // @synthesize issueType=_type;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 type:(int)arg2;

@end

