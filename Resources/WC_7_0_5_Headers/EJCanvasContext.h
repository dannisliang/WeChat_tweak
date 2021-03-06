//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSValue;

@interface EJCanvasContext : NSObject
{
    short width;
    short height;
    _Bool preserveDrawingBuffer;
    _Bool msaaEnabled;
    _Bool needsPresenting;
    int msaaSamples;
    EAGLContext *glContext;
    _Bool stopRender;
    NSValue *canvasContext;
    _Bool _isTransparent;
}

@property(retain, nonatomic) NSValue *canvasContext; // @synthesize canvasContext;
- (void)create;
- (void)dealloc;
- (void)flushBuffers;
@property(readonly, nonatomic) EAGLContext *glContext; // @synthesize glContext;
@property(nonatomic) short height; // @synthesize height;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) _Bool msaaEnabled; // @synthesize msaaEnabled;
@property(nonatomic) int msaaSamples; // @synthesize msaaSamples;
- (void)prepare;
@property(nonatomic) _Bool preserveDrawingBuffer; // @synthesize preserveDrawingBuffer;
- (void)resumeUpdate;
@property(nonatomic) _Bool stopRender; // @synthesize stopRender;
@property(nonatomic) short width; // @synthesize width;

@end

