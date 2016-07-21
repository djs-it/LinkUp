/*
 GameCenterHelper.mm
 
 Copyright 2014 Adrian Dawid
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 
 Created by Adrian Dawid on 17.08.14.
 
 */

#import "GameCenter.h"
#import "AppController.h"
#import <GameKit/GameKit.h>
#import "CCLuaBridge.h"

@implementation GameCenter



+(GameCenter *)getInstance
{
    static GameCenter *sharedInstance;
    if(sharedInstance == nil) sharedInstance = [GameCenter new];
    return sharedInstance;
}

- (id)init
{
    self = [super init];
    if (self) {
        return self;
    }
    return nil;
}


+(void) init:(NSDictionary *) dict
{
    NSString* leaderboardsStr = [dict valueForKey:@"leaderboards"];
    NSString* achievements = [dict valueForKey:@"achievements"];
    NSString* separateStr = [dict valueForKey:@"separate"];
    GameCenter* instance = [GameCenter getInstance];
    if (instance) {
        instance->iosLeaderboardIds = [[leaderboardsStr componentsSeparatedByString:separateStr ] retain];
        instance->iosAchievementIds = [[achievements componentsSeparatedByString:separateStr] retain];
        instance->numberOfAchievements = (int)[instance->iosAchievementIds count];
        instance->numberOfLeaderboards = (int)[instance->iosLeaderboardIds count];
        [GameCenter signInPlayer];
    } else {
        NSLog(@"GameCenter instance is NULL");
    }
    
}
+(void) openGameCenterLeaderboardsUI:(NSDictionary *) dict
{
    NSInteger lId = [[dict valueForKey:@"lId"] integerValue];
    NSLog(@"Open Leaderboard UI %ld ~~~~",(long)lId);
    if([[GameCenter getInstance]->iosLeaderboardIds count] >= lId){
            AppController* appController = (AppController*) [UIApplication sharedApplication].delegate;
            
            GKLeaderboardViewController* gkController = [[[GKLeaderboardViewController alloc] init] autorelease];
            //           gkController.leaderboardIdentifier = [NSString stringWithUTF8String:iosLeaderboardIds.at(lId).c_str()];
            gkController.leaderboardIdentifier = [[GameCenter getInstance]->iosLeaderboardIds objectAtIndex:lId];
            gkController.timeScope = GKLeaderboardTimeScopeAllTime;
            gkController.timeScope = GKLeaderboardTimeScopeToday;
            gkController.leaderboardDelegate = appController;

            [appController.viewController presentModalViewController:gkController animated:YES];
    }
}

+(void) openAchievementUI
{
    NSLog(@"Open Achievements UI");
    
        AppController* appController = (AppController*) [UIApplication sharedApplication].delegate;
        
        GKAchievementViewController* gkController = [[[GKAchievementViewController alloc] init] autorelease];
        gkController.achievementDelegate = appController;
        
        [appController.viewController presentModalViewController:gkController animated:YES];
}

+(void) submitScoreToLeaderboard:(NSDictionary*) dict
{
    NSInteger lId = [[dict valueForKey:@"lId"] integerValue];
    NSInteger score = [[dict valueForKey:@"score"] integerValue];
    
    [[GameCenter getInstance] setCallbackId:[dict valueForKey:@"callback"]];
    if([GameCenter getInstance]->numberOfLeaderboards >= lId){
        NSString* leaderboardId = [[GameCenter getInstance]->iosLeaderboardIds objectAtIndex:lId];
        GKScore *scoreReporter = [[GKScore alloc] initWithLeaderboardIdentifier:leaderboardId];
        scoreReporter.value = score;
        scoreReporter.context = 0;
        
        [GKScore reportScores:@[scoreReporter] withCompletionHandler:^(NSError *error) {
            if (error != nil) {
                NSLog(@"Error");
                [[GameCenter getInstance] callbackLua:@"fail"];
            } else {
                [[GameCenter getInstance] callbackLua:@"success"];
            }
        }];
    }
}

+(void) unlockAchievement:(NSDictionary*) dict
{
    NSInteger aId = [[dict valueForKey:@"aId"] integerValue];
    
    [[GameCenter getInstance] setCallbackId:[dict valueForKey:@"callback"]];
    
    if([GameCenter getInstance]->numberOfAchievements >= aId){
        GKAchievement *achievement = [[GKAchievement alloc] initWithIdentifier:
                                      [[GameCenter getInstance]->iosAchievementIds objectAtIndex:aId]];
        if (achievement){
            achievement.percentComplete = 100;
            achievement.showsCompletionBanner = true;
            [GKAchievement reportAchievements:@[achievement] withCompletionHandler:^(NSError *error) {
                if (error != nil) {
                    NSLog(@"Error");
                    [[GameCenter getInstance] callbackLua:@"fail"];
                } else {
                    [[GameCenter getInstance] callbackLua:@"success"];
                }
            }];
        }
    }
}

//+(void)unlockAchievementByName:(NSString*) identifier
//{
//    GKAchievement *achievement = [[GKAchievement alloc] initWithIdentifier: identifier];
//    if (achievement){
//        achievement.percentComplete = 100;
//        achievement.showsCompletionBanner = true;
//        [GKAchievement reportAchievements:@[achievement] withCompletionHandler:^(NSError *error) {
//            if (error != nil) {
//                NSLog(@"Error");
//                [[GameCenter getInstance] callbackLua:@"fail"];
//            } else {
//                [[GameCenter getInstance] callbackLua:@"success"];
//            }
//        }];
//    }
//
//}

+(bool) signInPlayer
{
    GKLocalPlayer *player = [GKLocalPlayer localPlayer];
    bool signedIn=false;
    [player authenticateWithCompletionHandler:^(NSError *error) {
        //Just relax and do nothing
    }];
    if (player.isAuthenticated) {
        signedIn = true;
    }
    return  signedIn;
}
NSString *notifyId = @"donopo001";
// 设置本地通知
+ (void)registerLocalNotification:(NSDictionary*) dict {
     NSInteger time = [[dict valueForKey:@"time"] integerValue];
    NSString *title = [dict valueForKey:@"title"] ;
    NSString *content = [dict valueForKey:@"content"] ;
    
    [[UIApplication sharedApplication] cancelAllLocalNotifications];
    
//    [[GameCenter getInstance] cancelLocalNotificationWithKey];
    
    UILocalNotification *notification = [[UILocalNotification alloc] init];
    // 设置触发通知的时间
    NSDate *fireDate = [NSDate dateWithTimeIntervalSinceNow:time];
    NSLog(@"fireDate=%@",fireDate);
    
    // 2.1.设置通知发出的时间
    notification.fireDate = fireDate;
    // 2.2.设置通知的内容
    notification.alertBody =  content;
    
    // 2.3.设置滑块的文字（锁屏状态下：滑动来“解锁”）
//    notification.alertAction = @"解锁";
    // 2.4.决定alertAction是否生效
//    notification.hasAction = NO;
    // 2.6.设置alertTitle
    notification.alertTitle = title;
    // 2.7.设置有通知时的音效
    notification.soundName = UILocalNotificationDefaultSoundName;  //默认声音
    //    notification.soundName = @"LocalNotificationMusic.m4r";//播放音乐
    // 2.8.设置应用程序图标右上角的数字
    notification.applicationIconBadgeNumber = 1;
    // 时区
//    notification.timeZone = [NSTimeZone defaultTimeZone];
    // 设置重复的间隔
    notification.repeatInterval = 0;
    


    // 通知参数
    NSDictionary *userDict = [NSDictionary dictionaryWithObject:content forKey:notifyId];
    notification.userInfo = userDict;
    
    // ios8后，需要添加这个注册，才能得到授权
    if ([[UIApplication sharedApplication] respondsToSelector:@selector(registerUserNotificationSettings:)]) {
        UIUserNotificationType type =  UIUserNotificationTypeAlert | UIUserNotificationTypeBadge | UIUserNotificationTypeSound;
        UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:type
                                                                                 categories:nil];
        [[UIApplication sharedApplication] registerUserNotificationSettings:settings];
        // 通知重复提示的单位，可以是天、周、月
        notification.repeatInterval = 0;
    } else {
        // 通知重复提示的单位，可以是天、周、月
        notification.repeatInterval = 0;
    }

    // 执行通知注册
    [[UIApplication sharedApplication] scheduleLocalNotification:notification];
    
}

// 取消某个本地推送通知
+ (void)cancelLocalNotificationWithKey {
    // 获取所有本地通知数组
    NSArray *localNotifications = [UIApplication sharedApplication].scheduledLocalNotifications;
    
    for (UILocalNotification *notification in localNotifications) {
        NSDictionary *userInfo = notification.userInfo;
        if (userInfo) {
            // 根据设置通知参数时指定的key来获取通知参数
            NSString *info = userInfo[notifyId];
            
            // 如果找到需要取消的通知，则取消
            if (info != nil) {
                [[UIApplication sharedApplication] cancelLocalNotification:notification];
                break;
            }
        }
    }
}

// 取消某个本地推送通知
+ (void) clearIconBadgeNumber {
    NSLog(@"clearIconBadgeNumber");
    [[UIApplication sharedApplication]setApplicationIconBadgeNumber:0];//进入前台取消应用消息图标

}
    
// 取消某个本地推送通知
+ (void)receiveLocalNotification:(UILocalNotification *)notification {
    NSLog(@"noti:%@",notification);
    
        // 这里真实需要处理交互的地方
        // 获取通知所带的数据
//        NSString *notMess = [notification.userInfo objectForKey:@"key"];
//        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"本地通知(前台)"
//                                                        message:notMess
//                                                       delegate:nil
//                                              cancelButtonTitle:@"OK"
//                                              otherButtonTitles:nil];
//        [alert show];
    
        // 更新显示的徽章个数
        NSInteger badge = [UIApplication sharedApplication].applicationIconBadgeNumber;
        badge--;
        badge = badge >= 0 ? badge : 0;
        [UIApplication sharedApplication].applicationIconBadgeNumber = badge;
    
        // 在不需要再推送时，可以取消推送
        [GameCenter cancelLocalNotificationWithKey];
}

- (void) setCallbackId:(NSNumber *) callbackid
{
    //    int callbackId = self -> callbackId;
    self -> callbackId = callbackid;
    
    cocos2d::LuaBridge::retainLuaFunctionById([callbackid intValue]);
    
}
- (void) callbackLua:(NSString*)status
{
    if(self->callbackId != nil) {
        
        
        int callbackid = [self -> callbackId intValue];
        // 1. 将引用 ID 对应的 Lua function 放入 Lua stack
        cocos2d::LuaBridge::pushLuaFunctionById(callbackid);
        // 2. 将需要传递给 Lua function 的参数放入 Lua stack
        cocos2d::LuaBridge::getStack()->pushString([status UTF8String]);
        // 3. 执行 Lua function
        cocos2d::LuaBridge::getStack()->executeFunction(1);
        // 4. 释放引用 ID
        cocos2d::LuaBridge::releaseLuaFunctionById(callbackid);
        
        self -> callbackId = Nil;
    }
}


+ (void)tapSaveImageToIphone:(NSDictionary*) dict
{
    
    /**
     *  将图片保存到iPhone本地相册
     *  UIImage *image            图片对象
     *  id completionTarget       响应方法对象
     *  SEL completionSelector    方法
     *  void *contextInfo
     */
    NSString *fileName = [dict valueForKey:@"filename"] ;
    UIImage *image = [UIImage imageNamed:fileName];
    UIImageWriteToSavedPhotosAlbum(image,self,@selector(image:didFinishSavingWithError:contextInfo:),
                                   nil);
    
}

+ (void)image:(UIImage *)image didFinishSavingWithError:(NSError *)error contextInfo: (void *)contextInfo
{
//    NSString *msg = nil ;
//    if(error != NULL){
//        msg = @"保存图片失败" ;
//    }else{
//        msg = @"保存图片成功" ;
//    }
//    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"保存图片结果提示"
//                                                    message:msg
//                                                   delegate:self
//                                          cancelButtonTitle:@"确定"
//                                          otherButtonTitles:nil];
//    [alert show];
}



@end
