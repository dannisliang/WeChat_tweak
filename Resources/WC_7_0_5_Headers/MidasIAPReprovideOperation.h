//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasIAPPayOperation.h"

@class NSMutableArray;

@interface MidasIAPReprovideOperation : MidasIAPPayOperation
{
    NSMutableArray *_transactions;
    NSMutableArray *_willBeFinishTrans;
    _Bool _fromManual;
}

- (void).cxx_destruct;
- (void)blockDoNewProvide:(id)arg1;
- (void)blockDoProvide;
- (void)blockFinalSuccess:(id)arg1;
- (void)blockProcessNewProvideCgiError:(long long)arg1 inner:(id)arg2 msg:(id)arg3 workingStep:(int)arg4;
- (void)blockProcessNewProvideCgiSuccess:(id)arg1;
- (void)blockProcessNewProvideNetError:(long long)arg1 workingStep:(int)arg2;
- (void)blockProcessOldProvideCgiError:(long long)arg1 inner:(id)arg2 msg:(id)arg3 workingStep:(int)arg4;
- (void)blockProcessOldProvideNetError:(long long)arg1 workingStep:(int)arg2;
- (void)blockProcessProvideCgiSuccess:(id)arg1 transactionID:(id)arg2;
- (id)constructExtendJson;
- (void)dispatchTransactions;
@property(nonatomic) _Bool fromManual; // @synthesize fromManual=_fromManual;
- (_Bool)midas_paymentQueue:(id)arg1 midas_updatedTransactions:(id)arg2;
- (void)start;

@end

