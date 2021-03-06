//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "EmoticonCustomAddLogicControllerDelegate.h"
#import "MMUIViewControllerDelegate.h"

@class AppEmoticonMessageViewModel, EmoticonCustomAddLogicController, MMEmoticonView, NSString, SightIconView, UIImageView;

@interface AppEmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    MMEmoticonView *m_emoticonView;
    SightIconView *m_sightIconView;
    UIImageView *m_bottomInfoBgView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
}

- (void).cxx_destruct;
- (id)getViewController;
- (void)initEmoticonView;
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)onClick;
- (void)onForward:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)showBottomInfoBgView;
- (void)showSightIconWithIconType:(int)arg1;
- (void)startDownloadImage;
- (void)updateProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppEmoticonMessageViewModel *viewModel; // @dynamic viewModel;

@end

