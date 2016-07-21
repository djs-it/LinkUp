    //
//  DNPParticleSystemFrameQuad.cpp
//  cocos2d_tests
//
//  Created by lovejia on 14-8-29.
//
//

#import "GdtAdManager.h"
#import "InterstitialViewController.h"
#import "SplashViewController.h"
#import "CCLuaBridge.h"


@implementation GdtAdManager


+ (GdtAdManager *) getInstance
{
    static GdtAdManager *sharedInstance;
    if(sharedInstance == nil) sharedInstance = [GdtAdManager new];
    return sharedInstance;
}

+ (void)init
{
    [GdtAdManager getInstance]._interstitial = [[InterstitialViewController alloc] init];
    [[GdtAdManager getInstance]._interstitial initWithAppAndPlacement];
    
//    [GdtAdManager getInstance]._splash = [[SplashViewController alloc] init];
}

+ (void)loadInterAd{
    [[GdtAdManager getInstance]._interstitial loadAd];
}

+ (void)playInterAd
{
    CCLOG("call gdt interstitialAd to show!");
    [[GdtAdManager getInstance]._interstitial showAd];
}


+ (void)playSplashAd{
      [[GdtAdManager getInstance]._splash showSplashAd];
}



@end
