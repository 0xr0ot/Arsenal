//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICRecentlyDeletedUtilities : NSObject
{
}

+ (_Bool)didShowMoveToFolderAlert;
+ (id)localizedDeleteNoteAlertMessage;
+ (id)localizedDeleteNoteAlertTitle;
+ (id)localizedHeaderViewLabel;
+ (id)localizedRecoverNoteAlertMessage;
+ (id)localizedRecoverNoteAlertTitle;
+ (id)localizedTwoLineHeaderViewLabel;
+ (void)setDidShowMoveToAlertFolder:(_Bool)arg1;
+ (void)showRecentlyDeletedAlertIfNecessaryForNotes:(id)arg1 viewController:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)showRecentlyDeletedAlertIfNecessaryForViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

