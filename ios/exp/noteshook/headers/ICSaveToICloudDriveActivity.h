//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "UIDocumentPickerDelegate.h"

@class NSString, NSURL;

@interface ICSaveToICloudDriveActivity : UIActivity <UIDocumentPickerDelegate>
{
    NSURL *_fileURL;
}

+ (id)fileURLFromActivityItems:(id)arg1;
- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

