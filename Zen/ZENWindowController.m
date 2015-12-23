//
//  ZENWindowController.m
//  Zen
//
//  Created by Wojciech Czekalski on 19.06.2015.
//  Copyright (c) 2015 Wojciech Czekalski. All rights reserved.
//

#import "ZENWindowController.h"
#import "XcodeViewControllers.h"

@implementation ZENWindowController

- (instancetype)initWithWindow:(NSWindow *)window dependencyManager:(ZENIDEEditorContextDependencyManager *)dependencyManager
{
    self = [super initWithWindow:window];
    if (self) {
        _dependencyManager = dependencyManager;
        window.delegate = self;
    }
    return self;
}

#pragma mark - Full screen animation

- (NSSize)window:(NSWindow *)window willUseFullScreenContentSize:(NSSize)proposedSize
{
    return proposedSize;
}

- (void)window:(NSWindow *)window startCustomAnimationToEnterFullScreenOnScreen:(NSScreen *)screen withDuration:(NSTimeInterval)duration
{
    [window setFrame:[screen frame] display:YES];
}

- (NSArray *)customWindowsToEnterFullScreenForWindow:(NSWindow *)window
{
    return @[window];
}

- (NSApplicationPresentationOptions)window:(NSWindow *)window willUseFullScreenPresentationOptions:(NSApplicationPresentationOptions)proposedOptions
{
    return (NSApplicationPresentationFullScreen |
            NSApplicationPresentationHideDock |
            NSApplicationPresentationAutoHideMenuBar);
}


#pragma mark - Open Quickly

- (BOOL)isKindOfClass:(Class)aClass
{
    return [super isKindOfClass:aClass] || [aClass isSubclassOfClass:[IDEWorkspaceWindowController class]];
}

- (id)forwardingTargetForSelector:(SEL)aSelector
{
    return self.dependencyManager;
}

#pragma mark - Layout

- (void)setWindow:(NSWindow *)window
{
    // Causes crash on 7.2 (7C68)
//    if (self.window == nil && window != nil) {
//        [window addObserver:self forKeyPath:ZENContentLayoutRectPropertyString() options:0 context:NULL];
//    } else {
//        [self.window removeObserver:self forKeyPath:ZENContentLayoutRectPropertyString()];
//    }
    [super setWindow:window];
}

- (void)dealloc
{
//    [self.window removeObserver:self forKeyPath:ZENContentLayoutRectPropertyString()];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
{
    if ([keyPath isEqualToString:ZENContentLayoutRectPropertyString()]) {
        [self.window.contentView setNeedsLayout:YES];
    }
}

#pragma mark -

static NSString * ZENContentLayoutRectPropertyString(void) {
    return NSStringFromSelector(@selector(contentLayoutRect));
}

@end
