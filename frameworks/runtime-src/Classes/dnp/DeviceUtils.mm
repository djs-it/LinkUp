//
//  DNPParticleSystemFrameQuad.cpp
//  cocos2d_tests
//
//  Created by lovejia on 14-8-29.
//
//

#include "DeviceUtils.h"
#if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "SvUDIDTools.h"
#endif

const char*  DeviceUtils::iosUuid()
{
#if(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    return (new string([[SvUDIDTools UDID] UTF8String]))->c_str();
#else
    return "9999999999999999";
#endif
}

const char*  DeviceUtils::macUuid()
{
    return (new string([[[NSUUID UUID] UUIDString] UTF8String]))->c_str();
}

