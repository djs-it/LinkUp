#include "AppDelegate.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos2d.h"
#include "lua_module_register.h"
//################# QHZF ###################
//#include "lua_cocos2dx_dnp_auto.hpp"
#include "cocos2dx_extra_luabinding.h"
#include "lua_cocos2dx_extension_filter_auto.hpp"
#include "lua_cocos2dx_dnp_shader_auto.hpp"
#include "lua_cocos2dx_dnp_auto.hpp"
#include "cocos2dx_extra_ios_iap_luabinding.h"
#include "HelperFunc_luabinding.h"
 //################# QHZF ###################

#if (CC_TARGET_PLATFORM != CC_PLATFORM_LINUX)
#include "ide-support/CodeIDESupport.h"
#endif

#if (COCOS2D_DEBUG > 0) && (CC_CODE_IDE_DEBUG_SUPPORT > 0)
#include "runtime/Runtime.h"
#include "ide-support/RuntimeLuaImpl.h"
#endif

using namespace CocosDenshion;

USING_NS_CC;
using namespace std;

 //################# QHZF ###################

static void quick_module_register(lua_State *L)
{
    lua_getglobal(L, "_G");
    if (lua_istable(L, -1))//stack:...,_G,
    {
//        register_all_cocos2dx_dnp(L);
        luaopen_cocos2dx_extra_luabinding(L);
    }
    lua_pop(L, 1);
}

 //################# QHZF ###################

AppDelegate::AppDelegate()
{
}

AppDelegate::~AppDelegate()
{
    SimpleAudioEngine::end();

#if (COCOS2D_DEBUG > 0) && (CC_CODE_IDE_DEBUG_SUPPORT > 0)
    // NOTE:Please don't remove this call if you want to debug with Cocos Code IDE
    RuntimeEngine::getInstance()->end();
#endif

}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

// If you want to use packages manager to install more packages,
// don't modify or remove this function
static int register_all_packages()
{
    return 0; //flag for packages manager
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // set default FPS
    Director::getInstance()->setAnimationInterval(1.0 / 60.0f);

    // register lua module
    auto engine = LuaEngine::getInstance();
    ScriptEngineManager::getInstance()->setScriptEngine(engine);
    lua_State* L = engine->getLuaStack()->getLuaState();
    lua_module_register(L);

    register_all_packages();

    LuaStack* stack = engine->getLuaStack();
    //################# QHZF 修改Key and Sign ###################
     stack->setXXTEAKeyAndSign("d@n0po", strlen("d@n0po"), "donopo", strlen("donopo"));

    //register custom function
//    LuaStack* stack = engine->getLuaStack();
//    register_custom_function(stack->getLuaState());
    //################# QHZF ###################
//    lua_getglobal(L, "_G");
//    register_all_cocos2dx_dnp(engine->getLuaStack()->getLuaState());
//    lua_settop(L, 0);
    
//     quick_module_register(L);
    lua_getglobal(L, "_G");
    register_all_cocos2dx_dnp(L);
    lua_settop(L, 0);
    
    lua_getglobal(L, "_G");
    if (lua_istable(L, -1))//stack:...,_G,
    {
        luaopen_cocos2dx_extra_luabinding(L);
        register_all_cocos2dx_extension_filter(L);
        register_all_cocos2dx_dnp_shader(L);
        luaopen_cocos2dx_extra_ios_iap_luabinding(L);
        luaopen_HelperFunc_luabinding(L);
    }
    lua_pop(L, 1);
     //################# QHZF ###################
    
#if (COCOS2D_DEBUG > 0) && (CC_CODE_IDE_DEBUG_SUPPORT > 0)
     //################# QHZF ###################
//    stack->setDataInfo(XXTEA_KEY, strlen(XXTEA_KEY), XXTEA_SIGN, strlen(XXTEA_SIGN));
//    engine->getLuaStack()->loadData("game.dat");
//    usleep(500);
 //################# QHZF ###################

    // NOTE:Please don't remove this call if you want to debug with Cocos Code IDE
    auto runtimeEngine = RuntimeEngine::getInstance();
    runtimeEngine->addRuntime(RuntimeLuaImpl::create(), kRuntimeEngineLua);
    runtimeEngine->start();
#else
     //################# QHZF ###################
//    if (engine->executeScriptFile("src/main.lua"))
//    {
//        return false;
//    }
    
#ifdef CC_TARGET_OS_IPHONE
    if (sizeof(long) == 4) {
        stack->loadChunksFromZIP("res/game.zip");
    } else {
        stack->loadChunksFromZIP("res/game64.zip");
    }
#else // #ifdef CC_TARGET_OS_IPHONE
    stack->loadChunksFromZIP("res/game.zip");
#endif
    stack->executeString("require 'main'");

#endif
    
 //################# QHZF ###################
    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    Director::getInstance()->stopAnimation();

    SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
    
    auto dispatcher = Director::getInstance()->getEventDispatcher();
    if (dispatcher) {
        dispatcher->dispatchCustomEvent("APP_ENTER_BACKGROUND_EVENT");
    }
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->startAnimation();

    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
    
    auto dispatcher = Director::getInstance()->getEventDispatcher();
    if (dispatcher) {
        dispatcher->dispatchCustomEvent("APP_ENTER_FOREGROUND_EVENT");
    }
}
