//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComposeContext-Protocol.h"

@class ComposeWindowController, MessageWebDocumentView, NSDictionary, NSSet, NSString;

@interface BasicComposeContext : NSObject <ComposeContext>
{
    BOOL _isMiniaturized;	// 8 = 0x8
    NSSet *_targetMessages;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    ComposeWindowController *_windowController;	// 32 = 0x20
    MessageWebDocumentView *_originalContentView;	// 40 = 0x28
    NSDictionary *_editorSettings;	// 48 = 0x30
}

@property(nonatomic) BOOL isMiniaturized; // @synthesize isMiniaturized=_isMiniaturized;
@property(copy, nonatomic) NSDictionary *editorSettings; // @synthesize editorSettings=_editorSettings;
@property(nonatomic) __weak MessageWebDocumentView *originalContentView; // @synthesize originalContentView=_originalContentView;
@property(nonatomic) __weak ComposeWindowController *windowController; // @synthesize windowController=_windowController;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSSet *targetMessages; // @synthesize targetMessages=_targetMessages;
// - (void).cxx_destruct;	// IMP=0x00000001000c6563
- (void)controllerWillClose:(id)arg1;	// IMP=0x00000001000c64c1
- (id)windowControllerWithState:(id)arg1;	// IMP=0x00000001000c618c
- (void)presentComposeViewController:(id)arg1 completion:(id)arg2;	// IMP=0x00000001000c6181
- (void)loadCompleted:(id)arg1;	// IMP=0x00000001000c617b
- (void)controllerInitialized:(id)arg1;	// IMP=0x00000001000c6175
- (void)generateQuotedContentWithCompletion:(id)arg1;	// IMP=0x00000001000c5f82
@property(readonly, nonatomic) BOOL blockMessageContent;
@property(readonly, nonatomic) BOOL shouldBlockTermination;
@property(readonly, nonatomic) BOOL isInteractive;
@property(readonly, nonatomic) BOOL shouldTransientlyActivateApplication;
- (struct CGRect)contentScreenPosition;	// IMP=0x00000001000c5e7d
- (id)init;	// IMP=0x00000001000c5dae
- (id)initWithType:(long long)arg1 targetMessages:(id)arg2;	// IMP=0x00000001000c5d4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

