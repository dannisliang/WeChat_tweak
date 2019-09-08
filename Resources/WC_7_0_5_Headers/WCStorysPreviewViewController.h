//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "IExtraDeviceLoginMgrExt.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCFacadeExt.h"
#import "WCStoryFacadeExt.h"
#import "WCStoryPreivewPageCollectionControllerDelegate.h"
#import "WCStoryPreviewPageViewDelegate.h"

@class MMUIButton, NSString, WCStoryPageControl, WCStoryPreivewPageCollectionController, WCStoryPreviewReportObj;

@interface WCStorysPreviewViewController : WCDragToCloseViewController <UIViewControllerTransitioningDelegate, WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate, WCFacadeExt, WCStoryFacadeExt, IExtraDeviceLoginMgrExt>
{
    WCStoryPreivewPageCollectionController *m_collectionController;
    WCStoryPageControl *pageControl;
    MMUIButton *m_closeBtn;
    _Bool _disableResumeMusic;
    _Bool _hidePageControl;
    _Bool _canDeleteMyOwnStory;
    _Bool _scrollEnabled;
    id <WCStorysPreviewViewControllerDelegate> _delegate;
    WCStoryPreviewReportObj *_previewReportObj;
    unsigned long long _statusChangePreviewType;
    MMUIButton *_moreActionBtn;
    struct CGRect _originFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canDeleteMyOwnStory; // @synthesize canDeleteMyOwnStory=_canDeleteMyOwnStory;
- (void)clickMoreAction;
- (unsigned long long)dataItemCount;
- (void)dealloc;
@property(nonatomic) __weak id <WCStorysPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didAppear;
- (void)didDisshow;
@property(nonatomic) _Bool disableResumeMusic; // @synthesize disableResumeMusic=_disableResumeMusic;
- (void)dragUPGestureReceived:(id)arg1;
- (id)getPreloadMediaItems;
@property(nonatomic) _Bool hidePageControl; // @synthesize hidePageControl=_hidePageControl;
- (void)hideSelf;
- (void)hideVCAnimation;
- (id)init;
- (void)initCollectionController;
- (void)initCollectionView;
- (void)initTopButton;
- (void)jumpToFirstUnreadCommentPage;
- (void)markCommentRead:(unsigned long long)arg1;
- (void)markUserStoryHasRead:(id)arg1 lastIndexPath:(id)arg2;
@property(nonatomic) __weak MMUIButton *moreActionBtn; // @synthesize moreActionBtn=_moreActionBtn;
- (void)onClickPageView:(id)arg1 toHideUIElement:(_Bool)arg2;
- (void)onCommentListView:(id)arg1 show:(_Bool)arg2;
- (void)onDataItemAllCommentMakeRead:(id)arg1;
- (void)onExtraDeviceLoginClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragToClose;
- (void)onGetStoryComentDelete:(id)arg1;
- (void)onGetStoryUnReadComment:(id)arg1;
- (void)onLongPressToDeletePageView:(id)arg1;
- (void)onLongPressToHidePageView:(id)arg1;
- (void)onNetworkActivityStatusChanged;
- (void)onReverseDataItemPrivateWithTid:(id)arg1 isInvisible:(_Bool)arg2;
- (void)onStoryDeleteSuccessWithDataTid:(id)arg1;
- (void)onStoryPageCollectionControllerChangePage:(id)arg1 pageView:(id)arg2 lastIndexPath:(id)arg3;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
- (void)pageAction;
- (void)pause;
- (void)playInMute:(_Bool)arg1;
@property(retain, nonatomic) WCStoryPreviewReportObj *previewReportObj; // @synthesize previewReportObj=_previewReportObj;
- (void)reloadPageControl;
- (void)reloadWithDataItems:(id)arg1;
- (void)reloadWithDataUnit:(id)arg1;
- (void)reportChangeFeaturedOrHiddenStatusWithTid:(id)arg1 videoType:(unsigned long long)arg2;
- (void)reportExitPreview;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (void)scrollToIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long statusChangePreviewType; // @synthesize statusChangePreviewType=_statusChangePreviewType;
- (void)tryToShowCommentList;
- (id)updateItemOfDataUnitWithTid:(id)arg1;
- (void)updateNetworkStatus;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)voiceOverElementEnable:(_Bool)arg1;
- (void)willAppear;
- (void)willDisappear;
- (void)willDisshow;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
