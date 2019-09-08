//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "MoveWithTouchAlgorithmDelegate.h"

@class MoveWithTouchAlgorithm, NSString;

@interface BackgroundMoveView : UIImageView <MoveWithTouchAlgorithmDelegate>
{
    MoveWithTouchAlgorithm *m_moveAlgorithm;
    id <BackgroundMoveViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)adsorbToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <BackgroundMoveViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm; // @synthesize m_moveAlgorithm;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
