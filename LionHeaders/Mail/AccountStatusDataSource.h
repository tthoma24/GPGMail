/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SafeObserver.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class Account, AccountStatus, NSArray, NSMutableDictionary, NSPopUpButton, NSTableView, NSTextView;

@interface AccountStatusDataSource : SafeObserver <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSPopUpButton *_popUp;
    NSTableView *_table;
    NSTextView *_ispInfoField;
    NSMutableDictionary *_progressIndicators;
    id <AccountStatusDataSourceDelegate> _delegate;
    AccountStatus *_statusProvider;
    NSArray *_accounts;
    Account *_selectedAccount;
    Account *_dynamicAccount;
    unsigned long long _accountFlags;
    BOOL _disabled;
    BOOL _allowNone;
    BOOL _allowEditServerList;
    BOOL _omitStatus;
    BOOL _selectedAccountIsLocked;
    BOOL _delegateWantsTableDataSourceInvocations;
    BOOL _allowAccountLocking;
    BOOL _beConservative;
    BOOL _usesOfflineStatusString;
}

+ (id)keyPathsForValuesAffectingTotalNumberOfAccounts;
- (id)initWithDelegate:(id)arg1 forAccounts:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
@property(retain) AccountStatus *statusProvider; // @dynamic statusProvider;
@property(copy) NSArray *accounts; // @dynamic accounts;
@property(retain) Account *dynamicAccount; // @dynamic dynamicAccount;
@property(retain) Account *selectedAccount; // @dynamic selectedAccount;
- (void)selectAnyAccount;
@property(readonly) unsigned long long totalNumberOfAccounts;
- (void)setDelegate:(id)arg1;
- (void)_resetObservedAccounts;
- (id)_displayStringWithOfflineStatusForAccount:(id)arg1;
- (void)refresh;
- (void)enable;
- (void)disable;
- (void)configurePopUpButton:(id)arg1;
- (double)popUpSizeToFitWidth:(id)arg1;
- (long long)numberOfItemsInMenu:(id)arg1;
- (unsigned long long)menuItemIndexOfAccount:(id)arg1;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (void)_configureMenuItem:(id)arg1 forAccount:(id)arg2;
- (void)_popUpButtonWillPopUp:(id)arg1;
- (void)_synchronizePopUpWithSelectedAccount;
- (void)_selectAccount:(id)arg1;
- (void)editServerList:(id)arg1;
- (void)toggleAccountLock:(id)arg1;
- (void)configureTable:(id)arg1 ispInfoField:(id)arg2 handleDoubleClick:(BOOL)arg3 useOfflineStatusString:(BOOL)arg4;
- (void)tableViewWillBecomeVisible:(id)arg1;
- (void)tableViewWillHide:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (unsigned long long)tableRowIndexOfAccount:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)_accountForTableRow:(long long)arg1;
- (void)_removeAllIndicators:(id)arg1;
- (void)_tableViewDoubleClickAction:(id)arg1;
- (void)_willRefreshStatusForAllAccounts:(id)arg1;
- (void)_didUpdateAccountStatus:(id)arg1;
- (void)_accountInfoDidChange:(id)arg1;
- (void)_reloadAccounts;
- (void)_addUI:(id)arg1;
- (void)_removeUI:(id)arg1;
- (void)_updateUI;
- (void)_updateUIWithAccountState:(id)arg1;
@property BOOL beConservative; // @synthesize beConservative=_beConservative;
@property BOOL allowAccountLocking; // @synthesize allowAccountLocking=_allowAccountLocking;
@property BOOL delegateWantsTableDataSourceInvocations; // @synthesize delegateWantsTableDataSourceInvocations=_delegateWantsTableDataSourceInvocations;
@property BOOL selectedAccountIsLocked; // @synthesize selectedAccountIsLocked=_selectedAccountIsLocked;
@property BOOL omitStatus; // @synthesize omitStatus=_omitStatus;
@property BOOL allowEditServerList; // @synthesize allowEditServerList=_allowEditServerList;
@property BOOL allowNone; // @synthesize allowNone=_allowNone;

@end
