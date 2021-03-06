//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DBGDataValue, DBGDataValueSummaryFormat, DVTStackBacktrace, NSAttributedString, NSMutableDictionary, NSString;

@interface DBGDataValueSummaryFormatter : NSObject <DVTInvalidation>
{
    DBGDataValue *_dataValue;
    DBGDataValueSummaryFormat *_format;
    NSAttributedString *_attributedSummaryValue;
    BOOL _containsFunctionExpressions;
    unsigned long long _numDependentValues;
    unsigned long long _numDependentExpressions;
    BOOL _summaryContainsChangeAttribute;
    NSMutableDictionary *_cachedPathValues;
    NSMutableDictionary *_cachedExpressionValues;
}

+ (void)initialize;
@property BOOL summaryContainsChangeAttribute; // @synthesize summaryContainsChangeAttribute=_summaryContainsChangeAttribute;
@property(retain) NSAttributedString *attributedSummaryValue; // @synthesize attributedSummaryValue=_attributedSummaryValue;
@property(readonly) DBGDataValueSummaryFormat *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSString *formatString;
- (BOOL)_attributedStringContainsChangeAttribute:(id)arg1;
- (void)_updateAttributedSummaryValueIfPossible;
- (void)_updateAttributedSummaryValueToNotAvailable;
- (void)_doObserveExpressionParts;
- (void)_observeExpressionParts;
- (void)_observeValuePathParts;
- (id)initFormatterForDataValue:(id)arg1 withFormat:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

