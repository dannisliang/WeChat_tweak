//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCStoryBaseCGIObj.h"

@class NSMutableArray;

@interface WCStoryFetchBgmCgiObj : WCStoryBaseCGIObj
{
    int _businessId;
    NSMutableArray *_imageDatas;
    unsigned long long _videoDuration;
    unsigned long long _requestId;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (id)buildRequest;
@property(nonatomic) int businessId; // @synthesize businessId=_businessId;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
@property(retain, nonatomic) NSMutableArray *imageDatas; // @synthesize imageDatas=_imageDatas;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
- (void)start;

@end

