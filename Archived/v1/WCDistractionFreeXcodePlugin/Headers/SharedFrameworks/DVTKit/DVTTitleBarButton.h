//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString, NSTextFieldCell;

@interface DVTTitleBarButton : NSView
{
    NSString *_title;
    NSTextFieldCell *_titleCell;
    BOOL _noDragRectComputed;
}

- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)setTitle:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)setFrame:(struct CGRect)arg1 ignoringInternalGeometry:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateFrameUsingAvailableSpace:(double)arg1;
- (void)updateFrame;
- (void)resetNoDragRect;
- (void)flagsChanged:(id)arg1;
- (id)title;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)shouldShowPathPopUpMenuFromMouseDown:(id)arg1;
- (void)showPathPopUpMenu;
- (void)doNothing:(id)arg1;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRectInWindow;
- (struct CGRect)titleRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end
