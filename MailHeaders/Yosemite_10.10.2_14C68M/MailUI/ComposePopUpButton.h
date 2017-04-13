/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSPopUpButton.h"

@class NSLayoutConstraint;

@interface ComposePopUpButton : NSPopUpButton
{
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_preferredWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // @synthesize preferredWidthConstraint=_preferredWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
