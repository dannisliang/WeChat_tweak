//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMImageLoaderObserver.h"
#import "MMService.h"

@class NSMutableSet, NSString;

@interface WSVideoThumbCacheMgr : MMService <MMImageLoaderObserver, MMService>
{
    int _contextCnt;
    NSMutableSet *_downloadingImageKeys;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
@property(nonatomic) int contextCnt; // @synthesize contextCnt=_contextCnt;
- (void)dealloc;
@property(retain, nonatomic) NSMutableSet *downloadingImageKeys; // @synthesize downloadingImageKeys=_downloadingImageKeys;
- (id)getImageForKey:(id)arg1 needAsyncDownload:(_Bool)arg2;
- (_Bool)hasImageForKey:(id)arg1;
- (id)init;
- (_Bool)isDownloadingKey:(id)arg1;
- (void)preload:(id)arg1;
- (void)registerContext:(id)arg1;
- (void)unRegisterContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

