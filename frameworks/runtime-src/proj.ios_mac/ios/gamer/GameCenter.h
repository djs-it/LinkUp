//
//  GameCenter.h
//  Template
//
//  Created by sniu on 4/20/15.
//
//

#ifndef Template_GameCenter_h
#define Template_GameCenter_h

#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>


@interface GameCenter : NSObject
{
    NSArray* iosLeaderboardIds;
    NSArray* iosAchievementIds;
    int numberOfAchievements;
    int numberOfLeaderboards;
    NSNumber *callbackId;
}

+ (GameCenter*) getInstance;


+ (void) init:(NSDictionary*) dict;
//*@brief This function opens the sign in ui, if needed or shows the "Welcome back:..." banner
+ (bool) signInPlayer;
+ (void) openGameCenterLeaderboardsUI:(NSDictionary*) dict;
+ (void) submitScoreToLeaderboard:(NSDictionary*) dict;
//+ (void) unlockAchievementByName:(NSDictionary *) dict;
+ (void) unlockAchievement:(NSDictionary*) dict;
+ (void) openAchievementUI;
//- (void) setCallbackId:(NSNumber *) callbackid;
//- (void) callbackLua:(NSString*)status;

+ (void)registerLocalNotification:(NSDictionary*) dict;

+ (void)cancelLocalNotificationWithKey;

+ (void)receiveLocalNotification:(UILocalNotification *)notification;

+ (void)tapSaveImageToIphone:(NSString*)fileName;


@end

#endif
