//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class NSTextField;

@interface IDEInspectorResizableTextField : DVTLayoutView_ML
{
    NSTextField *_textField;
}

@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)textFieldTextDidChange:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)awakeFromNib;
- (void)dealloc;

@end

