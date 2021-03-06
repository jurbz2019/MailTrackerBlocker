//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSResponseOperation.h>

@class EWSSyncFolderHierarchyResponseType;

@interface MFEWSSyncFolderHierarchyResponseOperation : MFEWSResponseOperation
{
    CDUnknownBlockType _createBlock;	// 8 = 0x8
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
    CDUnknownBlockType _deleteBlock;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) CDUnknownBlockType createBlock; // @synthesize createBlock=_createBlock;
// - (void).cxx_destruct;	// IMP=0x00000000000a5183
- (void)executeOperation;	// IMP=0x00000000000a4bfa
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;	// IMP=0x00000000000a49d4
@property(retain) EWSSyncFolderHierarchyResponseType *response;

@end

