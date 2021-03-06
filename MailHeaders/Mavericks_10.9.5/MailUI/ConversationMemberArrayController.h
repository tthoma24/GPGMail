/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSArrayController.h"

@class MCMessage, NSMutableSet;

@interface ConversationMemberArrayController : NSArrayController
{
    MCMessage *_focusedMessage;
    BOOL _temporarilyToggleRelatedMessages;
    NSMutableSet *_directlyLinkedSentMessages;
}

+ (id)keyPathsForValuesAffectingHasRelatedMessages;
@property(retain, nonatomic) NSMutableSet *directlyLinkedSentMessages; // @synthesize directlyLinkedSentMessages=_directlyLinkedSentMessages;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateDirectlyLinkedSentMessagesForContent:(id)arg1;
- (void)_updateFilterPredicate;
@property(readonly, nonatomic) BOOL viewingRelatedMessages;
@property(readonly, nonatomic) BOOL hasRelatedMessages;
@property(nonatomic) BOOL temporarilyToggleRelatedMessages;
- (void)resetConversationState;
@property(retain, nonatomic) MCMessage *focusedMessage;
- (id)arrangeObjects:(id)arg1;
- (id)automaticRearrangementKeyPaths;
- (BOOL)automaticallyRearrangesObjects;
- (void)setContent:(id)arg1;
- (void)dealloc;
- (void)_conversationMemberArrayControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

@end

