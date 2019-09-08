//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString;

@interface MMOpenVoiceVideoHWenc : NSObject
{
    struct OpaqueVTCompressionSession *EncodingSession;
    NSObject<OS_dispatch_queue> *aQueue;
    struct opaqueCMFormatDescription *format;
    CDStruct_d2aef016 *timingInfo;
    _Bool initialized;
    int frameCount;
    NSData *sps;
    NSData *pps;
    int mWidth;
    int mHeight;
    int mBR;
    int FPS;
    NSString *error;
    id <MMOpenVoiceVideoHWencDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)End;
@property(nonatomic) int FPS; // @synthesize FPS;
- (void)SetHWEncBR:(int)arg1;
- (void)SetHWEncFPS:(int)arg1;
@property(nonatomic) __weak id <MMOpenVoiceVideoHWencDelegate> delegate; // @synthesize delegate=_delegate;
- (int)encode:(struct __CVBuffer *)arg1;
@property(nonatomic) __weak NSString *error; // @synthesize error;
- (id)init;
- (void)initEncode:(int)arg1 height:(int)arg2 bitrate:(int)arg3 framerate:(int)arg4;

@end
