//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IExptServiceExt.h"
#import "IWCLabsLogicExt.h"
#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSString, WCLabsCommonInfo;

@interface WCLabsMgr : MMService <IWCLabsLogicExt, IExptServiceExt, MMService>
{
    NSMutableDictionary *_labsAppItemDic;
    NSMutableArray *_onlineLabsItems;
    NSMutableArray *_offlineLabItems;
    WCLabsCommonInfo *_labsCommonInfo;
    NSMutableArray *_clearedRedDotLabsAppidAryInLab;
    NSMutableArray *_clearedRedDotLabsAppidAryInAppEntrance;
}

- (void).cxx_destruct;
- (void)clearAllData;
- (void)dealloc;
- (void)getABTestItemsForRequest:(id)arg1;
- (id)getExpItemsArray;
- (id)getLabsAppItemByAppid:(id)arg1;
- (id)getOfflineLabItems;
- (id)getOnlineLabsItems;
- (_Bool)isExpRunningWithLabAppid:(id)arg1;
- (void)loadData;
- (void)markLabAppClickWithAppid:(id)arg1;
- (void)markShowLabsTip;
- (void)onGetABTestExpLabsItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(_Bool)arg3;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)saveLabsAppItemDic;
- (_Bool)shouldShowEntranceWithLabAppid:(id)arg1;
- (_Bool)shouldShowNewRedDotInWechatLabEntrance;
- (_Bool)shouldShowRedDotInWechatLabEntrance;
- (_Bool)shouldShowRedDotInWechatLabsCellWithAppid:(id)arg1;
- (_Bool)shouldShowRedDotWithLabAppid:(id)arg1;
- (_Bool)shouldShowWCLabEntrance;
- (void)tryMarkClearNewRedDotInWechatLabEntrance;
- (void)tryMarkClearRedDotInWechatLabsCellWithAppid:(id)arg1;
- (void)updateLabAppEntranceWithAppid:(id)arg1 switchValue:(_Bool)arg2 sync:(_Bool)arg3;
- (void)updateOnlineOffLineLabItems;
- (void)updateWCLabByXExpt:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

