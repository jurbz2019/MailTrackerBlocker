//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RichMessageCellBase.h"

@class MessageStatusStackView, NSAttributedString, NSImageView, NSTextField;

@interface RichMessageChildCellView : RichMessageCellBase
{
    unsigned long long _numberOfSnippetLines;	// 112 = 0x70
    NSImageView *_unreadView;	// 120 = 0x78
    NSImageView *_vipView;	// 128 = 0x80
    NSImageView *_statusView;	// 136 = 0x88
    NSTextField *_senderView;	// 144 = 0x90
    NSTextField *_dateView;	// 152 = 0x98
    NSTextField *_snippetView;	// 160 = 0xa0
    NSImageView *_mutedView;	// 168 = 0xa8
    MessageStatusStackView *_statusStack;	// 176 = 0xb0
}

+ (id)keyPathsForValuesAffectingSnippetString;	// IMP=0x00000001002667c4
@property(retain, nonatomic) MessageStatusStackView *statusStack; // @synthesize statusStack=_statusStack;
@property(retain, nonatomic) NSImageView *mutedView; // @synthesize mutedView=_mutedView;
@property(nonatomic) __weak NSTextField *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak NSTextField *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) __weak NSTextField *senderView; // @synthesize senderView=_senderView;
@property(retain, nonatomic) NSImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSImageView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) NSImageView *unreadView; // @synthesize unreadView=_unreadView;
@property(readonly, nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
// - (void).cxx_destruct;	// IMP=0x0000000100267070
- (void)_updateVIPIndicatorWithImage:(id)arg1;	// IMP=0x0000000100266e15
- (void)_updateUnreadIndicatorWithImage:(id)arg1;	// IMP=0x0000000100266cc7
- (void)setNumberOfSnippetLines:(unsigned long long)arg1;	// IMP=0x0000000100266c62
- (void)setObjectValue:(id)arg1;	// IMP=0x0000000100266a69
@property(readonly, nonatomic) NSAttributedString *snippetString;
- (id)snippetStringAttributes;	// IMP=0x00000001002667f0
- (double)defaultRowHeight;	// IMP=0x000000010026656b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002663a6
- (void)awakeFromNib;	// IMP=0x0000000100265dc7
- (void)updateFontsUsingBold:(BOOL)arg1;	// IMP=0x0000000100265c93

@end

