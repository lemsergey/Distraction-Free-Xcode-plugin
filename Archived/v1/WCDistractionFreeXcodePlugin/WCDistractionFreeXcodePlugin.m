//
//  WCDistractionFreeXcodePlugin.m
//  WCDistractionFreeXcodePlugin
//
//  Created by Wojciech Czekalski on 25.12.2014.
//  Copyright (c) 2014 Wojciech Czekalski. All rights reserved.
//

#import "WCDistractionFreeXcodePlugin.h"
#import "WCDistractionFreeWindowController.h"
#import "XcodeHeaders.h"

static WCDistractionFreeXcodePlugin *sharedPlugin;

@interface WCDistractionFreeXcodePlugin()
@property (nonatomic, strong) WCDistractionFreeWindowController *windowController;
@property (nonatomic, strong, readwrite) NSBundle *bundle;
@end

@implementation WCDistractionFreeXcodePlugin

+ (void)pluginDidLoad:(NSBundle *)plugin
{
    static dispatch_once_t onceToken;
    NSString *currentApplicationName = [[NSBundle mainBundle] infoDictionary][@"CFBundleName"];
    if ([currentApplicationName isEqual:@"Xcode"]) {
        dispatch_once(&onceToken, ^{
            sharedPlugin = [[self alloc] initWithBundle:plugin];
        });
    }
}

+ (instancetype)sharedPlugin
{
    return sharedPlugin;
}

- (id)initWithBundle:(NSBundle *)plugin
{
    if (self = [super init]) {
        // reference to plugin's bundle, for resource access
        self.bundle = plugin;
        
        NSMenu *mainMenu = [self mainMenu];
        NSMenuItem *viewMenuItem = [mainMenu itemWithTitle:@"View"];
        
        if (viewMenuItem) {
            NSMenuItem *distractionFreeModeItem = [[NSMenuItem alloc] initWithTitle:@"Distraction Free Mode" action:nil keyEquivalent:@""];
            distractionFreeModeItem.target = self;
            distractionFreeModeItem.action = @selector(showNewFullscreenWindow:);
            [viewMenuItem.submenu insertItem:distractionFreeModeItem atIndex:0];
        }
    }
    return self;
}

- (void)showNewFullscreenWindow:(id)sender
{
    NSDocument *doc = [[NSClassFromString(@"IDEWorkspaceWindow") lastActiveWorkspaceWindowController] document];
    self.windowController = [[NSStoryboard storyboardWithName:@"Zen" bundle:[NSBundle bundleForClass:[self class]]] instantiateInitialController];
    
    [self.windowController setWorkspaceDocumentLocal:doc];
    
    [self.windowController windowDidLoad];
    [self.windowController showWindow:self];
    [self.windowController.window toggleFullScreen:nil];
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - Getters

- (NSMenu *)mainMenu
{
    return [NSApp mainMenu];
}

@end
