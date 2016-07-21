//
//  PGStoreKitManager.h
//  OCPhysicGame
//
//  Created by LiuYanghui on 14-1-26.
//  Copyright (c) 2014年 LiuYanghui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>
#import <StoreKit/StoreKit.h>

@class ViewController;
@interface PGStoreKitManager : NSObject<GKGameCenterControllerDelegate, SKPaymentTransactionObserver, SKProductsRequestDelegate>
{
    UIAlertView *_loadingAlert;
    int callbackId;
//    BOOL _enableGameCenter;
}

@property (nonatomic, readwrite, strong) ViewController* viewController;
+ (PGStoreKitManager *)getInstance;

- (void)addTransactionObserver;
- (void)applicationWillTerminate;
/**
 购买产品
 */
+ (void)purchaseItem: (NSDictionary *) dict;



@end
