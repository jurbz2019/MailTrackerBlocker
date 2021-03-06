//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageListContentChange-Protocol.h"

@class NSMutableIndexSet, NSString;

@interface _MessageListRemovedIndexesContentChange : NSObject <MessageListContentChange>
{
    NSMutableIndexSet *_indexes;	// 8 = 0x8
    unsigned long long _animationOptions;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(readonly, copy, nonatomic) NSMutableIndexSet *indexes; // @synthesize indexes=_indexes;
// - (void).cxx_destruct;	// IMP=0x00000001001dbd4d
@property(readonly, copy) NSString *description;
- (void)incrementChangeIndexesBy:(unsigned long long)arg1;	// IMP=0x00000001001dbc54
- (unsigned long long)shiftIndex:(unsigned long long)arg1;	// IMP=0x00000001001dbbff
- (void)applyToTableView:(id)arg1;	// IMP=0x00000001001dbb7b
- (id)init;	// IMP=0x00000001001dbaac
- (id)initWithIndexes:(id)arg1 animationOptions:(unsigned long long)arg2;	// IMP=0x00000001001dba2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

