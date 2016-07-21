//
//  ViewController.h
//  SocialFrameworkExample
//
//  Created by Lei Jing on 9/10/12.
//  Copyright (c) 2012 com.leijing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <VungleSDK/VungleSDK.h>
#import "VungleViewController.h"

@interface VungleAdManager : NSObject

+ (VungleAdManager *) getInstance;
+ (void)init:(NSDictionary*) dict;
+ (void)play:(NSDictionary*) dict;
+ (void)isReady:(NSDictionary*) dict;


- (void) adsWillShow;
- (void) adsVideoCompleted;
- (void) readyCallLua:(NSString*)status;
- (void) showCallLua:(NSString*)status;

@property (nonatomic, readwrite, retain) UIViewController* viewController;
@property (nonatomic, readwrite, retain) VungleViewController* _adsView;
@property (nonatomic, readwrite, retain)  NSNumber *showCall;
@property (nonatomic, readwrite, retain)  NSNumber *readyCall;
@end