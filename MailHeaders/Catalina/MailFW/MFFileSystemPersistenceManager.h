//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFFileSystemPersistenceManager : NSObject
{
}

+ (void)removeAlternateFileForEmlxFile:(id)arg1;	// IMP=0x00000000000acfda
+ (id)_emlxPListInFile:(id)arg1 url:(id)arg2 plistOffset:(unsigned long long *)arg3;	// IMP=0x00000000000ac9a0
+ (BOOL)updatePropertyListAtURL:(id)arg1 propertyListBlock:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000ac44f
+ (BOOL)writeAttachment:(id)arg1 toDirectory:(id)arg2 originalContentsURL:(id)arg3 outError:(id *)arg4;	// IMP=0x00000000000abeea
+ (BOOL)writeMimeData:(id)arg1 toURL:(id)arg2 isPart:(BOOL)arg3 propertyList:(id)arg4 compress:(BOOL)arg5 outError:(id *)arg6;	// IMP=0x00000000000ab4ab

@end

