//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICGLContext.h"

@class EAGLContext;

@interface ICGLESContext : ICGLContext
{
    EAGLContext *_eaglContext;
    EAGLContext *_previousContext;
}

+ (id)defaultShareContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) EAGLContext *eaglContext; // @synthesize eaglContext=_eaglContext;
- (id)initWithSharedContext:(id)arg1;
- (void)makeCurrent;
- (void)makeCurrentAndStorePreviousContext;
- (void)restorePreviousContext;

@end
