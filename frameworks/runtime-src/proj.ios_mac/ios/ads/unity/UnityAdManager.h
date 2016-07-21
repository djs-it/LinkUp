//
//  ViewController.h
//  SocialFrameworkExample
//
//  Created by Lei Jing on 9/10/12.
//  Copyright (c) 2012 com.leijing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UnityAdsViewController.h"
@interface UnityAdManager : NSObject


+ (UnityAdManager *) getInstance;
+ (void)init:(NSDictionary*) dict;
+ (void)playAd:(NSDictionary*) dict;
+ (void)isReady:(NSDictionary*) dict;

- (void)unityAdsWillShow;
- (void)unityAdsVideoCompleted;
- (void) readyCallLua:(NSString*)status;
- (void) showCallLua:(NSString*)status;

@property (nonatomic, readwrite, retain) UIViewController* viewController;
@property (nonatomic, readwrite, retain) UnityAdsViewController* _adsView;
@property (nonatomic, readwrite, retain)  NSNumber *showCall;
@property (nonatomic, readwrite, retain)  NSNumber *readyCall;
@end