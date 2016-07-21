//
//  SplashViewContronller.m
//  GDTMobApp
//
//  Created by GaoChao on 15/8/21.
//  Copyright © 2015年 Tencent. All rights reserved.
//

#import "SplashViewController.h"
#import "GDTSplashAd.h"

@implementation SplashViewController
{
    GDTSplashAd *_splash;
}

static NSString *APP_KEY     = @"1101508191";
static NSString *PLACEMENTID = @"9040714184494018";


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        [self viewDidLoad];
    }
    return self;
}

-(void)viewDidLoad
{
    [super viewDidLoad];

}

-(void)showSplashAd
{
    //开屏广告初始化
    _splash = [[GDTSplashAd alloc] initWithAppkey:APP_KEY placementId:PLACEMENTID];
    _splash.delegate = self;//设置代理
    //针对不同设备尺寸设置不同的默认图片，拉取广告等待时间会展示该默认图片。
    if ([[UIScreen mainScreen] bounds].size.height >= 568.0f) {
        _splash.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"LaunchImage-568h"]];
    } else {
        _splash.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"LaunchImage"]];
    }
    
    UIWindow *fK = [[UIApplication sharedApplication] keyWindow];
    //设置开屏拉取时长限制，若超时则不再展示广告
    _splash.fetchDelay = 3;
    //拉取并展示
    [_splash loadAdAndShowInWindow:fK];
}



-(void)splashAdSuccessPresentScreen:(GDTSplashAd *)splashAd
{
    NSLog(@"%s",__FUNCTION__);
}

-(void)splashAdFailToPresent:(GDTSplashAd *)splashAd withError:(NSError *)error
{
    NSLog(@"%s%@",__FUNCTION__,error);
}

-(void)splashAdClicked:(GDTSplashAd *)splashAd
{
    NSLog(@"%s",__FUNCTION__);
}

-(void)splashAdApplicationWillEnterBackground:(GDTSplashAd *)splashAd
{
    NSLog(@"%s",__FUNCTION__);
}

-(void)splashAdClosed:(GDTSplashAd *)splashAd
{
    NSLog(@"%s",__FUNCTION__);
}
@end
