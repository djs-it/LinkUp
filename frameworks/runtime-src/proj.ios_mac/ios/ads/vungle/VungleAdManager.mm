//
//  DNPParticleSystemFrameQuad.cpp
//  cocos2d_tests
//
//  Created by lovejia on 14-8-29.
//
//

#import "VungleAdManager.h"
#import "CCLuaBridge.h"
#include "SimpleAudioEngine.h"

@implementation VungleAdManager


+ (VungleAdManager *) getInstance
{
    static VungleAdManager *sharedInstance;
    if(sharedInstance == nil) sharedInstance = [VungleAdManager new];
    return sharedInstance;
}


+ (void)init:(NSDictionary*) dict
{
    NSString *appID = [dict objectForKey:@"id"];
    [VungleAdManager getInstance]._adsView = [[VungleViewController alloc] init];
    [[VungleAdManager getInstance]._adsView startWithAppId:appID];
    [[VungleAdManager getInstance]._adsView viewDidLoad];
}

+ (void)play:(NSDictionary*) dict
{
    [[VungleAdManager getInstance]._adsView showAd];
}

+ (void)isReady:(NSDictionary*) dict
{
    
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
