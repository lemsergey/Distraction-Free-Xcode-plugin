//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutOperationRequest.h>

@class IBLayoutConstraint, NSObject<IBAutolayoutItem>;

@interface IBAutolayoutClippingPriorityChangeRequest : IBAutolayoutOperationRequest
{
    IBLayoutConstraint *_constraint;
    double _priority;
    NSObject<IBAutolayoutItem> *_view;
}

@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
@property(readonly, nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) IBLayoutConstraint *constraint; // @synthesize constraint=_constraint;
- (void).cxx_destruct;
- (id)debugDescription;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(CDUnknownBlockType)arg1;
- (id)initWithRepresentation:(id)arg1 layoutInfoClass:(Class)arg2 objectForObjectRepresentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithArbitrationUnit:(id)arg1 constraint:(id)arg2 priority:(double)arg3 view:(id)arg4;

@end

