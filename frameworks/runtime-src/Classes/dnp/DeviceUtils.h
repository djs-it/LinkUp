//
//  ParticleSystemFrameQuad.h
//  cocos2d_tests
//
//  Created by lovejia on 14-8-29.
//
//

#ifndef __cocos2d_DeviceUtils__
#define __cocos2d_DeviceUtils__

#include "base/CCNS.h"

USING_NS_CC;
using namespace std;
#include <string>

class DeviceUtils : public Ref
{

public:

    static const char* iosUuid();
    static const char* macUuid();
    
};

#endif /* defined(__cocos2d_DeviceUtils__) */
