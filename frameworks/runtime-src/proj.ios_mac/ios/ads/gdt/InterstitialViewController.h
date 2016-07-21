//
//  InterstitialViewController.h
//
//  Created by 高超 on 13-11-1.
//  Copyright (c) 2013年 高超. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GDTMobInterstitial.h"

@interface InterstitialViewController : UIViewController<GDTMobInterstitialDelegate>
{
    GDTMobInterstitial *_interstitialObj;
}

- (void)showAd;
- (void)loadAd;

-(void) initWithAppAndPlacement;
@end
