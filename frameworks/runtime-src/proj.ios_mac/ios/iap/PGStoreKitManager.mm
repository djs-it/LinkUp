//
//  PGStoreKitManager.m
//  OCPhysicGame
//
//  Created by LiuYanghui on 14-1-26.
//  Copyright (c) 2014年 LiuYanghui. All rights reserved.
//

#import "PGStoreKitManager.h"
#import "CCLuaBridge.h"
//#import "NSData+Base64.h"
//#import "ViewController.h"

@implementation PGStoreKitManager

+ (PGStoreKitManager *)getInstance
{
    static PGStoreKitManager *mgr = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        mgr = [[self alloc] init];
    });
    return mgr;
}

- (id)init
{
    self = [super init];
    if (self) {
        [self initData];
        return self;
    }
    return nil;
}

- (void)initData
{
    _viewController = nil;
}

//---------------------------------------------------------
#pragma mark - IAP
- (BOOL)canProcessPayments
{
    if ([SKPaymentQueue canMakePayments]) {
        return YES;
    } else {
        return NO;
    }
}


- (void)addTransactionObserver
{
    // Attach an observer to the payment queue
    [[SKPaymentQueue defaultQueue] addTransactionObserver:self];
}

// Called when the application is about to terminate
- (void)applicationWillTerminate
{
    // Remove the observer
    [[SKPaymentQueue defaultQueue] removeTransactionObserver:self];
}

/**
 购买产品
 */
+ (void)purchaseItem: (NSDictionary *) dict
{
    NSString* identifier = [dict objectForKey:@"id"];
    int callbackId = [[dict objectForKey:@"callback"] intValue];
    
    NSLog(@"id:%@  callback:%d",identifier,callbackId);
    // 设置回调id
    [[PGStoreKitManager getInstance] setCallbackId:callbackId];
    
    if (![[PGStoreKitManager getInstance] canProcessPayments]) {
        NSLog(@"1.失败-->SKPaymentQueue canMakePayments NO");
        return;
    }
    NSLog(@"1.成功-->请求产品信息...%@", identifier);
    
    // 使用请求商品信息式购买
    SKProductsRequest *request= [[SKProductsRequest alloc]
                                 initWithProductIdentifiers: [NSSet setWithObject: identifier]];
    request.delegate = [PGStoreKitManager getInstance];
    [request start];
}

// SKProductsRequest 的回调
- (void)productsRequest:(SKProductsRequest *)request didReceiveResponse:(SKProductsResponse *)response
{

    NSArray *myProduct = response.products;
    
    if (myProduct.count == 0) {
        NSLog(@"2.失败-->无法获取产品信息，购买失败。invalidProductIdentifiers = %@",response.invalidProductIdentifiers);
        return;
    }
    NSLog(@"2.成功-->获取产品信息成功，正在购买...");
    SKPayment * payment = [SKPayment paymentWithProduct:myProduct[0]];
    [[SKPaymentQueue defaultQueue] addPayment:payment];
}



- (NSString*)base64forData:(NSData*)theData {
    const uint8_t* input = (const uint8_t*)[theData bytes];
    NSInteger length = [theData length];
    static char table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
    NSMutableData* data = [NSMutableData dataWithLength:((length + 2) / 3) * 4];
    uint8_t* output = (uint8_t*)data.mutableBytes;
    NSInteger i;
    for (i=0; i < length; i += 3) {
        NSInteger value = 0;
        NSInteger j;
        for (j = i; j < (i + 3); j++) {
            value <<= 8;
            
            if (j < length) {
                value |= (0xFF & input[j]);
            }
        }
        NSInteger theIndex = (i / 3) * 4;
        output[theIndex + 0] =                    table[(value >> 18) & 0x3F];
        output[theIndex + 1] =                    table[(value >> 12) & 0x3F];
        output[theIndex + 2] = (i + 1) < length ? table[(value >> 6)  & 0x3F] : '=';
        output[theIndex + 3] = (i + 2) < length ? table[(value >> 0)  & 0x3F] : '=';
    }
    return [[NSString alloc] initWithData:data encoding:NSASCIIStringEncoding];
}

- (NSDictionary *) getJsonDictionaryWithPostFromUrlString:(NSString *)urlString andDataString:(NSString *)dataString {
    NSString *jsonString = [self getStringWithPostFromUrlString:urlString andDataString:dataString];
    NSLog(@"%@", jsonString); // see what the response looks like
    return [self getDictionaryFromJsonString:jsonString];
}


- (NSDictionary *) getDictionaryFromJsonString:(NSString *)jsonstring {
    NSError *jsonError;
    NSDictionary *dictionary = (NSDictionary *) [NSJSONSerialization JSONObjectWithData:[jsonstring dataUsingEncoding:NSUTF8StringEncoding] options:0 error:&jsonError];
    if (jsonError) {
        dictionary = [[NSDictionary alloc] init];
    }
    return dictionary;
}


- (NSString *) getStringWithPostFromUrlString:(NSString *)urlString andDataString:(NSString *)dataString {
    NSString *s = @"";
    @try {
        NSData *postdata = [dataString dataUsingEncoding:NSASCIIStringEncoding allowLossyConversion:YES];
        NSString *postlength = [NSString stringWithFormat:@"%lu", (unsigned long)[postdata length]];
        NSMutableURLRequest *request = [[NSMutableURLRequest alloc] init];
        [request setURL:[NSURL URLWithString:urlString]];
        [request setTimeoutInterval:60];
        [request setHTTPMethod:@"POST"];
        [request setValue:postlength forHTTPHeaderField:@"Content-Length"];
        [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
        [request setHTTPBody:postdata];
        NSData *data = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
        if (data != nil) {
            s = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
        }
    }
    @catch (NSException *exception) {
        s = @"";
    }
    return s;
}

- (void)verifyPruchase
{
    
    NSURL *receiptURL = [[NSBundle mainBundle] appStoreReceiptURL];
    // 从沙盒中获取到购买凭据
    NSData *receiptData = [NSData dataWithContentsOfURL:receiptURL];
    NSString *encodeStr = [receiptData base64EncodedStringWithOptions:NSDataBase64EncodingEndLineWithLineFeed];
    
//                NSString *body = [NSString stringWithFormat:@"token=%d&receipt=%@&uuid=%@&product=%@", token, [transaction.transactionReceipt base64EncodedString],[SvUDIDTools UDID],transaction.payment.productIdentifier];
    
     NSString *result = [NSString stringWithFormat:@"complete:%@",encodeStr];
    
    [self callbackLua:result];
    
//    // 验证凭据，获取到苹果返回的交易凭据
//        // appStoreReceiptURL iOS7.0增加的，购买交易完成后，会将凭据存放在该地址
//         NSURL *receiptURL = [[NSBundle mainBundle] appStoreReceiptURL];
//       // 从沙盒中获取到购买凭据
//        NSData *receiptData = [NSData dataWithContentsOfURL:receiptURL];
    
//         // 发送网络POST请求，对购买凭据进行验证
//        NSURL *url = [NSURL URLWithString:@"https://sandbox.itunes.apple.com/verifyReceipt"];
//        // 国内访问苹果服务器比较慢，timeoutInterval需要长一点
//        NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:10.0f];
//    
//       request.HTTPMethod = @"POST";
    
         // 在网络中传输数据，大多情况下是传输的字符串而不是二进制数据_reserved	void *	NULL	0x0000000000000000
        // 传输的是BASE64编码的字符串
         /**
            20      BASE64 常用的编码方案，通常用于数据传输，以及加密算法的基础算法，传输过程中能够保证数据传输的稳定性
            21      BASE64是可以编码和解码的
            22      */
    
//       NSString *encodeStr = [receiptData base64EncodedStringWithOptions:NSDataBase64EncodingEndLineWithLineFeed];
    
    
    
//         NSString *payload = [NSString stringWithFormat:@"{\"receipt-data\" : \"%@\"}", encodeStr];
//         NSData *payloadData = [payload dataUsingEncoding:NSUTF8StringEncoding];
//    
//        request.HTTPBody = payloadData;
//    
//         // 提交验证请求，并获得官方的验证JSON结果
//        NSData *result = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
//    
//         // 官方验证结果为空
//         if (result == nil) {
//                 NSLog(@"验证失败");
//            }
//    
//        NSDictionary *dict = [NSJSONSerialization JSONObjectWithData:result options:NSJSONReadingAllowFragments error:nil];
//    
//         NSLog(@"%@", dict);
//   
//         if (dict != nil) {
//                 // 比对字典中以下信息基本上可以保证数据安全
//                // bundle_id&application_version&product_id&transaction_id
//                NSLog(@"验证成功");
//            }
}

// SKPayment 的回调
- (void)paymentQueue:(SKPaymentQueue *)queue updatedTransactions:(NSArray *)transactions
{
    
    for (SKPaymentTransaction *transaction in transactions){
        switch (transaction.transactionState){
            case SKPaymentTransactionStatePurchased:
                NSLog(@"3.成功-->接收苹果购买数据SKPaymentTransactionStatePurchased，正在处理...");
                [self verifyPruchase];
                
                [self completeTransaction:transaction];
                break;
                
            case SKPaymentTransactionStateFailed:
                NSLog(@"3.成功-->接收苹果购买数据SKPaymentTransactionStateFailed，正在处理...");
                [self failedTransaction:transaction];
                [self callbackLua:@"fail"];

                break;
                
            case SKPaymentTransactionStateRestored:
                NSLog(@"3.成功-->接收苹果购买数据SKPaymentTransactionStateRestored，正在处理...");
                [self restoreTransaction:transaction];
                
                [self callbackLua:@"restore"];

                break;
                
            default:
                break;
        }
    }
}

// 结束交易
- (void) completeTransaction: (SKPaymentTransaction*)transaction
{
    NSLog(@"4.成功-->结束交易 SKPaymentTransactionStatePurchased");
    // 记录交易和提供产品 这两方法必须处理
    [self recordTransaction: transaction];
    [self provideContent: transaction.payment.productIdentifier];
    
    // 移除 transaction from the payment queue.
    [[SKPaymentQueue defaultQueue] finishTransaction: transaction];
}

// 重置交易
- (void) restoreTransaction: (SKPaymentTransaction*)transaction
{
    NSLog(@"4.成功-->重置交易 SKPaymentTransactionStateRestored");
    [self recordTransaction: transaction];
    [self provideContent: transaction.originalTransaction.payment.productIdentifier];
    [[SKPaymentQueue defaultQueue] finishTransaction: transaction];
}

// 交易失败
- (void) failedTransaction: (SKPaymentTransaction*)transaction
{
    NSLog(@"4.成功-->交易失败 failedTransaction error.code:%d",(int)transaction.error.code);
    [[SKPaymentQueue defaultQueue] finishTransaction: transaction];
}

// 交易记录
- (void) recordTransaction: (SKPaymentTransaction*)transacation
{
    NSLog(@"4.成功-->交易记录, 可以在此处存储记录");
}

// 提供产品
- (void) provideContent: (NSString*)identifier
{
    NSLog(@"4.成功-->交易成功，请提供产品 identifier = %@", identifier);
    
}

- (void) setCallbackId:(int) callbackid
{
    //    int callbackId = self -> callbackId;
    NSLog(@"Callback ID : %d",callbackid);
    self -> callbackId = callbackid;
    
    cocos2d::LuaBridge::retainLuaFunctionById(callbackid);

    
}
- (void) callbackLua:(NSString*)status
{
    int callbackid = self -> callbackId;
    if (callbackId == -1) {
        NSLog(@"当前没有回调函数");
    }
    // 1. 将引用 ID 对应的 Lua function 放入 Lua stack
    cocos2d::LuaBridge::pushLuaFunctionById(callbackid);

    // 2. 将需要传递给 Lua function 的参数放入 Lua stack
    cocos2d::LuaBridge::getStack()->pushString([status UTF8String]);
    // 3. 执行 Lua function

    cocos2d::LuaBridge::getStack()->executeFunction(1);
    
    // 4. 释放引用 ID
    cocos2d::LuaBridge::releaseLuaFunctionById(callbackid);
    
    self -> callbackId = -1;
}

-(void) paymentQueue:(SKPaymentQueue *) paymentQueue restoreCompletedTransactionsFailedWithError:(NSError *)error{

}



@end
