//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseResponseErrMsg, WCScheduleItem;

@protocol WCScheduleLogicControllerDelegate <NSObject>

@optional
- (void)onWCScheduleCancelDatePickerView;
- (void)onWCScheduleItem:(WCScheduleItem *)arg1 SetSuccess:(_Bool)arg2 ErrMsg:(BaseResponseErrMsg *)arg3;
- (void)onWCScheduleSelectDatePickerView;
@end

