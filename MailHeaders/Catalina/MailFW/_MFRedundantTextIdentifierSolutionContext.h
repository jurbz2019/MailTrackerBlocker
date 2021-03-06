//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface _MFRedundantTextIdentifierSolutionContext : NSObject
{
    NSMutableArray *_redundantRanges;	// 8 = 0x8
    NSMutableIndexSet *_redundantAttachmentStartIndexes;	// 16 = 0x10
    NSMutableArray *_attributionLineRanges;	// 24 = 0x18
    BOOL _searchInForwardDirection;	// 32 = 0x20
    BOOL _matchedEntireOriginalContiguously;	// 33 = 0x21
    CDStruct_f9502b4c *_replyBuffer;	// 40 = 0x28
    long long _replyStartIndex;	// 48 = 0x30
    long long _replyLength;	// 56 = 0x38
    CDStruct_f9502b4c *_originalBuffer;	// 64 = 0x40
    long long _originalStartIndex;	// 72 = 0x48
    long long _originalLength;	// 80 = 0x50
    NSDictionary *_originalAttachmentContextsByURL;	// 88 = 0x58
    NSDictionary *_replyAttachmentContextsByURL;	// 96 = 0x60
    unsigned long long _startingIndexForRedundantRanges;	// 104 = 0x68
    unsigned long long _startingIndexForAttributionLineRanges;	// 112 = 0x70
    long long _lastIndexMatchedInOriginal;	// 120 = 0x78
    long long _lastIndexMatchedInReply;	// 128 = 0x80
}

@property(nonatomic) BOOL matchedEntireOriginalContiguously; // @synthesize matchedEntireOriginalContiguously=_matchedEntireOriginalContiguously;
@property(nonatomic) BOOL searchInForwardDirection; // @synthesize searchInForwardDirection=_searchInForwardDirection;
@property(nonatomic) long long lastIndexMatchedInReply; // @synthesize lastIndexMatchedInReply=_lastIndexMatchedInReply;
@property(nonatomic) long long lastIndexMatchedInOriginal; // @synthesize lastIndexMatchedInOriginal=_lastIndexMatchedInOriginal;
@property(nonatomic) unsigned long long startingIndexForAttributionLineRanges; // @synthesize startingIndexForAttributionLineRanges=_startingIndexForAttributionLineRanges;
@property(nonatomic) unsigned long long startingIndexForRedundantRanges; // @synthesize startingIndexForRedundantRanges=_startingIndexForRedundantRanges;
@property(readonly, copy, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, copy, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, nonatomic) long long originalLength; // @synthesize originalLength=_originalLength;
@property(nonatomic) long long originalStartIndex; // @synthesize originalStartIndex=_originalStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *originalBuffer; // @synthesize originalBuffer=_originalBuffer;
@property(readonly, nonatomic) long long replyLength; // @synthesize replyLength=_replyLength;
@property(nonatomic) long long replyStartIndex; // @synthesize replyStartIndex=_replyStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *replyBuffer; // @synthesize replyBuffer=_replyBuffer;
// - (void).cxx_destruct;	// IMP=0x00000000001eef3c
- (BOOL)location:(long long)arg1 isInRangeArray:(id)arg2 startingIndex:(unsigned long long *)arg3;	// IMP=0x00000000001eec72
- (long long)contentTypeForIndex:(long long)arg1;	// IMP=0x00000000001eebf3
- (void)addRangeWithStart:(long long)arg1 end:(long long)arg2 toArray:(id)arg3;	// IMP=0x00000000001eeb1c
- (void)computeAttributionRangesInReply;	// IMP=0x00000000001edda3
- (void)computeRedundantRangesInReply;	// IMP=0x00000000001ed132
- (void)addAttributionLineRanges:(id)arg1;	// IMP=0x00000000001ed11c
@property(readonly, copy, nonatomic) NSArray *attributionLineRanges;
- (void)addRedundantAttachmentStartIndexes:(id)arg1;	// IMP=0x00000000001ed0f8
@property(readonly, copy, nonatomic) NSIndexSet *redundantAttachmentStartIndexes;
- (void)addRedundantRanges:(id)arg1;	// IMP=0x00000000001ed0d4
@property(readonly, copy, nonatomic) NSArray *redundantRanges;
- (id)description;	// IMP=0x00000000001ecf16
- (id)init;	// IMP=0x00000000001ece47
- (id)initWithReply:(CDStruct_f9502b4c *)arg1 replyStartIndex:(long long)arg2 replyLength:(long long)arg3 replyAttachmentContextsByURL:(id)arg4 original:(CDStruct_f9502b4c *)arg5 originalStartIndex:(long long)arg6 originalLength:(long long)arg7 originalAttachmentContextsByURL:(id)arg8 searchInForwardDirection:(BOOL)arg9;	// IMP=0x00000000001ecd00

@end

