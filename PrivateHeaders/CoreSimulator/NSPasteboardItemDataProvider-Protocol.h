//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSimulator/NSObject-Protocol.h>

@class NSPasteboard, NSPasteboardItem, NSString;

@protocol NSPasteboardItemDataProvider <NSObject>
- (void)pasteboard:(NSPasteboard *)arg1 item:(NSPasteboardItem *)arg2 provideDataForType:(NSString *)arg3;

@optional
- (void)pasteboardFinishedWithDataProvider:(NSPasteboard *)arg1;
@end
