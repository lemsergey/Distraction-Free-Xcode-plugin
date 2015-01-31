//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, DVTStackView_ML, NSArray, NSString;

@interface IDEProjectItemView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTStackView_ML *_stack;
    id <IDEProjectItemViewDelegate> _delegate;
    NSArray *_contentViews;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *contentViews; // @synthesize contentViews=_contentViews;
@property(retain, nonatomic) id <IDEProjectItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
