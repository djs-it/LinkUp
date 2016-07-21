//
//  UnityAdsViewController.m
//  UnityAdsExample
//
//  Created by bluesun on 7/30/12.
//  Copyright (c) 2012 Unity Technologies. All rights reserved.
//

#import "UnityAdsViewController.h"
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <UnityAds/UnityAds.h>
#import <UnityAdManager.h>

@interface UnityAdsViewController () <UnityAdsDelegate, UITextFieldDelegate>
@end

@implementation UnityAdsViewController

@synthesize startButton;
@synthesize openButton;
@synthesize optionsButton;
@synthesize optionsView;
@synthesize developerId;
@synthesize optionsId;
@synthesize loadingImage;
@synthesize contentView;

- (void)viewDidLoad {
  [super viewDidLoad];

  [[UnityAds sharedInstance] setDelegate:self];
  [self.optionsId setDelegate:self];
}

- (void)viewDidAppear:(BOOL)animated {
  [super viewDidAppear:animated];
}

- (void)startAds:(NSString *) appid {

//  [[UnityAds sharedInstance] setDebugMode:YES];
//  [[UnityAds sharedInstance] setTestMode:NO];
//
//  if (self.developerId.text != nil) {
//    NSLog(@"Setting developerId");
//    // TEST STUFF, DO NOT USE IN PRODUCTION APPS
//    if( [self.developerId.text length] > 0){
//        [[UnityAds sharedInstance] setTestMode:YES];
//    }
//    [[UnityAds sharedInstance] setTestDeveloperId:self.developerId.text];
//  }
//
//  if (self.optionsId.text != nil) {
//    NSLog(@"Setting optionsId");
//    // TEST STUFF, DO NOT USE IN PRODUCTION APPS
//    [[UnityAds sharedInstance] setTestOptionsId:self.optionsId.text];
//  }

  // Initialize Unity Ads
	[[UnityAds sharedInstance] startWithGameId:appid andViewController:[UnityAdManager getInstance].viewController];
    
    [[UnityAds sharedInstance] setDelegate:self];
    NSLog(@"unity init canShow: %i",[[UnityAds sharedInstance] canShow]);
}


- (void)openAds {
	NSLog(@"canShow: %i",[[UnityAds sharedInstance] canShow]);
    
    if ([[UnityAds sharedInstance] setZone:@"video"] && [[UnityAds sharedInstance]canShow]) {
        //placement is valid, and ads are available!
        [[UnityAds sharedInstance] show]; //Show an ad
    }else{
         [[UnityAdManager getInstance] showCallLua:@"none"];
    }
}



- (void)hasAds {
    
    if ([[UnityAds sharedInstance] setZone:@"video"] && [[UnityAds sharedInstance]canShow]) {
        [[UnityAdManager getInstance] readyCallLua:@"ready"];
    }else{
         [[UnityAdManager getInstance] readyCallLua:@"none"];
    }
    NSLog(@"canShow: %i",[[UnityAds sharedInstance] canShow]);
}


- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
  return YES;
}

- (NSUInteger) supportedInterfaceOrientations {
  return UIInterfaceOrientationMaskAll;
}

- (BOOL)shouldAutorotate {
  return YES;
}


#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
  NSLog(@"textFieldShouldReturn");
  [textField resignFirstResponder];
  return YES;
}

#pragma mark - UnityAdsDelegate

- (void)unityAdsFetchCompleted {
	NSLog(@"unityAdsFetchCompleted");
    NSLog(@"canShow: %i",[[UnityAds sharedInstance] canShow]);
}

- (void)unityAdsWillShow {
	NSLog(@"unityAdsWillShow");
     [[UnityAdManager getInstance] unityAdsWillShow];
}

- (void)unityAdsDidShow {
	NSLog(@"unityAdsDidShow");
}

- (void)unityAdsWillHide {
	NSLog(@"unityAdsWillHide");
}

- (void)unityAdsDidHide {
	NSLog(@"unityAdsDidHide");
}

- (void)unityAdsVideoStarted {
	NSLog(@"unityAdsVideoStarted");
}

- (void)unityAdsVideoCompleted:(NSString *)rewardItemKey skipped:(BOOL)skipped {
	NSLog(@"unityAdsVideoCompleted:rewardItemKey:skipped -- key: %@ -- skipped: %@", rewardItemKey, skipped ? @"true" : @"false");
    
    [[UnityAdManager getInstance] showCallLua:@"complete"];
    [[UnityAdManager getInstance] unityAdsVideoCompleted];
}

@end
