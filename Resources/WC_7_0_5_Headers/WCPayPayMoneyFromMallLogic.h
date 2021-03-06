//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUseCaseCallback.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayPayMoneyLogicDelegate.h"

@class NSString, WCPayMallPayStruct, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromMallLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt, MMUseCaseCallback>
{
    WCPayMallPayStruct *m_oWCPayMallPayStruct;
    WCPayPayMoneyLogic *m_payLogic;
}

- (void).cxx_destruct;
- (void)OnGetMallPrepayRequest:(id)arg1 AppSource:(id)arg2 Error:(id)arg3;
- (void)call:(id)arg1;
- (void)dealloc;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)setWCPayMallPayStruct:(id)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

