//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RichTextLayoutDelegate.h"

@class MMUIButton, NSMutableArray, NSString, RichTextView, UIColor, UIFont, UIImage;

@interface BrandExpandableLabel : UIView <RichTextLayoutDelegate>
{
    struct CGSize _fullTitleSize;
    NSMutableArray *_fullTitleStyles;
    struct CGSize _partTitleSize;
    NSMutableArray *_partTitleStyles;
    _Bool _isUsingIcon;
    UIImage *_foldIcon;
    UIImage *_unfoldIcon;
    _Bool _isUsingStr;
    NSString *_foldStr;
    NSString *_unfoldStr;
    _Bool _isLongText;
    _Bool _isExpanded;
    RichTextView *_titleLabel;
    MMUIButton *_foldButton;
    id <BrandExpandableLabelDelegate> _delegate;
    unsigned long long _titleRowThreshold;
    double _titleMaxWidth;
    NSString *_titleStr;
    UIFont *_titleFont;
    UIColor *_titleColor;
    double _titleLineSpacing;
    double _titleButtonPadding;
}

- (void).cxx_destruct;
- (void)clearLayoutCache;
@property(nonatomic) __weak id <BrandExpandableLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)layoutSubviews;
- (double)lineWidthAtY:(double)arg1 richTextView:(id)arg2;
- (void)onFoldButtonClicked;
- (void)setFoldIcon:(id)arg1 unfoldIcon:(id)arg2;
- (void)setFoldStr:(id)arg1 unfoldStr:(id)arg2 strColor:(id)arg3;
@property(nonatomic) double titleButtonPadding; // @synthesize titleButtonPadding=_titleButtonPadding;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double titleLineSpacing; // @synthesize titleLineSpacing=_titleLineSpacing;
@property(nonatomic) double titleMaxWidth; // @synthesize titleMaxWidth=_titleMaxWidth;
@property(nonatomic) unsigned long long titleRowThreshold; // @synthesize titleRowThreshold=_titleRowThreshold;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void)setupSubviews;
- (struct CGSize)titleLabelSize;
- (void)updateFoldButtonUsingIcon;
- (void)updateFoldButtonUsingStr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

