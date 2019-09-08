//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavDataItemWrap, FavoritesItem, FavoritesItemDataField, MMFavCellComponent, MMUIViewController, NSArray, NSIndexPath, NSMutableArray, NSString, UITableView, UIView;

@protocol FavSearchControllerDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;
- (_Bool)itemEditable;
- (void)onSelectFavItem:(FavoritesItem *)arg1 tableView:(UITableView *)arg2 atIndexPath:(NSIndexPath *)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(NSString *)arg6 withCell:(MMFavCellComponent *)arg7;
- (void)resetHeaderView:(UIView *)arg1;
- (_Bool)shouldShowSearchResult:(FavoritesItem *)arg1;

@optional
- (void)furtherSearchFilter:(NSMutableArray *)arg1 withSearchText:(NSString *)arg2 withSearchType:(unsigned int)arg3 withTagList:(NSArray *)arg4;
- (void)onBtnEdit;
- (void)onDidEndSearch;
- (void)onSelectFavDataItem:(FavDataItemWrap *)arg1 tableView:(UITableView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onShowFavContext:(FavoritesItem *)arg1 DataItem:(FavoritesItemDataField *)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(NSString *)arg6;
- (void)onWillBeginSearch;
- (void)onWillEndSearch;
@end
