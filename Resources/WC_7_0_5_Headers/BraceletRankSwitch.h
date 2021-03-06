//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class MMUILabel, MMUIView, NSString, UIColor, UIFont;

@interface BraceletRankSwitch : UIControl
{
    _Bool _on;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIColor *_thumbTintColor;
    UIColor *_onTextColor;
    UIColor *_offTextColor;
    UIFont *_textFont;
    NSString *_onText;
    NSString *_offText;
    MMUIView *_containerView;
    MMUIView *_onContentView;
    MMUIView *_offContentView;
    MMUIView *_knobView;
    MMUILabel *_onLabel;
    MMUILabel *_offLabel;
    MMUIView *_borderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *borderView; // @synthesize borderView=_borderView;
- (void)commonInit;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
- (void)handlePanGestureRecognizerEvent:(id)arg1;
- (void)handleTapTapGestureRecognizerEvent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) MMUIView *knobView; // @synthesize knobView=_knobView;
- (void)layoutSubviews;
@property(retain, nonatomic) MMUIView *offContentView; // @synthesize offContentView=_offContentView;
@property(retain, nonatomic) MMUILabel *offLabel; // @synthesize offLabel=_offLabel;
@property(retain, nonatomic) NSString *offText; // @synthesize offText=_offText;
@property(retain, nonatomic) UIColor *offTextColor; // @synthesize offTextColor=_offTextColor;
@property(retain, nonatomic) MMUIView *onContentView; // @synthesize onContentView=_onContentView;
@property(retain, nonatomic) MMUILabel *onLabel; // @synthesize onLabel=_onLabel;
@property(retain, nonatomic) NSString *onText; // @synthesize onText=_onText;
@property(retain, nonatomic) UIColor *onTextColor; // @synthesize onTextColor=_onTextColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
- (void)scaleKnodViewFrame:(_Bool)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)sizeToFitLable;

@end

