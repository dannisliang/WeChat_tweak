//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WASessionContentSendMsgInfo;

@interface WATempSessionInfo : MMObject
{
    NSString *_sessionFrom;
    NSString *_appId;
    NSString *_businessUserName;
    NSString *_headimgUrl;
    NSString *_title;
    NSString *_subTitle;
    WASessionContentSendMsgInfo *_sendMsgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *businessUserName; // @synthesize businessUserName=_businessUserName;
@property(retain, nonatomic) NSString *headimgUrl; // @synthesize headimgUrl=_headimgUrl;
@property(retain, nonatomic) WASessionContentSendMsgInfo *sendMsgInfo; // @synthesize sendMsgInfo=_sendMsgInfo;
@property(retain, nonatomic) NSString *sessionFrom; // @synthesize sessionFrom=_sessionFrom;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

