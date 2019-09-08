//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChangeOwnerLogicDelegate.h"
#import "ChatRoomAdminSettingLogicDelegate.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "MMTableViewInfoDelegate.h"

@class CContact, ChangeOwnerLogic, ChatRoomAdminSettingLogic, MMTableViewInfo, NSString;

@interface ChatRoomManagementViewController : MMUIViewController <MMTableViewInfoDelegate, ChangeOwnerLogicDelegate, ChatRoomAdminSettingLogicDelegate, IContactMgrExt, IGroupMgrExt>
{
    MMTableViewInfo *m_tableViewInfo;
    ChangeOwnerLogic *m_changeOwnerLogic;
    ChatRoomAdminSettingLogic *m_chatRoomAdminSettingLogic;
    CContact *m_chatRoomContact;
    id <ChatRoomManagementDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnChangeGroupAdmin:(id)arg1;
- (void)OnReturn;
- (void)OnSetChatRoomAccessType:(id)arg1 Type:(unsigned int)arg2 ErrorInfo:(id)arg3 Success:(_Bool)arg4;
- (void)checkAdmin;
- (void)checkNeedForcedUpdateForInfoDetail;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getViewController;
- (void)initData;
- (void)initTableView;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
@property(nonatomic) __weak id <ChatRoomManagementDelegate> m_delegate; // @synthesize m_delegate;
- (void)onChangeOwnerLogicStop:(_Bool)arg1;
- (void)onModifyContact:(id)arg1;
- (void)reloadTableData;
- (void)showChangeManagerView;
- (void)showChangeOwnerView;
- (void)switchAllowOwnerApprove:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
