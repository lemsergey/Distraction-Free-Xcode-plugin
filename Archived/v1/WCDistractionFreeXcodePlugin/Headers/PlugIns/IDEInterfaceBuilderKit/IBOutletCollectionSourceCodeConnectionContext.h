//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSourceCodeConnectionContext.h>

@class NSString;

@interface IBOutletCollectionSourceCodeConnectionContext : IBSourceCodeConnectionContext
{
    NSString *collectionType;
}

@property(copy) NSString *collectionType; // @synthesize collectionType;
- (void).cxx_destruct;
- (id)qualifiedCollectionType;
- (id)description;
- (id)validatedSourceCodeConnectionNameForName:(id)arg1 error:(id *)arg2;
- (id)insertionConnectionTypeString;

@end

