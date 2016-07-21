#include "lua_cocos2dx_dnp_auto.hpp"
//#include "DNPParticleSystemFrameQuad.h"
#include "DNPDeviceUtils.h"
#include "DNPAnalyticX.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



//int lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_resetBlend(lua_State* tolua_S)
//{
//    int argc = 0;
//    DNPParticleSystemFrameQuad* cobj = nullptr;
//    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"DNPParticleSystemFrameQuad",0,&tolua_err)) goto tolua_lerror;
//#endif
//
//    cobj = (DNPParticleSystemFrameQuad*)tolua_tousertype(tolua_S,1,0);
//
//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_resetBlend'", nullptr);
//        return 0;
//    }
//#endif
//
//    argc = lua_gettop(tolua_S)-1;
//    if (argc == 0) 
//    {
//        if(!ok)
//            return 0;
//        cobj->resetBlend();
//        return 0;
//    }
//    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resetBlend",argc, 0);
//    return 0;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_resetBlend'.",&tolua_err);
//#endif
//
//    return 0;
//}
//int lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_spriteFrameWithFile(lua_State* tolua_S)
//{
//    int argc = 0;
//    DNPParticleSystemFrameQuad* cobj = nullptr;
//    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"DNPParticleSystemFrameQuad",0,&tolua_err)) goto tolua_lerror;
//#endif
//
//    cobj = (DNPParticleSystemFrameQuad*)tolua_tousertype(tolua_S,1,0);
//
//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_spriteFrameWithFile'", nullptr);
//        return 0;
//    }
//#endif
//
//    argc = lua_gettop(tolua_S)-1;
//    if (argc == 2) 
//    {
//        std::string arg0;
//        std::string arg1;
//
//        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
//
//        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
//        if(!ok)
//            return 0;
//        cobj->spriteFrameWithFile(arg0, arg1);
//        return 0;
//    }
//    if (argc == 3) 
//    {
//        std::string arg0;
//        std::string arg1;
//        double arg2;
//
//        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
//
//        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
//
//        ok &= luaval_to_number(tolua_S, 4,&arg2);
//        if(!ok)
//            return 0;
//        cobj->spriteFrameWithFile(arg0, arg1, arg2);
//        return 0;
//    }
//    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "spriteFrameWithFile",argc, 2);
//    return 0;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_spriteFrameWithFile'.",&tolua_err);
//#endif
//
//    return 0;
//}
//int lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_create(lua_State* tolua_S)
//{
//    int argc = 0;
//    bool ok  = true;
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertable(tolua_S,1,"DNPParticleSystemFrameQuad",0,&tolua_err)) goto tolua_lerror;
//#endif
//
//    argc = lua_gettop(tolua_S)-1;
//
//    do 
//    {
//        if (argc == 1)
//        {
//            std::string arg0;
//            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
//            if (!ok) { break; }
//            DNPParticleSystemFrameQuad* ret = DNPParticleSystemFrameQuad::create(arg0);
//            object_to_luaval<DNPParticleSystemFrameQuad>(tolua_S, "DNPParticleSystemFrameQuad",(DNPParticleSystemFrameQuad*)ret);
//            return 1;
//        }
//    } while (0);
//    ok  = true;
//    do 
//    {
//        if (argc == 0)
//        {
//            DNPParticleSystemFrameQuad* ret = DNPParticleSystemFrameQuad::create();
//            object_to_luaval<DNPParticleSystemFrameQuad>(tolua_S, "DNPParticleSystemFrameQuad",(DNPParticleSystemFrameQuad*)ret);
//            return 1;
//        }
//    } while (0);
//    ok  = true;
//    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
//    return 0;
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_create'.",&tolua_err);
//#endif
//    return 0;
//}
//static int lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_finalize(lua_State* tolua_S)
//{
//    printf("luabindings: finalizing LUA object (DNPParticleSystemFrameQuad)");
//    return 0;
//}
//
//int lua_register_cocos2dx_dnp_DNPParticleSystemFrameQuad(lua_State* tolua_S)
//{
//    tolua_usertype(tolua_S,"DNPParticleSystemFrameQuad");
//    tolua_cclass(tolua_S,"DNPParticleSystemFrameQuad","DNPParticleSystemFrameQuad","cc.ParticleSystemQuad",nullptr);
//
//    tolua_beginmodule(tolua_S,"DNPParticleSystemFrameQuad");
//        tolua_function(tolua_S,"resetBlend",lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_resetBlend);
//        tolua_function(tolua_S,"spriteFrameWithFile",lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_spriteFrameWithFile);
//        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_DNPParticleSystemFrameQuad_create);
//    tolua_endmodule(tolua_S);
//    std::string typeName = typeid(DNPParticleSystemFrameQuad).name();
//    g_luaType[typeName] = "DNPParticleSystemFrameQuad";
//    g_typeCast["DNPParticleSystemFrameQuad"] = "DNPParticleSystemFrameQuad";
//    return 1;
//}

int lua_cocos2dx_dnp_DNPDeviceUtils_uuid(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPDeviceUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        const char* ret = DNPDeviceUtils::uuid();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "uuid",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPDeviceUtils_uuid'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_dnp_DNPDeviceUtils_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DNPDeviceUtils)");
    return 0;
}

int lua_register_cocos2dx_dnp_DNPDeviceUtils(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DNPDeviceUtils");
    tolua_cclass(tolua_S,"DNPDeviceUtils","DNPDeviceUtils","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"DNPDeviceUtils");
        tolua_function(tolua_S,"uuid", lua_cocos2dx_dnp_DNPDeviceUtils_uuid);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(DNPDeviceUtils).name();
    g_luaType[typeName] = "DNPDeviceUtils";
    g_typeCast["DNPDeviceUtils"] = "DNPDeviceUtils";
    return 1;
}

int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        double arg0;
        double arg1;
        double arg2;
        double arg3;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        ok &= luaval_to_number(tolua_S, 4,&arg2);
        ok &= luaval_to_number(tolua_S, 5,&arg3);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy(arg0, arg1, arg2, arg3);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWithParametersTimed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        const char* arg0;
        cocos2d::__Dictionary* arg1;
        bool arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_object<cocos2d::__Dictionary>(tolua_S, 3, "cc.__Dictionary",&arg1);
        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        DNPAnalyticX::flurryLogEventWithParametersTimed(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryLogEventWithParametersTimed",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWithParametersTimed'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryGetFlurryAgentVersion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        const char* ret = DNPAnalyticX::flurryGetFlurryAgentVersion();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryGetFlurryAgentVersion",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryGetFlurryAgentVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryEndSession(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        DNPAnalyticX::flurryEndSession();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryEndSession",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryEndSession'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetShowErrorInLogEnabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetShowErrorInLogEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetShowErrorInLogEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetShowErrorInLogEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryEndTimedEventWithParameters(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        cocos2d::__Dictionary* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_object<cocos2d::__Dictionary>(tolua_S, 3, "cc.__Dictionary",&arg1);
        if(!ok)
            return 0;
        DNPAnalyticX::flurryEndTimedEventWithParameters(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryEndTimedEventWithParameters",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryEndTimedEventWithParameters'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetEventLoggingEnabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetEventLoggingEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetEventLoggingEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetEventLoggingEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetAppVersion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetAppVersion(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetAppVersion",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetAppVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetReportLocation(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetReportLocation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetReportLocation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetReportLocation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventTimed(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        bool arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        DNPAnalyticX::flurryLogEventTimed(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryLogEventTimed",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventTimed'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWithParameters(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        cocos2d::__Dictionary* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        luaval_to_dictionary(tolua_S, 3, &arg1);
        //        ok &= luaval_to_object<cocos2d::__Dictionary>(tolua_S, 3, "cc.__Dictionary",&arg1);
        //        if(!ok)
        //            return 0;
        DNPAnalyticX::flurryLogEventWithParameters(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryLogEventWithParameters",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWithParameters'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionReportsOnCloseEnabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetSessionReportsOnCloseEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetSessionReportsOnCloseEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionReportsOnCloseEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetUserID(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetUserID(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetUserID",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetUserID'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetCrashReportingEnabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetCrashReportingEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetCrashReportingEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetCrashReportingEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryLogPageView(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        DNPAnalyticX::flurryLogPageView();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryLogPageView",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryLogPageView'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetGender(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetGender(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetGender",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetGender'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionContinueSeconds(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetSessionContinueSeconds(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetSessionContinueSeconds",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionContinueSeconds'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetDebugLogEnabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetDebugLogEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetDebugLogEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetDebugLogEnabled'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetAge(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetAge(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetAge",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetAge'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryStartSession(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        DNPAnalyticX::flurryStartSession(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryStartSession",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryStartSession'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWrap(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        DNPAnalyticX::flurryLogEventWrap(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurryLogEventWrap",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWrap'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionReportsOnPauseEnabled(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DNPAnalyticX",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        DNPAnalyticX::flurrySetSessionReportsOnPauseEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "flurrySetSessionReportsOnPauseEnabled",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionReportsOnPauseEnabled'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_dnp_DNPAnalyticX_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DNPAnalyticX)");
    return 0;
}

int lua_register_cocos2dx_dnp_DNPAnalyticX(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DNPAnalyticX");
    tolua_cclass(tolua_S,"DNPAnalyticX","DNPAnalyticX","",nullptr);

    tolua_beginmodule(tolua_S,"DNPAnalyticX");
        tolua_function(tolua_S,"flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetLatitudeLongitudeHorizontalAccuracyVerticalAccuracy);
        tolua_function(tolua_S,"flurryLogEventWithParametersTimed", lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWithParametersTimed);
        tolua_function(tolua_S,"flurryGetFlurryAgentVersion", lua_cocos2dx_dnp_DNPAnalyticX_flurryGetFlurryAgentVersion);
        tolua_function(tolua_S,"flurryEndSession", lua_cocos2dx_dnp_DNPAnalyticX_flurryEndSession);
        tolua_function(tolua_S,"flurrySetShowErrorInLogEnabled", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetShowErrorInLogEnabled);
        tolua_function(tolua_S,"flurryEndTimedEventWithParameters", lua_cocos2dx_dnp_DNPAnalyticX_flurryEndTimedEventWithParameters);
        tolua_function(tolua_S,"flurrySetEventLoggingEnabled", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetEventLoggingEnabled);
        tolua_function(tolua_S,"flurrySetAppVersion", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetAppVersion);
        tolua_function(tolua_S,"flurrySetReportLocation", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetReportLocation);
        tolua_function(tolua_S,"flurryLogEventTimed", lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventTimed);
        tolua_function(tolua_S,"flurryLogEventWithParameters", lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWithParameters);
        tolua_function(tolua_S,"flurrySetSessionReportsOnCloseEnabled", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionReportsOnCloseEnabled);
        tolua_function(tolua_S,"flurrySetUserID", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetUserID);
        tolua_function(tolua_S,"flurrySetCrashReportingEnabled", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetCrashReportingEnabled);
        tolua_function(tolua_S,"flurryLogPageView", lua_cocos2dx_dnp_DNPAnalyticX_flurryLogPageView);
        tolua_function(tolua_S,"flurrySetGender", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetGender);
        tolua_function(tolua_S,"flurrySetSessionContinueSeconds", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionContinueSeconds);
        tolua_function(tolua_S,"flurrySetDebugLogEnabled", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetDebugLogEnabled);
        tolua_function(tolua_S,"flurrySetAge", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetAge);
        tolua_function(tolua_S,"flurryStartSession", lua_cocos2dx_dnp_DNPAnalyticX_flurryStartSession);
        tolua_function(tolua_S,"flurryLogEventWrap", lua_cocos2dx_dnp_DNPAnalyticX_flurryLogEventWrap);
        tolua_function(tolua_S,"flurrySetSessionReportsOnPauseEnabled", lua_cocos2dx_dnp_DNPAnalyticX_flurrySetSessionReportsOnPauseEnabled);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(DNPAnalyticX).name();
    g_luaType[typeName] = "DNPAnalyticX";
    g_typeCast["DNPAnalyticX"] = "DNPAnalyticX";
    return 1;
}
TOLUA_API int register_all_cocos2dx_dnp(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"dnp",0);
	tolua_beginmodule(tolua_S,"dnp");

	lua_register_cocos2dx_dnp_DNPDeviceUtils(tolua_S);
	lua_register_cocos2dx_dnp_DNPAnalyticX(tolua_S);
//	lua_register_cocos2dx_dnp_DNPParticleSystemFrameQuad(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

