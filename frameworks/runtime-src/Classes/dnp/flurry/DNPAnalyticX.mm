//
//  DNPAnalyticX.cpp
//  DNPAnalyticX
//
//  Created by diwwu on 5/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "DNPAnalyticX.h"
#import "Flurry.h"
#import "AnalyticXStringUtil.h"


#if(CC_TARGET_PLATFORM != CC_PLATFORM_MAC)
void DNPAnalyticX::flurrySetAppVersion(const char * version) {
    NSString *versionString = [AnalyticXStringUtil nsstringFromCString:version];
    [Flurry setAppVersion:versionString];
}

const char * DNPAnalyticX::flurryGetFlurryAgentVersion() {
    NSString *versionString = [Flurry getFlurryAgentVersion];
    return [AnalyticXStringUtil cstringFromNSString:versionString];
}

void DNPAnalyticX::flurrySetShowErrorInLogEnabled(bool value) {
    [Flurry setShowErrorInLogEnabled:value];
}

void DNPAnalyticX::flurrySetDebugLogEnabled(bool value) {
    [Flurry setDebugLogEnabled:value];
}

void DNPAnalyticX::flurrySetSessionContinueSeconds(int seconds) {
    [Flurry setSessionContinueSeconds:seconds];
}

void DNPAnalyticX::flurrySetSecureTransportEnabled(bool value) {
    // Not available anymore.
}

void DNPAnalyticX::flurrySetCrashReportingEnabled(bool value) {
    [Flurry setCrashReportingEnabled:value];
}

void DNPAnalyticX::flurryStartSession(const char * apiKey) {
    [Flurry startSession:[AnalyticXStringUtil nsstringFromCString:apiKey]];
}

void DNPAnalyticX::flurryEndSession() {
    //Android only
}

void DNPAnalyticX::flurryLogEvent(const char * eventName, ...) {
    char szBuf[cocos2d::MAX_LOG_LENGTH];
    
    va_list ap;
    va_start(ap, eventName);
    vsprintf(szBuf, eventName, ap);
    va_end(ap);

    [Flurry logEvent:[AnalyticXStringUtil nsstringFromCString:szBuf]];
}
void DNPAnalyticX::flurryLogEventWrap(const char * eventName) {

    [Flurry logEvent:[AnalyticXStringUtil nsstringFromCString:eventName]];
}

void DNPAnalyticX::flurryLogEventWithParameters(const char * eventName, cocos2d::__Dictionary * parameters) {
    
    [Flurry logEvent:[AnalyticXStringUtil nsstringFromCString:eventName] withParameters:[AnalyticXStringUtil nsDictionaryFromCCDictionary:parameters]];
}

void DNPAnalyticX::flurryLogEventTimed(const char * eventName, bool timed) {
    [Flurry logEvent:[AnalyticXStringUtil nsstringFromCString:eventName] timed:timed];
}

void DNPAnalyticX::flurryLogEventWithParametersTimed(const char * eventName, cocos2d::__Dictionary * parameters, bool timed) {
    [Flurry logEvent:[AnalyticXStringUtil nsstringFromCString:eventName] withParameters:[AnalyticXStringUtil nsDictionaryFromCCDictionary:parameters] timed:timed];
}

void DNPAnalyticX::flurryEndTimedEventWithParameters(const char * eventName, cocos2d::__Dictionary * parameters) {
    [Flurry endTimedEvent:[AnalyticXStringUtil nsstringFromCString:eventName] withParameters:[AnalyticXStringUtil nsDictionaryFromCCDictionary:parameters]];
}

void DNPAnalyticX::flurryLogPageView() {
    [Flurry logPageView];
}

void DNPAnalyticX::flurrySetUserID(const char * userID) {
    [Flurry setUserID:[AnalyticXStringUtil nsstringFromCString:userID]];
}

void DNPAnalyticX::flurrySetAge(int age) {
    [Flurry setAge:age];
}

void DNPAnalyticX::flurrySetGender(const char * gender) {
    [Flurry setGender:[AnalyticXStringUtil nsstringFromCString:gender]];
}

void DNPAnalyticX::flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy(double latitude, double longitude, float horizontalAccuracy, float verticalAccuracy) {
    [Flurry setLatitude:latitude longitude:longitude horizontalAccuracy:horizontalAccuracy verticalAccuracy:verticalAccuracy];
}

void DNPAnalyticX::flurrySetSessionReportsOnCloseEnabled(bool sendSessionReportsOnClose) {
    [Flurry setSessionReportsOnCloseEnabled:sendSessionReportsOnClose];
}

void DNPAnalyticX::flurrySetSessionReportsOnPauseEnabled(bool setSessionReportsOnPauseEnabled) {
    [Flurry setSessionReportsOnPauseEnabled:setSessionReportsOnPauseEnabled];
}

void DNPAnalyticX::flurrySetEventLoggingEnabled(bool value) {
    [Flurry setEventLoggingEnabled:value];
}

void DNPAnalyticX::flurrySetReportLocation(bool reportLocation) {
    //Android only
}

#else

void DNPAnalyticX::flurrySetAppVersion(const char * version) {

}

const char * DNPAnalyticX::flurryGetFlurryAgentVersion() {
    return "1.0";
}

void DNPAnalyticX::flurrySetShowErrorInLogEnabled(bool value) {

}

void DNPAnalyticX::flurrySetDebugLogEnabled(bool value) {

    
}

void DNPAnalyticX::flurrySetSessionContinueSeconds(int seconds) {

    
}

void DNPAnalyticX::flurrySetSecureTransportEnabled(bool value) {

    
}

void DNPAnalyticX::flurrySetCrashReportingEnabled(bool value) {

    
}

void DNPAnalyticX::flurryStartSession(const char * apiKey) {

    
}

void DNPAnalyticX::flurryEndSession() {

    
}

void DNPAnalyticX::flurryLogEvent(const char * eventName, ...) {

    
}
void DNPAnalyticX::flurryLogEventWrap(const char * eventName) {

    
}

void DNPAnalyticX::flurryLogEventWithParameters(const char * eventName, cocos2d::__Dictionary * parameters) {
    

}

void DNPAnalyticX::flurryLogEventTimed(const char * eventName, bool timed) {

    
}

void DNPAnalyticX::flurryLogEventWithParametersTimed(const char * eventName, cocos2d::__Dictionary * parameters, bool timed) {

    
}

void DNPAnalyticX::flurryEndTimedEventWithParameters(const char * eventName, cocos2d::__Dictionary * parameters) {

    
}

void DNPAnalyticX::flurryLogPageView() {

    
}

void DNPAnalyticX::flurrySetUserID(const char * userID) {

    
}

void DNPAnalyticX::flurrySetAge(int age) {

    
}

void DNPAnalyticX::flurrySetGender(const char * gender) {

    
}

void DNPAnalyticX::flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy(double latitude, double longitude, float horizontalAccuracy, float verticalAccuracy) {

    
}

void DNPAnalyticX::flurrySetSessionReportsOnCloseEnabled(bool sendSessionReportsOnClose) {

    
}

void DNPAnalyticX::flurrySetSessionReportsOnPauseEnabled(bool setSessionReportsOnPauseEnabled) {

    
}

void DNPAnalyticX::flurrySetEventLoggingEnabled(bool value) {

    
}

void DNPAnalyticX::flurrySetReportLocation(bool reportLocation) {

    
}

#endif










