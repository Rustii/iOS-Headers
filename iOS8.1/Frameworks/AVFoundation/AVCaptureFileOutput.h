//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput
{
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

+ (void)initialize;
@property(nonatomic) long long minFreeDiskSpaceLimit;
@property(nonatomic) long long maxRecordedFileSize;
@property(nonatomic) CDStruct_1b6d18a9 maxRecordedDuration;
@property(readonly, nonatomic) long long recordedFileSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
- (void)setPausesRecordingOnInterruption:(BOOL)arg1;
- (BOOL)pausesRecordingOnInterruption;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)isRecordingPaused;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
@property(readonly, nonatomic, getter=isRecording) BOOL recording;
@property(readonly, nonatomic) NSURL *outputFileURL;
- (void)dealloc;
- (id)init;

@end
