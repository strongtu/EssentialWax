// Many protocols will work from wax out of the box. But some need to be preloaded.
// If the protocol you are using isn't found, just add the protocol to this object
//
// This seems to be a bug, or there is a runtime method I'm unaware of
/*
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@protocol TagSetsViewDelegate<NSObject>

- (BOOL)didSelectLabel:(NSString*)str;
@optional
- (void)didSelectEditLabel;

@end

@protocol ChosenTagShowViewDlegate<NSObject>

- (void)didRemoveLabel:(NSString *)str;

@end

@protocol CAAnimationDelegate
@optional
- (void)animationDidStart:(CAAnimation *)theAnimation;
- (void)animationDidStop:(CAAnimation *)theAnimation finished:(BOOL)flag;
@end

@class AwesomeMenu;
@protocol AwesomeMenuDelegate <NSObject>
@optional
- (void)awesomeMenu:(AwesomeMenu *)menu didSelectIndex:(NSInteger)idx;
- (void)awesomeMenuDidFinishAnimationClose:(AwesomeMenu *)menu;
- (void)awesomeMenuDidFinishAnimationOpen:(AwesomeMenu *)menu;
- (void)awesomeMenuWillAnimateOpen:(AwesomeMenu *)menu;
- (void)awesomeMenuWillAnimateClose:(AwesomeMenu *)menu;
@end

@class SecSessionTableViewCell;
@protocol SecSessionTableViewCellDelegate <NSObject>
- (BOOL)secSessionTableViewCellRefreshOtherCellEditingState;
- (void)secSessionTableViewCellEditingDidChange:(SecSessionTableViewCell *)cell editing:(BOOL)editing;
- (void)secSessionTableViewCellDeleteButtonOnClick:(SecSessionTableViewCell *)cell;
@end

@class SecMsgTableViewCell;
@class SecSessionModel;
@protocol SecMsgTableViewCellDelegate <NSObject>
@optional
- (void)secMsgTableViewCellDidTapFailIcon:(SecMsgTableViewCell *)cell;
@required
- (SecSessionModel *)secSessionModelForSecMsgTableViewCell:(SecMsgTableViewCell *)cell;
@end

@class QQLoadMoreView;
@protocol QQLoadMoreViewDelegate <NSObject>
@required
- (void)loadMoreViewDidStartAnimating:(QQLoadMoreView *)loadMoreView;
- (BOOL)shouldStartLoadMoreViewAnimating:(QQLoadMoreView *)loadMoreView withContentSize:(CGSize)contentSize contentOffset:(CGPoint)contentOffset;
- (CGRect)frameForLoadMoreViewWhenAnimating:(QQLoadMoreView *)loadMoreView;
- (UIEdgeInsets)edgeInsetsForTableViewWhenLoadMoreView:(QQLoadMoreView *)loadMoreView animating:(BOOL)animating;
@optional
- (void)loadMoreViewWillStopAnimating:(QQLoadMoreView *)loadMoreView;
@end


@class QQDeckPendantSeriesModel;
@class QQDeckPendantModel;
@protocol QQDeckPendantManagerDelegate <NSObject>
@required
- (void)didFinishLoadAvatarImg:(UIImage *)headImg uin:(NSString *)uinP isSuccess:(BOOL)isSuccess;
- (void)didFinishLoadLocalSeriesList:(NSArray *)seriesList isSuccess:(BOOL)isSuccess;
- (void)didFinishFetchSeriesList:(NSArray *)seriesList isSuccess:(BOOL)isSuccess;
- (void)didFinishFetchSeriesThumbnail:(QQDeckPendantSeriesModel *)seriesModel isSuccess:(BOOL)isSuccess;
- (void)didFinishFetchPendantPreView:(QQDeckPendantModel *)pendantModel isSuccess:(BOOL)isSuccess;
- (void)didFinishFetchPendantBigImg:(QQDeckPendantModel *)pendantModel isSuccess:(BOOL)isSuccess;
- (void)didFinishFetchAllFlagIcon:(BOOL)isSuccess;
- (void)didFinishFetchDefaultHead:(QQDeckPendantSeriesModel *)seriesModel isSuccess:(BOOL)isSuccess;
- (void)didFinishSavePendant:(QQDeckPendantModel *)pendantModel info:(NSDictionary *)info isSuccess:(BOOL)isSuccess;
- (void)didFinishCannelPendant:(QQDeckPendantModel *)pendantModel info:(NSDictionary *)info isSuccess:(BOOL)isSuccess;
@end



@class QQViewController;
@protocol PendantDeckChangeAvatarDelegate <NSObject>
@required
- (QQViewController *)getCurViewController;
- (void)didChangeAvatarSuccess;
@end

@protocol PendantDeckPlayVipDelegate <NSObject>
@required
- (void)didFinishPlayVip:(BOOL)success msg:(NSString *)msg;
- (void)didFinishUILoading;
@end



@interface ProtocolLoader : NSObject <UIApplicationDelegate, UIWebViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UISearchBarDelegate, UITextViewDelegate, UITabBarControllerDelegate,CLLocationManagerDelegate,CAAnimationDelegate,TagSetsViewDelegate,ChosenTagShowViewDlegate, AwesomeMenuDelegate,SecSessionTableViewCellDelegate,SecMsgTableViewCellDelegate,QQLoadMoreViewDelegate,QQDeckPendantManagerDelegate,PendantDeckChangeAvatarDelegate,PendantDeckPlayVipDelegate> {}
@end

@implementation ProtocolLoader
@end
*/
