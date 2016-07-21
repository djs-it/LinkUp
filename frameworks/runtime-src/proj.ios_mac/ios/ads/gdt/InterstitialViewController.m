//
//  InterstitialViewController.m
//
//  Created by 高超 on 13-11-1.
//  Copyright (c) 2013年 高超. All rights reserved.
//

#import "InterstitialViewController.h"
//#import "GdtAdManager.h"

#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)

@implementation InterstitialViewController

static NSString *INTERSTITIAL_STATE_TEXT = @"插屏状态";

static NSString *APP_KEY     = @"1105259680";
static NSString *PLACEMENTID = @"7070209906425334";

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
         NSLog(@"init gdt initWithNibName ");
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        
    }
    return self;
}


- (void)viewDidLoad
{
         NSLog(@"init gdt viewDidLoad ");
    if (IS_OS_7_OR_LATER) {
        self.extendedLayoutIncludesOpaqueBars = NO;
        self.edgesForExtendedLayout = UIRectEdgeBottom | UIRectEdgeLeft | UIRectEdgeRight;
    }
}


- (void)initWithAppAndPlacement;
{
    NSLog(@"init gdt ad ");
    _interstitialObj = [[GDTMobInterstitial alloc] initWithAppkey:APP_KEY placementId:PLACEMENTID];
    _interstitialObj.delegate = self; //设置委托
    _interstitialObj.isGpsOn = NO; //【可选】设置GPS开关
    
    [_interstitialObj loadAd];
}

/**
 *  在适当的时候，初始化并调用loadAd方法进行预加载
 */
- (void)loadAd {
  
    //预加载广告
    _interstitialObj = [[GDTMobInterstitial alloc] initWithAppkey:APP_KEY placementId:PLACEMENTID];
    _interstitialObj.delegate = self; //设置委托
    _interstitialObj.isGpsOn = NO; //【可选】设置GPS开关
    
    [_interstitialObj loadAd];
}

/**
 *  在适当的时候，调用presentFromRootViewController来展现插屏广告
 */
- (void)showAd {
    NSLog(@"show ad  %@:",_interstitialObj.isReady?@"YES":@"NO");
    if (_interstitialObj.isReady) {
        UIViewController *vc = [[[UIApplication sharedApplication] keyWindow] rootViewController];
        [_interstitialObj presentFromRootViewController:vc];
        
    }else{
        //预加载广告
        if (_interstitialObj==nil) {
            [self loadAd];
        }else{
            [_interstitialObj loadAd];
        }
    }
}

/**
 *  广告预加载成功回调
 *  详解:当接收服务器返回的广告数据成功后调用该函数
 */
- (void)interstitialSuccessToLoadAd:(GDTMobInterstitial *)interstitial
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Success Loaded.");
}

/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)interstitialFailToLoadAd:(GDTMobInterstitial *)interstitial error:(NSError *)error
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Fail Loaded." );
}

/**
 *  插屏广告将要展示回调
 *  详解: 插屏广告即将展示回调该函数
 */
- (void)interstitialWillPresentScreen:(GDTMobInterstitial *)interstitial
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Going to present.");
}

/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)interstitialDidPresentScreen:(GDTMobInterstitial *)interstitial
{
//    [[GDTAdManager getInstance] callbackLua:@"success"];
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Success Presented." );
}

/**
 *  插屏广告展示结束回调
 *  详解: 插屏广告展示结束回调该函数
 */
- (void)interstitialDidDismissScreen:(GDTMobInterstitial *)interstitial
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Finish Presented.");
    
    //广告展示结束，重新加载下次广告
     [_interstitialObj loadAd];
}

/**
 *  应用进入后台时回调
 *  详解: 当点击下载应用时会调用系统程序打开，应用切换到后台
 */
- (void)interstitialApplicationWillEnterBackground:(GDTMobInterstitial *)interstitial
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Application enter background.");
}

/**
 *  插屏广告曝光时回调
 *  详解: 插屏广告曝光时回调
 */
-(void)interstitialWillExposure:(GDTMobInterstitial *)interstitial
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Exposured");
}
/**
 *  插屏广告点击时回调
 *  详解: 插屏广告点击时回调
 */
-(void)interstitialClicked:(GDTMobInterstitial *)interstitial
{
    NSLog(@"%@:%@",INTERSTITIAL_STATE_TEXT,@"Clicked");
}



@end
