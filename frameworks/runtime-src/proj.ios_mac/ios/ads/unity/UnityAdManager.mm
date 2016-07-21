    //
//  DNPParticleSystemFrameQuad.cpp
//  cocos2d_tests
//
//  Created by lovejia on 14-8-29.
//
//

#import "UnityAdManager.h"
#import "CCLuaBridge.h"
#include "SimpleAudioEngine.h"

#import <VungleSDK/VungleSDK.h>

@implementation UnityAdManager



+ (UnityAdManager *) getInstance
{
    static UnityAdManager *sharedInstance;
    if(sharedInstance == nil) sharedInstance = [UnityAdManager new];
    return sharedInstance;
}

+ (void)init:(NSDictionary*) dict
{
     CCLOG("unity ad init");
    NSString *appID = [dict objectForKey:@"id"];
    [UnityAdManager getInstance]._adsView = [[UnityAdsViewController alloc] init];
    [[UnityAdManager getInstance]._adsView startAds:appID];
    
}


+ (void)playAd:(NSDictionary*) dict
{
    CCLOG("unity ad show");
    NSNumber *callbackId = [dict valueForKey:@"callback"];
    [UnityAdManager getInstance].showCall = callbackId;
    cocos2d::LuaBridge::retainLuaFunctionById([callbackId intValue]);
    
    [[UnityAdManager getInstance]._adsView openAds];

}


+ (void)isReady:(NSDictionary*) dict
{
    NSNumber *callbackId = [dict valueForKey:@"callback"];
    [UnityAdManager getInstance].readyCall = callbackId;
    cocos2d::LuaBridge::retainLuaFunctionById([callbackId intValue]);

    [[UnityAdManager getInstance]._adsView hasAds];
}


-(void)unityAdsWillShow
{
    CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

-(void)unityAdsVideoCompleted
{
    CocosDenshion::SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}



- (void) readyCallLua:(NSString*)status
{
    if(self.readyCall != nil) {
        
        int callbackid = [self.readyCall intValue];
        // 1. 将引用 ID 对应的 Lua function 放入 Lua stack
        cocos2d::LuaBridge::pushLuaFunctionById(callbackid);
        // 2. 将需要传递给 Lua function 的参数放入 Lua stack
        cocos2d::LuaBridge::getStack()->pushString([status UTF8String]);
        // 3. 执行 Lua function
        cocos2d::LuaBridge::getStack()->executeFunction(1);
        // 4. 释放引用 ID
        cocos2d::LuaBridge::releaseLuaFunctionById(callbackid);
        
        self.readyCall = Nil;
    }
}

- (void) showCallLua:(NSString*)status
{
    if(self.showCall != nil) {
        
        int callbackid = [self.readyCall intValue];
        // 1. 将引用 ID 对应的 Lua function 放入 Lua stack
        cocos2d::LuaBridge::pushLuaFunctionById(callbackid);
        // 2. 将需要传递给 Lua function 的参数放入 Lua stack
        cocos2d::LuaBridge::getStack()->pushString([status UTF8String]);
        // 3. 执行 Lua function
        cocos2d::LuaBridge::getStack()->executeFunction(1);
        // 4. 释放引用 ID
        cocos2d::LuaBridge::releaseLuaFunctionById(callbackid);
        
        self.showCall = Nil;
    }
}


@end
