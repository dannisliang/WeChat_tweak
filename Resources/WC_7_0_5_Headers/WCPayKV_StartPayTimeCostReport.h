//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCPayKV_StartPayTimeCostReport : NSObject
{
    unsigned long long _m_appLaunchTime;
    unsigned long long _m_logicStartTime;
    unsigned long long _m_logicNetworkEndTime;
    unsigned long long _m_logicShowViewTime;
    unsigned long long _m_isFirstLaunch;
    unsigned long long _m_hasLogNoOrderViewTime;
}

+ (id)shareInstance;
- (void)clearWhenLogicStop;
@property(nonatomic) unsigned long long m_appLaunchTime; // @synthesize m_appLaunchTime=_m_appLaunchTime;
@property(nonatomic) unsigned long long m_hasLogNoOrderViewTime; // @synthesize m_hasLogNoOrderViewTime=_m_hasLogNoOrderViewTime;
@property(nonatomic) unsigned long long m_isFirstLaunch; // @synthesize m_isFirstLaunch=_m_isFirstLaunch;
@property(nonatomic) unsigned long long m_logicNetworkEndTime; // @synthesize m_logicNetworkEndTime=_m_logicNetworkEndTime;
@property(nonatomic) unsigned long long m_logicShowViewTime; // @synthesize m_logicShowViewTime=_m_logicShowViewTime;
@property(nonatomic) unsigned long long m_logicStartTime; // @synthesize m_logicStartTime=_m_logicStartTime;
- (void)recordFirstLaunch;
- (void)recordLaunchTime;
- (void)recordLogicNetworkEndTime;
- (void)recordLogicShowViewNoOrderViewTime;
- (void)recordLogicShowViewTime;
- (void)recordLogicStartTime;
- (void)reportWithScene:(unsigned int)arg1;

@end

