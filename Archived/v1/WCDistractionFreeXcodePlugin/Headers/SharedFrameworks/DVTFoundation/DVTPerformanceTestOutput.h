//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface DVTPerformanceTestOutput : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_results;
}

@property(readonly) NSArray *results; // @synthesize results=_results;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 results:(id)arg2;
- (id)initWithTestClass:(id)arg1 testMethod:(id)arg2 performanceMetricName:(id)arg3 unitOfMeasurement:(id)arg4 measurements:(id)arg5;

@end

