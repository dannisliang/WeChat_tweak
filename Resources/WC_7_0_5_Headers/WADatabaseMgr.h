//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCTDatabase, WCTTable;

@interface WADatabaseMgr : MMService <MMService>
{
    WCTDatabase *_db;
    WCTTable *_tableWeAppInfo;
    WCTTable *_tableWeAppModuleInfo;
    WCTTable *_tableEncryptWeAppInfo;
    WCTTable *_tablePermissionInfo;
    WCTTable *_tableContact;
    WCTTable *_tableBizAttrSyncBuffer;
    WCTTable *_tableConfigInfo;
    WCTTable *_tableWeAppListItem;
    WCTTable *_tableWeAppStarItem;
    WCTTable *_tableMainFrameTaskItem;
    WCTTable *_tableWeAppUsageInfo;
    WCTTable *_tableContactRemoteVersion;
    WCTTable *_tableWeAppDecryptKeyInfo;
    WCTTable *_tableIssueLaunchPermissionInfo;
    WCTTable *_tableBlockCgiInfo;
    WCTTable *_tablePrefetchSquenceInfo;
    WCTTable *_tableUpdatableMsgInfo;
    WCTTable *_tablePeriodFetchInfo;
    WCTTable *_tablePeriodFetchToken;
    WCTTable *_tableWeAppPluginCodeUsageLru;
}

+ (_Bool)deleteInfoDataWithTable:(id)arg1 where:(const struct Expression *)arg2;
+ (id)getInfoDataWithTable:(id)arg1 primaryKey:(id)arg2;
+ (_Bool)insertOrUpdateInfoDataWithTable:(id)arg1 infoData:(id)arg2;
- (void).cxx_destruct;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 encryptTypeString:(id)arg2 version:(unsigned int)arg3;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 moduleName:(id)arg2;
- (id)appIdPrimaryKeyWithAppId:(id)arg1 suffix:(id)arg2;
- (_Bool)clearBizAttrSyncBufferList:(id)arg1;
- (void)closeDB;
- (id)cmdIdPrimaryKeyWithAppId:(id)arg1 cmdType:(unsigned int)arg2;
- (id)contactFromDBContact:(id)arg1;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (id)dbContactWithContact:(id)arg1;
- (id)dbPath;
- (_Bool)deleteAllAppListItem;
- (_Bool)deleteAllAppStarItem;
- (_Bool)deleteAllPeriodFetchInfoBefore:(unsigned int)arg1;
- (_Bool)deleteAllPeriodFetchTokenBefore:(unsigned int)arg1;
- (_Bool)deleteAppInfoByAppID:(id)arg1;
- (_Bool)deleteAppInfoByAppIDAndPackageType:(id)arg1 packageType:(unsigned long long)arg2;
- (_Bool)deleteAppListItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)deleteAppModuleInfoByAppID:(id)arg1;
- (_Bool)deleteAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (_Bool)deleteAppStarItemByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)deleteAppUsageInfoBeforeTime:(unsigned int)arg1;
- (_Bool)deleteAppUsageInfoByUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)deleteBlockCgiInfoWithAppID:(id)arg1;
- (_Bool)deleteConfigInfoByAppID:(id)arg1;
- (_Bool)deleteContactList:(id)arg1;
- (_Bool)deleteContactRemoteVersionByUsername:(id)arg1;
- (_Bool)deleteDecryptKeyInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (_Bool)deleteEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned long long)arg2 version:(unsigned int)arg3;
- (_Bool)deleteIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (_Bool)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)arg1;
- (_Bool)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2;
- (_Bool)deletePeriodFetchInfo:(id)arg1;
- (_Bool)deletePeriodFetchToken:(id)arg1;
- (_Bool)deletePermissionInfoWithAppID:(id)arg1;
- (_Bool)deletePluginCodeInfoByAppIDAndVersion:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)deletePluginCodeLruInfoByAppIDAndVersion:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)deletePrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned int)arg2;
- (_Bool)deleteUpdatableMsgInfoWithShareKey:(id)arg1;
- (id)getAllAppListItem;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getAllAppListItemOrderByUpdateTime;
- (id)getAllAppListItemOrderByUpdateTimeIsIncludeStar:(_Bool)arg1;
- (id)getAllAppStarItem;
- (id)getAllAppStarItemByUsername:(id)arg1;
- (id)getAllAppStarItemOrderBySortFactor;
- (id)getAllAppStarItemOrderByUpdateTime;
- (id)getAllContact;
- (id)getAllEncryptInfoData;
- (id)getAllFocusContact;
- (id)getAllInfoData;
- (id)getAllModuleInfoData;
- (id)getAllNoFocusContact;
- (id)getAllPeriodFetchBriefInfo;
- (id)getAppInfoByAppID:(id)arg1;
- (id)getAppListItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (unsigned int)getAppListItemCount;
- (id)getAppModuleInfoByAppID:(id)arg1 moduleName:(id)arg2;
- (id)getAppStarItemByUsername:(id)arg1 appType:(unsigned int)arg2;
- (unsigned int)getAppStarItemCount;
- (id)getAppStarItemWithMaxSortFactor;
- (id)getBizAttrSyncBuffer:(id)arg1;
- (id)getBlockCgiInfoWithAppID:(id)arg1;
- (id)getBlockCgiInfoWithUsername:(id)arg1;
- (id)getConfigInfoByAppID:(id)arg1 andType:(unsigned int)arg2;
- (id)getContact:(id)arg1;
- (id)getContactRemoteVersionByUsername:(id)arg1;
- (id)getContactWithAppId:(id)arg1;
- (id)getContactWithKey:(id)arg1 type:(unsigned long long)arg2;
- (id)getCurrentAppListItemByLimit:(int)arg1;
- (id)getDecryptInfoByAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (id)getEncryptAppInfoByAppID:(id)arg1 encryptType:(unsigned long long)arg2 version:(unsigned int)arg3;
- (id)getIssueLaunchPermissionInfoWithAppID:(id)arg1;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1 includeStar:(_Bool)arg2;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1 includeStar:(_Bool)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2 includeStar:(_Bool)arg3;
- (id)getLatestAppUsageInfoListOverLastOpenTime:(unsigned int)arg1 isNeedDebugType:(_Bool)arg2 limit:(unsigned int)arg3;
- (id)getLeastRecentlyUsedInfoDataWithCount:(unsigned int)arg1;
- (id)getLeastRecentlyUsedPluginCodeInfo;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (id)getPeriodFetchInfo:(id)arg1;
- (unsigned int)getPeriodFetchInfoLastUpdateTime:(id)arg1;
- (id)getPeriodFetchToken:(id)arg1;
- (id)getPermissionInfoWithAppID:(id)arg1;
- (id)getPluginCodeAppInfo:(id)arg1;
- (id)getPluginCodeUsageInfoByAppIDAndVersion:(id)arg1 version:(unsigned int)arg2;
- (id)getPrefetchSequenceInfoWithAppID:(id)arg1 cmdType:(unsigned int)arg2;
- (id)getUpdatableMsgInfoWithShareKey:(id)arg1;
- (id)getUsageInfoWithUsrName:(id)arg1;
- (id)getUsageInfoWithUsrName:(id)arg1 appType:(unsigned int)arg2;
- (_Bool)inserOrUpdateContactList:(id)arg1;
- (_Bool)insertAppStarItemList:(id)arg1;
- (_Bool)insertOrUpdateAppInfo:(id)arg1;
- (_Bool)insertOrUpdateAppListItem:(id)arg1;
- (_Bool)insertOrUpdateAppModuleInfo:(id)arg1;
- (_Bool)insertOrUpdateAppStarItem:(id)arg1;
- (_Bool)insertOrUpdateAppUsageInfo:(id)arg1;
- (_Bool)insertOrUpdateBlockCgiInfo:(id)arg1;
- (_Bool)insertOrUpdateConfigInfo:(id)arg1;
- (_Bool)insertOrUpdateContactRemoteVersion:(id)arg1;
- (_Bool)insertOrUpdateDecryptKeyInfo:(id)arg1;
- (_Bool)insertOrUpdateEncryptAppInfo:(id)arg1;
- (_Bool)insertOrUpdateMainFrameTaskItem:(id)arg1;
- (_Bool)insertOrUpdatePeriodFetchInfo:(id)arg1 FetchData:(id)arg2;
- (_Bool)insertOrUpdatePeriodFetchToken:(id)arg1 Token:(id)arg2;
- (_Bool)insertOrUpdatePluginCodeAppInfo:(id)arg1;
- (_Bool)insertOrUpdatePluginCodeUsage:(id)arg1;
- (_Bool)insertOrUpdatePrefetchSequenceInfo:(id)arg1;
- (_Bool)isItemStared:(id)arg1;
- (_Bool)mergeAppListItems:(id)arg1 updateTimeOfLastItemAfterMerge:(unsigned int *)arg2;
- (_Bool)mergeAppStarItems:(id)arg1;
- (_Bool)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (_Bool)modifyWxAppOpt:(id)arg1 bitMask:(unsigned int)arg2 bitValue:(unsigned int)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)openDB;
- (_Bool)setBizAttrSyncBufferList:(id)arg1;
- (_Bool)setIssueLaunchPermissionInfo:(id)arg1;
- (_Bool)setPermissionInfo:(id)arg1;
@property(retain) WCTTable *tableBizAttrSyncBuffer; // @synthesize tableBizAttrSyncBuffer=_tableBizAttrSyncBuffer;
@property(retain) WCTTable *tableBlockCgiInfo; // @synthesize tableBlockCgiInfo=_tableBlockCgiInfo;
@property(retain) WCTTable *tableConfigInfo; // @synthesize tableConfigInfo=_tableConfigInfo;
@property(retain) WCTTable *tableContact; // @synthesize tableContact=_tableContact;
@property(retain) WCTTable *tableContactRemoteVersion; // @synthesize tableContactRemoteVersion=_tableContactRemoteVersion;
@property(retain) WCTTable *tableEncryptWeAppInfo; // @synthesize tableEncryptWeAppInfo=_tableEncryptWeAppInfo;
@property(retain) WCTTable *tableIssueLaunchPermissionInfo; // @synthesize tableIssueLaunchPermissionInfo=_tableIssueLaunchPermissionInfo;
@property(retain) WCTTable *tableMainFrameTaskItem; // @synthesize tableMainFrameTaskItem=_tableMainFrameTaskItem;
@property(retain) WCTTable *tablePeriodFetchInfo; // @synthesize tablePeriodFetchInfo=_tablePeriodFetchInfo;
@property(retain) WCTTable *tablePeriodFetchToken; // @synthesize tablePeriodFetchToken=_tablePeriodFetchToken;
@property(retain) WCTTable *tablePermissionInfo; // @synthesize tablePermissionInfo=_tablePermissionInfo;
@property(retain) WCTTable *tablePrefetchSquenceInfo; // @synthesize tablePrefetchSquenceInfo=_tablePrefetchSquenceInfo;
@property(retain) WCTTable *tableUpdatableMsgInfo; // @synthesize tableUpdatableMsgInfo=_tableUpdatableMsgInfo;
@property(retain) WCTTable *tableWeAppDecryptKeyInfo; // @synthesize tableWeAppDecryptKeyInfo=_tableWeAppDecryptKeyInfo;
@property(retain) WCTTable *tableWeAppInfo; // @synthesize tableWeAppInfo=_tableWeAppInfo;
@property(retain) WCTTable *tableWeAppListItem; // @synthesize tableWeAppListItem=_tableWeAppListItem;
@property(retain) WCTTable *tableWeAppModuleInfo; // @synthesize tableWeAppModuleInfo=_tableWeAppModuleInfo;
@property(retain) WCTTable *tableWeAppPluginCodeUsageLru; // @synthesize tableWeAppPluginCodeUsageLru=_tableWeAppPluginCodeUsageLru;
@property(retain) WCTTable *tableWeAppStarItem; // @synthesize tableWeAppStarItem=_tableWeAppStarItem;
@property(retain) WCTTable *tableWeAppUsageInfo; // @synthesize tableWeAppUsageInfo=_tableWeAppUsageInfo;
- (_Bool)setUpdatableMsgInfo:(id)arg1;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (_Bool)updateAppListItemOnStarState:(id)arg1;
- (_Bool)updateAppListItemOnUpdateTime:(id)arg1;
- (void)willRecoverDatabase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

