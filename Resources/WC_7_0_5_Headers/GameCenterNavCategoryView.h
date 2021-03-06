//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class TypeNavModule;

@interface GameCenterNavCategoryView : MMUIView
{
    TypeNavModule *_navCategory;
    _Bool _bVersionV5;
    id <GameCenterNavCategoryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GameCenterNavCategoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genLabelWithBoldFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
- (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
- (id)getNavItemView:(id)arg1 ItemIndex:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 navCategoryData:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 navCategoryData:(id)arg2 VersionV5:(_Bool)arg3;
- (void)onNavItemClicked:(id)arg1;
- (void)setupViews;

@end

