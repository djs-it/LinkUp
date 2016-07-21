//
//  WXShare.m
//  DnpRun
//
//  Created by seveniu on 3/16/16.
//
//

#import <Foundation/Foundation.h>
#import <WXShare.h>

@implementation WXShare : NSObject
enum MessageType {
    text  = 0,        /**< 纯文本    */
    image = 1,        /**< 图片      */
    url = 2,        /**< 网页       */
};
+ (void)regist:(NSDictionary*) dict
{
    NSString *appID = [dict objectForKey:@"id"];
    [WXApi registerApp:appID withDescription:@"donopo"];
    
    
    NSLog(@"init wx");
}

+ (BOOL) share: (NSDictionary*) dict
{
    int type = [[dict valueForKey:@"type" ] intValue];
    int scene = [[dict valueForKey:@"scene" ] intValue];
    WXScene wxScene = [WXShare getScene:scene];
    if(type == text) {
        NSString *text = [dict objectForKey:@"text"];
        
        return [WXShare sendText:text InScene:wxScene];
    } else if (type == image) {
        NSString *imagePath = [dict objectForKey:@"imagePath"];
        NSString *tagName = [dict objectForKey:@"tagName"];
        NSString *messageExt = [dict objectForKey:@"messageExt"];
        NSString *action = [dict objectForKey:@"action"];
        //        NSString *thumbImagePath = [dict objectForKey:@"thumbImagePath"];
             NSLog(@"share wx%@",imagePath);
          NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        // 根目录
        NSString *documentsDirectory = [[NSString alloc] initWithFormat:@"%@/%@", [paths objectAtIndex:0], imagePath ];
         UIImage *image = [UIImage imageWithContentsOfFile:documentsDirectory];
         NSData *imageData =  UIImagePNGRepresentation(image);

          UIImage *thumbImage = [UIImage imageNamed:@"Icon.png"];
        return [WXShare sendImageData:imageData TagName:tagName MessageExt:messageExt Action:action ThumbImage:thumbImage InScene:wxScene];
        
    } else if (type == url) {
        NSString *urlString = [dict objectForKey:@"url"];
        NSString *tagName = [dict objectForKey:@"tagName"];
        NSString *title = [dict objectForKey:@"title"];
        NSString *description = [dict objectForKey:@"description"];
//        NSString *thumbImagePath = [dict objectForKey:@"thumbImagePath"];
        
        
        UIImage *thumbImage = [UIImage imageNamed:@"Icon.png"];
        return [WXShare sendLinkURL:urlString TagName:tagName Title:title Description:description ThumbImage:thumbImage InScene:wxScene];
        
        
    }    else {
        return false;
    }
}
+ (WXScene) getScene: (int) scene
{
    if (scene == WXSceneSession) {
        return WXSceneSession;
    } else if (scene == WXSceneTimeline) {
        return WXSceneTimeline;
    } else if (scene == WXSceneFavorite) {
        return WXSceneFavorite;
    } else {
        return WXSceneTimeline;
    }
}


#pragma mark - Public Methods
+ (BOOL)sendText:(NSString *)text
         InScene:(enum WXScene)scene {
    SendMessageToWXReq *req = [WXShare requestWithText:text
                                        OrMediaMessage:nil
                                                 bText:YES
                                               InScene:scene];
    return [WXApi sendReq:req];
}

+ (BOOL)sendImageData:(NSData *)imageData
              TagName:(NSString *)tagName
           MessageExt:(NSString *)messageExt
               Action:(NSString *)action
           ThumbImage:(UIImage *)thumbImage
              InScene:(enum WXScene)scene {
    
    WXImageObject *ext = [WXImageObject object];
    ext.imageData = imageData;
    
    
    
    //// 缩略图
    //     NSString *kImageTagName = @"WECHAT_TAG_JUMP_APP";
    //     NSString *kMessageExt = @"这是第三方带的测试字段";
    //     NSString *kMessageAction = @"<action>dotalist</action>";
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = nil;
    message.description = nil;
    message.mediaObject = ext;
    message.messageExt = messageExt;
    message.messageAction = action;
    message.mediaTagName = tagName;
    [message setThumbImage:thumbImage];
    
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    
    return [WXApi sendReq:req];
}

+ (BOOL)sendLinkURL:(NSString *)urlString
            TagName:(NSString *)tagName
              Title:(NSString *)title
        Description:(NSString *)description
         ThumbImage:(UIImage *)thumbImage
            InScene:(enum WXScene)scene {
    WXWebpageObject *ext = [WXWebpageObject object];
    ext.webpageUrl = urlString;
    
    
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = title;
    message.description = description;
    message.mediaObject = ext;
    message.messageExt = nil;
    message.messageAction = nil;
    message.mediaTagName = tagName;
    [message setThumbImage:thumbImage];
    
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    return [WXApi sendReq:req];
}

+ (BOOL)sendMusicURL:(NSString *)musicURL
             dataURL:(NSString *)dataURL
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage
             InScene:(enum WXScene)scene {
    WXMusicObject *ext = [WXMusicObject object];
    ext.musicUrl = musicURL;
    ext.musicDataUrl = dataURL;
    
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = title;
    message.description = description;
    message.mediaObject = ext;
    message.messageExt = nil;
    message.messageAction = nil;
    message.mediaTagName = nil;
    [message setThumbImage:thumbImage];
    
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    
    return [WXApi sendReq:req];
}

+ (BOOL)sendVideoURL:(NSString *)videoURL
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage
             InScene:(enum WXScene)scene {
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = title;
    message.description = description;
    [message setThumbImage:thumbImage];
    
    WXVideoObject *ext = [WXVideoObject object];
    ext.videoUrl = videoURL;
    
    message.mediaObject = ext;
    
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    return [WXApi sendReq:req];
}

+ (BOOL)sendEmotionData:(NSData *)emotionData
             ThumbImage:(UIImage *)thumbImage
                InScene:(enum WXScene)scene {
    WXMediaMessage *message = [WXMediaMessage message];
    [message setThumbImage:thumbImage];
    
    WXEmoticonObject *ext = [WXEmoticonObject object];
    ext.emoticonData = emotionData;
    
    message.mediaObject = ext;
    
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    return [WXApi sendReq:req];
}

+ (BOOL)sendFileData:(NSData *)fileData
       fileExtension:(NSString *)extension
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage
             InScene:(enum WXScene)scene {
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = title;
    message.description = description;
    [message setThumbImage:thumbImage];
    
    WXFileObject *ext = [WXFileObject object];
    ext.fileExtension = @"pdf";
    ext.fileData = fileData;
    
    message.mediaObject = ext;
    
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    return [WXApi sendReq:req];
}

+ (BOOL)sendAppContentData:(NSData *)data
                   ExtInfo:(NSString *)info
                    ExtURL:(NSString *)url
                     Title:(NSString *)title
               Description:(NSString *)description
                MessageExt:(NSString *)messageExt
             MessageAction:(NSString *)action
                ThumbImage:(UIImage *)thumbImage
                   InScene:(enum WXScene)scene {
    WXAppExtendObject *ext = [WXAppExtendObject object];
    ext.extInfo = info;
    ext.url = url;
    ext.fileData = data;

    
    
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = title;
    message.description = description;
    message.mediaObject = ext;
    message.messageExt = messageExt;
    message.messageAction = action;
    message.mediaTagName = nil;
    [message setThumbImage:thumbImage];
    SendMessageToWXReq* req = [WXShare requestWithText:nil
                                        OrMediaMessage:message
                                                 bText:NO
                                               InScene:scene];
    return [WXApi sendReq:req];
    
}

+ (BOOL)addCardsToCardPackage:(NSArray *)cardItems {
    AddCardToWXCardPackageReq *req = [[[AddCardToWXCardPackageReq alloc] init] autorelease];
    req.cardAry = cardItems;
    return [WXApi sendReq:req];
}

+ (BOOL)sendAuthRequestScope:(NSString *)scope
                       State:(NSString *)state
                      OpenID:(NSString *)openID
            InViewController:(UIViewController *)viewController {
    SendAuthReq* req = [[[SendAuthReq alloc] init] autorelease];
    req.scope = scope; // @"post_timeline,sns"
    req.state = state;
    req.openID = openID;
    
    return [WXApi sendAuthReq:req
               viewController:viewController
                     delegate:[WXManager getInstence]];
}

+ (BOOL)jumpToBizWebviewWithAppID:(NSString *)appID
                      Description:(NSString *)description
                        tousrname:(NSString *)tousrname
                           ExtMsg:(NSString *)extMsg {
    [WXApi registerApp:appID withDescription:description];
    JumpToBizWebviewReq *req = [[[JumpToBizWebviewReq alloc]init]autorelease];
    req.tousrname = tousrname;
    req.extMsg = extMsg;
    req.webType = WXMPWebviewType_Ad;
    return [WXApi sendReq:req];
}




+ (SendMessageToWXReq *)requestWithText:(NSString *)text
                         OrMediaMessage:(WXMediaMessage *)message
                                  bText:(BOOL)bText
                                InScene:(enum WXScene)scene {
    SendMessageToWXReq *req = [[[SendMessageToWXReq alloc] init] autorelease];
    req.bText = bText;
    req.scene = scene;
    if (bText)
        req.text = text;
    else
        req.message = message;
    return req;
}
@end