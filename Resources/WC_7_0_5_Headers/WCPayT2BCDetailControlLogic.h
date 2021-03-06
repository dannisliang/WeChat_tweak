//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayT2BCQueryDetailCgiDelegate.h"

@class NSString, WCPayT2BCQueryDetailCgi;

@interface WCPayT2BCDetailControlLogic : WCPayControlLogic <WCPayT2BCQueryDetailCgiDelegate>
{
    id <WCPayT2BCDetailControlLogicDelegate> _t2bcDetailLogicDelegate;
    WCPayT2BCQueryDetailCgi *_m_queryDetailCgi;
    unsigned long long _m_fromScene;
    unsigned long long _m_status;
}

- (void).cxx_destruct;
- (void)OnWCPayT2BCQueryDetailCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCPayT2BCQueryDetailCgiResponseOK:(id)arg1;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (void)dealloc;
- (void)getTransferDetailData;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned long long)arg2 status:(unsigned long long)arg3;
@property(nonatomic) unsigned long long m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(retain, nonatomic) WCPayT2BCQueryDetailCgi *m_queryDetailCgi; // @synthesize m_queryDetailCgi=_m_queryDetailCgi;
@property(nonatomic) unsigned long long m_status; // @synthesize m_status=_m_status;
- (void)setT2BCDetialControlLogicDelegate:(id)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

