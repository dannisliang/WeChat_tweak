//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSString;

@interface UploadEmojiInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(nonatomic) _Bool completed; // @dynamic completed;
@property(nonatomic) _Bool isTooLarge; // @dynamic isTooLarge;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(nonatomic) int totalLen; // @dynamic totalLen;

@end
