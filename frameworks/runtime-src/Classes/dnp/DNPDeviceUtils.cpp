//
//  DNPParticleSystemFrameQuad.cpp
//  cocos2d_tests
//
//  Created by lovejia on 14-8-29.
//
//

#include "DNPDeviceUtils.h"
#if(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#elif(CC_TARGET_PLATFORM == CC_PLATFORM_MAC || CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "DeviceUtils.h"
#endif

const char*  DNPDeviceUtils::uuid()
{
#include "DNPDeviceUtils.h"
#if(CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    return "8888888888888";
#elif(CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
    return DeviceUtils::macUuid();
#elif(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    return DeviceUtils::iosUuid();
#endif
}


