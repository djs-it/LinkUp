//
//  WXManager.h
//  DnpRun
//
//  Created by seveniu on 3/16/16.
//
//

#ifndef WXManager_h
#define WXManager_h
#include <WXApi.h>

@protocol WXApiManagerDelegate <NSObject>

@optional

- (void)managerDidRecvGetMessageReq:(GetMessageFromWXReq *)request;

- (void)managerDidRecvShowMessageReq:(ShowMessageFromWXReq *)request;

- (void)managerDidRecvLaunchFromWXReq:(LaunchFromWXReq *)request;

- (void)managerDidRecvMessageResponse:(SendMessageToWXResp *)response;

- (void)managerDidRecvAuthResponse:(SendAuthResp *)response;

- (void)managerDidRecvAddCardResponse:(AddCardToWXCardPackageResp *)response;

@end
@interface WXManager : NSObject<WXApiDelegate>

+ (void)regiest:(NSDictionary*) dict;

+(instancetype)getInstence;


@property (nonatomic, assign) id<WXApiManagerDelegate> delegate;

@end

#endif /* WXManager_h */
