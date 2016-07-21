//
//  WXShare.h
//  DnpRun
//
//  Created by seveniu on 3/16/16.
//
//

#ifndef WXShare_h
#define WXShare_h
#import "WXApi.h"
#import "WXManager.h"
@interface WXShare : NSObject <WXApiManagerDelegate>



+ (void) regist:(NSDictionary*) dict;
+ (BOOL) share: (NSDictionary*) dict;

@end

#endif /* WXShare_h */
