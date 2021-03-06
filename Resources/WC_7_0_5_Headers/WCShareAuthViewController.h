//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"

@class NSString, UIView;

@interface WCShareAuthViewController : MMUIViewController <PBMessageObserverDelegate>
{
    _Bool bIsFromSysCopy;
    int _type;
    unsigned int _msgType;
    id <WCShareAuthViewControllerDelegate> _delegate;
    NSString *_appName;
    NSString *_appId;
    NSString *_bundleId;
    NSString *_extText;
    NSString *_extUrl;
    NSString *_desc;
    NSString *_appBrandUserName;
    NSString *_appBrandPath;
    NSString *_userOpenId;
    NSString *_songAlbumUrl;
    UIView *_scrollView;
    UIView *_errView;
    NSString *_errString;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(retain, nonatomic) NSString *appBrandPath; // @synthesize appBrandPath=_appBrandPath;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool bIsFromSysCopy; // @synthesize bIsFromSysCopy;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)checkIfNeedUpdateAppDataFromServer:(id)arg1 version:(unsigned int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WCShareAuthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)didFail;
- (void)didSuccess:(id)arg1;
@property(retain, nonatomic) NSString *errString; // @synthesize errString=_errString;
@property(retain, nonatomic) UIView *errView; // @synthesize errView=_errView;
@property(retain, nonatomic) NSString *extText; // @synthesize extText=_extText;
@property(retain, nonatomic) NSString *extUrl; // @synthesize extUrl=_extUrl;
- (id)getType;
- (void)goBack;
- (id)initWithType:(int)arg1 appid:(id)arg2 bundleId:(id)arg3 txt:(id)arg4 url:(id)arg5 msgType:(unsigned int)arg6;
- (id)initWithType:(int)arg1 appid:(id)arg2 bundleId:(id)arg3 txt:(id)arg4 url:(id)arg5 msgType:(unsigned int)arg6 desc:(id)arg7 extraData:(id)arg8;
- (id)initWithType:(int)arg1 appid:(id)arg2 bundleId:(id)arg3 txt:(id)arg4 url:(id)arg5 msgType:(unsigned int)arg6 desc:(id)arg7 songAlbumUrl:(id)arg8 extraData:(id)arg9;
- (id)initWithType:(int)arg1 appid:(id)arg2 bundleId:(id)arg3 txt:(id)arg4 url:(id)arg5 msgType:(unsigned int)arg6 songAlbumUrl:(id)arg7;
- (id)makeLink;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
- (void)onBackBtnClick:(id)arg1;
@property(retain, nonatomic) UIView *scrollView; // @synthesize scrollView=_scrollView;
- (void)sendAuthRequest;
@property(retain, nonatomic) NSString *songAlbumUrl; // @synthesize songAlbumUrl=_songAlbumUrl;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userOpenId; // @synthesize userOpenId=_userOpenId;
- (void)viewDidLoad;

@end

