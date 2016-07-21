#include "lua_cocos2dx_dnp_shader_auto.hpp"
#include "ColorAdjustSprite.h"
#include "TailSprite.h"
#include "LaserSprite.h"
#include "RippleSprite.h"
#include "LightningSprite.h"
#include "ShatterSprite.h"
#include "GhostSprite.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"


int lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDH(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDH'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ColorAdjustSprite:setDH");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDH'", nullptr);
            return 0;
        }
        cobj->setDH(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:setDH",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDH'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setShader'", nullptr);
            return 0;
        }
        bool ret = cobj->setShader();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDL(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDL'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ColorAdjustSprite:setDL");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDL'", nullptr);
            return 0;
        }
        cobj->setDL(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:setDL",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDL'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_draw(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_draw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Renderer* arg0;
        cocos2d::Mat4 arg1;
        unsigned int arg2;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "ColorAdjustSprite:draw");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "ColorAdjustSprite:draw");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "ColorAdjustSprite:draw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_draw'", nullptr);
            return 0;
        }
        cobj->draw(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:draw",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_draw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDS(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDS'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDS'", nullptr);
            return 0;
        }
        double ret = cobj->getDS();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:getDS",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDS'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDL(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDL'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDL'", nullptr);
            return 0;
        }
        double ret = cobj->getDL();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:getDL",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDL'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDH(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDH'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDH'", nullptr);
            return 0;
        }
        double ret = cobj->getDH();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:getDH",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDH'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDS(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ColorAdjustSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDS'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ColorAdjustSprite:setDS");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDS'", nullptr);
            return 0;
        }
        cobj->setDS(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:setDS",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDS'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ColorAdjustSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "ColorAdjustSprite:create");
            if (!ok) { break; }
            ColorAdjustSprite* ret = ColorAdjustSprite::create(arg0, arg1);
            object_to_luaval<ColorAdjustSprite>(tolua_S, "ColorAdjustSprite",(ColorAdjustSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ColorAdjustSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            ColorAdjustSprite* ret = ColorAdjustSprite::create(arg0);
            object_to_luaval<ColorAdjustSprite>(tolua_S, "ColorAdjustSprite",(ColorAdjustSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "ColorAdjustSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ColorAdjustSprite:createWithSpriteFrameName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        ColorAdjustSprite* ret = ColorAdjustSprite::createWithSpriteFrameName(arg0);
        object_to_luaval<ColorAdjustSprite>(tolua_S, "ColorAdjustSprite",(ColorAdjustSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ColorAdjustSprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ColorAdjustSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "ColorAdjustSprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        ColorAdjustSprite* ret = ColorAdjustSprite::createWithSpriteFrame(arg0);
        object_to_luaval<ColorAdjustSprite>(tolua_S, "ColorAdjustSprite",(ColorAdjustSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ColorAdjustSprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_ColorAdjustSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ColorAdjustSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new ColorAdjustSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ColorAdjustSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ColorAdjustSprite:ColorAdjustSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ColorAdjustSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_ColorAdjustSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ColorAdjustSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_ColorAdjustSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ColorAdjustSprite");
    tolua_cclass(tolua_S,"ColorAdjustSprite","ColorAdjustSprite","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"ColorAdjustSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_ColorAdjustSprite_constructor);
        tolua_function(tolua_S,"setDH",lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDH);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_ColorAdjustSprite_setShader);
        tolua_function(tolua_S,"setDL",lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDL);
        tolua_function(tolua_S,"draw",lua_cocos2dx_dnp_shader_ColorAdjustSprite_draw);
        tolua_function(tolua_S,"getDS",lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDS);
        tolua_function(tolua_S,"getDL",lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDL);
        tolua_function(tolua_S,"getDH",lua_cocos2dx_dnp_shader_ColorAdjustSprite_getDH);
        tolua_function(tolua_S,"setDS",lua_cocos2dx_dnp_shader_ColorAdjustSprite_setDS);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_ColorAdjustSprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_dnp_shader_ColorAdjustSprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(ColorAdjustSprite).name();
    g_luaType[typeName] = "ColorAdjustSprite";
    g_typeCast["ColorAdjustSprite"] = "ColorAdjustSprite";
    return 1;
}

int lua_cocos2dx_dnp_shader_TailSprite_draw(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_draw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Renderer* arg0;
        cocos2d::Mat4 arg1;
        unsigned int arg2;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "TailSprite:draw");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "TailSprite:draw");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "TailSprite:draw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_draw'", nullptr);
            return 0;
        }
        cobj->draw(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:draw",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_draw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_setIsDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_setIsDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "TailSprite:setIsDrawDebug");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_setIsDrawDebug'", nullptr);
            return 0;
        }
        cobj->setIsDrawDebug(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:setIsDrawDebug",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_setIsDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_setShader'", nullptr);
            return 0;
        }
        bool ret = cobj->setShader();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_getMinDis(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_getMinDis'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_getMinDis'", nullptr);
            return 0;
        }
        double ret = cobj->getMinDis();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:getMinDis",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_getMinDis'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_setMinDis(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_setMinDis'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "TailSprite:setMinDis");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_setMinDis'", nullptr);
            return 0;
        }
        cobj->setMinDis(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:setMinDis",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_setMinDis'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_clear(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_clear'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_clear'", nullptr);
            return 0;
        }
        cobj->clear();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:clear",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_clear'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_onDraw(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_onDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "TailSprite:onDraw");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "TailSprite:onDraw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_onDraw'", nullptr);
            return 0;
        }
        cobj->onDraw(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:onDraw",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_onDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_update(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "TailSprite:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_getIsEmpty(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_getIsEmpty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_getIsEmpty'", nullptr);
            return 0;
        }
        bool ret = cobj->getIsEmpty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:getIsEmpty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_getIsEmpty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_getIsDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_getIsDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_getIsDrawDebug'", nullptr);
            return 0;
        }
        bool ret = cobj->getIsDrawDebug();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:getIsDrawDebug",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_getIsDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_onDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (TailSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_TailSprite_onDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "TailSprite:onDrawDebug");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "TailSprite:onDrawDebug");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_onDrawDebug'", nullptr);
            return 0;
        }
        cobj->onDrawDebug(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:onDrawDebug",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_onDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "TailSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "TailSprite:create");
            if (!ok) { break; }
            TailSprite* ret = TailSprite::create(arg0, arg1);
            object_to_luaval<TailSprite>(tolua_S, "TailSprite",(TailSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "TailSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            TailSprite* ret = TailSprite::create(arg0);
            object_to_luaval<TailSprite>(tolua_S, "TailSprite",(TailSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "TailSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "TailSprite:createWithSpriteFrameName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        TailSprite* ret = TailSprite::createWithSpriteFrameName(arg0);
        object_to_luaval<TailSprite>(tolua_S, "TailSprite",(TailSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "TailSprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"TailSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "TailSprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        TailSprite* ret = TailSprite::createWithSpriteFrame(arg0);
        object_to_luaval<TailSprite>(tolua_S, "TailSprite",(TailSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "TailSprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_TailSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    TailSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_TailSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new TailSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"TailSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "TailSprite:TailSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_TailSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_TailSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TailSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_TailSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"TailSprite");
    tolua_cclass(tolua_S,"TailSprite","TailSprite","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"TailSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_TailSprite_constructor);
        tolua_function(tolua_S,"draw",lua_cocos2dx_dnp_shader_TailSprite_draw);
        tolua_function(tolua_S,"setIsDrawDebug",lua_cocos2dx_dnp_shader_TailSprite_setIsDrawDebug);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_TailSprite_setShader);
        tolua_function(tolua_S,"getMinDis",lua_cocos2dx_dnp_shader_TailSprite_getMinDis);
        tolua_function(tolua_S,"setMinDis",lua_cocos2dx_dnp_shader_TailSprite_setMinDis);
        tolua_function(tolua_S,"clear",lua_cocos2dx_dnp_shader_TailSprite_clear);
        tolua_function(tolua_S,"onDraw",lua_cocos2dx_dnp_shader_TailSprite_onDraw);
        tolua_function(tolua_S,"update",lua_cocos2dx_dnp_shader_TailSprite_update);
        tolua_function(tolua_S,"getIsEmpty",lua_cocos2dx_dnp_shader_TailSprite_getIsEmpty);
        tolua_function(tolua_S,"getIsDrawDebug",lua_cocos2dx_dnp_shader_TailSprite_getIsDrawDebug);
        tolua_function(tolua_S,"onDrawDebug",lua_cocos2dx_dnp_shader_TailSprite_onDrawDebug);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_TailSprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_dnp_shader_TailSprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(TailSprite).name();
    g_luaType[typeName] = "TailSprite";
    g_typeCast["TailSprite"] = "TailSprite";
    return 1;
}

int lua_cocos2dx_dnp_shader_LaserSprite_draw(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_draw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Renderer* arg0;
        cocos2d::Mat4 arg1;
        unsigned int arg2;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "LaserSprite:draw");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "LaserSprite:draw");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "LaserSprite:draw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_draw'", nullptr);
            return 0;
        }
        cobj->draw(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:draw",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_draw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setEnd(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setEnd'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "LaserSprite:setEnd");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setEnd'", nullptr);
            return 0;
        }
        cobj->setEnd(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setEnd",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setEnd'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_updateStartAndEnd(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_updateStartAndEnd'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_updateStartAndEnd'", nullptr);
            return 0;
        }
        cobj->updateStartAndEnd();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:updateStartAndEnd",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_updateStartAndEnd'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_onPassUnifoAndBindTex(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_onPassUnifoAndBindTex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "LaserSprite:onPassUnifoAndBindTex");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "LaserSprite:onPassUnifoAndBindTex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_onPassUnifoAndBindTex'", nullptr);
            return 0;
        }
        cobj->onPassUnifoAndBindTex(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:onPassUnifoAndBindTex",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_onPassUnifoAndBindTex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setLight(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setLight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LaserSprite:setLight"); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "LaserSprite:setLight"); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "LaserSprite:setLight"); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "LaserSprite:setLight"); arg3 = arg3_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setLight'", nullptr);
            return 0;
        }
        cobj->setLight(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setLight",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setLight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setLightColor(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setLightColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "LaserSprite:setLightColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setLightColor'", nullptr);
            return 0;
        }
        cobj->setLightColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setLightColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setLightColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setBlendFunc(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setBlendFunc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        unsigned int arg0;
        unsigned int arg1;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "LaserSprite:setBlendFunc");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "LaserSprite:setBlendFunc");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setBlendFunc'", nullptr);
            return 0;
        }
        cobj->setBlendFunc(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setBlendFunc",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setBlendFunc'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setShader'", nullptr);
            return 0;
        }
        bool ret = cobj->setShader();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_update(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "LaserSprite:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setGlowColor(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setGlowColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "LaserSprite:setGlowColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setGlowColor'", nullptr);
            return 0;
        }
        cobj->setGlowColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setGlowColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setGlowColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setPorN(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setPorN'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "LaserSprite:setPorN");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setPorN'", nullptr);
            return 0;
        }
        cobj->setPorN(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setPorN",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setPorN'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setStart(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setStart'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "LaserSprite:setStart");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setStart'", nullptr);
            return 0;
        }
        cobj->setStart(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setStart",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setStart'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_setNoiseScale(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LaserSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LaserSprite_setNoiseScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "LaserSprite:setNoiseScale");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_setNoiseScale'", nullptr);
            return 0;
        }
        cobj->setNoiseScale(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:setNoiseScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_setNoiseScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LaserSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "LaserSprite:create");
            if (!ok) { break; }
            LaserSprite* ret = LaserSprite::create(arg0, arg1);
            object_to_luaval<LaserSprite>(tolua_S, "LaserSprite",(LaserSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LaserSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            LaserSprite* ret = LaserSprite::create(arg0);
            object_to_luaval<LaserSprite>(tolua_S, "LaserSprite",(LaserSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "LaserSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LaserSprite:createWithSpriteFrameName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        LaserSprite* ret = LaserSprite::createWithSpriteFrameName(arg0);
        object_to_luaval<LaserSprite>(tolua_S, "LaserSprite",(LaserSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "LaserSprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"LaserSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "LaserSprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        LaserSprite* ret = LaserSprite::createWithSpriteFrame(arg0);
        object_to_luaval<LaserSprite>(tolua_S, "LaserSprite",(LaserSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "LaserSprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_LaserSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    LaserSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LaserSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new LaserSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"LaserSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LaserSprite:LaserSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LaserSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_LaserSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LaserSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_LaserSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"LaserSprite");
    tolua_cclass(tolua_S,"LaserSprite","LaserSprite","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"LaserSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_LaserSprite_constructor);
        tolua_function(tolua_S,"draw",lua_cocos2dx_dnp_shader_LaserSprite_draw);
        tolua_function(tolua_S,"setEnd",lua_cocos2dx_dnp_shader_LaserSprite_setEnd);
        tolua_function(tolua_S,"updateStartAndEnd",lua_cocos2dx_dnp_shader_LaserSprite_updateStartAndEnd);
        tolua_function(tolua_S,"onPassUnifoAndBindTex",lua_cocos2dx_dnp_shader_LaserSprite_onPassUnifoAndBindTex);
        tolua_function(tolua_S,"setLight",lua_cocos2dx_dnp_shader_LaserSprite_setLight);
        tolua_function(tolua_S,"setLightColor",lua_cocos2dx_dnp_shader_LaserSprite_setLightColor);
        tolua_function(tolua_S,"setBlendFunc",lua_cocos2dx_dnp_shader_LaserSprite_setBlendFunc);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_LaserSprite_setShader);
        tolua_function(tolua_S,"update",lua_cocos2dx_dnp_shader_LaserSprite_update);
        tolua_function(tolua_S,"setGlowColor",lua_cocos2dx_dnp_shader_LaserSprite_setGlowColor);
        tolua_function(tolua_S,"setPorN",lua_cocos2dx_dnp_shader_LaserSprite_setPorN);
        tolua_function(tolua_S,"setStart",lua_cocos2dx_dnp_shader_LaserSprite_setStart);
        tolua_function(tolua_S,"setNoiseScale",lua_cocos2dx_dnp_shader_LaserSprite_setNoiseScale);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_LaserSprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_dnp_shader_LaserSprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(LaserSprite).name();
    g_luaType[typeName] = "LaserSprite";
    g_typeCast["LaserSprite"] = "LaserSprite";
    return 1;
}

int lua_cocos2dx_dnp_shader_RippleSprite_setGridSideLen(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_setGridSideLen'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "RippleSprite:setGridSideLen");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_setGridSideLen'", nullptr);
            return 0;
        }
        bool ret = cobj->setGridSideLen(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:setGridSideLen",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_setGridSideLen'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_setIsDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_setIsDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "RippleSprite:setIsDrawDebug");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_setIsDrawDebug'", nullptr);
            return 0;
        }
        cobj->setIsDrawDebug(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:setIsDrawDebug",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_setIsDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_setShader'", nullptr);
            return 0;
        }
        bool ret = cobj->setShader();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_onDraw(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_onDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "RippleSprite:onDraw");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "RippleSprite:onDraw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_onDraw'", nullptr);
            return 0;
        }
        cobj->onDraw(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:onDraw",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_onDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_draw(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_draw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Renderer* arg0;
        cocos2d::Mat4 arg1;
        unsigned int arg2;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "RippleSprite:draw");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "RippleSprite:draw");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "RippleSprite:draw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_draw'", nullptr);
            return 0;
        }
        cobj->draw(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:draw",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_draw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_update(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "RippleSprite:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_doTouch(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_doTouch'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "RippleSprite:doTouch");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "RippleSprite:doTouch");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "RippleSprite:doTouch");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_doTouch'", nullptr);
            return 0;
        }
        cobj->doTouch(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:doTouch",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_doTouch'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_getIsDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_getIsDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_getIsDrawDebug'", nullptr);
            return 0;
        }
        bool ret = cobj->getIsDrawDebug();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:getIsDrawDebug",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_getIsDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_onDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_onDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "RippleSprite:onDrawDebug");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "RippleSprite:onDrawDebug");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_onDrawDebug'", nullptr);
            return 0;
        }
        cobj->onDrawDebug(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:onDrawDebug",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_onDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_getGridSideLen(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (RippleSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_RippleSprite_getGridSideLen'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_getGridSideLen'", nullptr);
            return 0;
        }
        double ret = cobj->getGridSideLen();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:getGridSideLen",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_getGridSideLen'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "RippleSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "RippleSprite:create");
            if (!ok) { break; }
            RippleSprite* ret = RippleSprite::create(arg0, arg1);
            object_to_luaval<RippleSprite>(tolua_S, "RippleSprite",(RippleSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "RippleSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            RippleSprite* ret = RippleSprite::create(arg0);
            object_to_luaval<RippleSprite>(tolua_S, "RippleSprite",(RippleSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "RippleSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "RippleSprite:createWithSpriteFrameName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        RippleSprite* ret = RippleSprite::createWithSpriteFrameName(arg0);
        object_to_luaval<RippleSprite>(tolua_S, "RippleSprite",(RippleSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "RippleSprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"RippleSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "RippleSprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        RippleSprite* ret = RippleSprite::createWithSpriteFrame(arg0);
        object_to_luaval<RippleSprite>(tolua_S, "RippleSprite",(RippleSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "RippleSprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_RippleSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    RippleSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_RippleSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new RippleSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"RippleSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "RippleSprite:RippleSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_RippleSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_RippleSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RippleSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_RippleSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"RippleSprite");
    tolua_cclass(tolua_S,"RippleSprite","RippleSprite","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"RippleSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_RippleSprite_constructor);
        tolua_function(tolua_S,"setGridSideLen",lua_cocos2dx_dnp_shader_RippleSprite_setGridSideLen);
        tolua_function(tolua_S,"setIsDrawDebug",lua_cocos2dx_dnp_shader_RippleSprite_setIsDrawDebug);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_RippleSprite_setShader);
        tolua_function(tolua_S,"onDraw",lua_cocos2dx_dnp_shader_RippleSprite_onDraw);
        tolua_function(tolua_S,"draw",lua_cocos2dx_dnp_shader_RippleSprite_draw);
        tolua_function(tolua_S,"update",lua_cocos2dx_dnp_shader_RippleSprite_update);
        tolua_function(tolua_S,"doTouch",lua_cocos2dx_dnp_shader_RippleSprite_doTouch);
        tolua_function(tolua_S,"getIsDrawDebug",lua_cocos2dx_dnp_shader_RippleSprite_getIsDrawDebug);
        tolua_function(tolua_S,"onDrawDebug",lua_cocos2dx_dnp_shader_RippleSprite_onDrawDebug);
        tolua_function(tolua_S,"getGridSideLen",lua_cocos2dx_dnp_shader_RippleSprite_getGridSideLen);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_RippleSprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_dnp_shader_RippleSprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(RippleSprite).name();
    g_luaType[typeName] = "RippleSprite";
    g_typeCast["RippleSprite"] = "RippleSprite";
    return 1;
}

int lua_cocos2dx_dnp_shader_LightningSprite_setIsDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_setIsDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "LightningSprite:setIsDrawDebug");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_setIsDrawDebug'", nullptr);
            return 0;
        }
        cobj->setIsDrawDebug(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:setIsDrawDebug",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_setIsDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_draw(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_draw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Renderer* arg0;
        cocos2d::Mat4 arg1;
        unsigned int arg2;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "LightningSprite:draw");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "LightningSprite:draw");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "LightningSprite:draw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_draw'", nullptr);
            return 0;
        }
        cobj->draw(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:draw",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_draw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_updateNGeneration(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_updateNGeneration'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_updateNGeneration'", nullptr);
            return 0;
        }
        cobj->updateNGeneration();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:updateNGeneration",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_updateNGeneration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_setStartAndEnd(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_setStartAndEnd'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "LightningSprite:setStartAndEnd");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "LightningSprite:setStartAndEnd");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_setStartAndEnd'", nullptr);
            return 0;
        }
        cobj->setStartAndEnd(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:setStartAndEnd",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_setStartAndEnd'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_onDraw(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_onDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "LightningSprite:onDraw");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "LightningSprite:onDraw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_onDraw'", nullptr);
            return 0;
        }
        cobj->onDraw(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:onDraw",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_onDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_setShader'", nullptr);
            return 0;
        }
        bool ret = cobj->setShader();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_doJitter(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_doJitter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_doJitter'", nullptr);
            return 0;
        }
        cobj->doJitter();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:doJitter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_doJitter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_getIsDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_getIsDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_getIsDrawDebug'", nullptr);
            return 0;
        }
        bool ret = cobj->getIsDrawDebug();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:getIsDrawDebug",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_getIsDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_onDrawDebug(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_onDrawDebug'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "LightningSprite:onDrawDebug");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "LightningSprite:onDrawDebug");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_onDrawDebug'", nullptr);
            return 0;
        }
        cobj->onDrawDebug(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:onDrawDebug",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_onDrawDebug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_genLighting(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (LightningSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_LightningSprite_genLighting'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_genLighting'", nullptr);
            return 0;
        }
        cobj->genLighting();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:genLighting",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_genLighting'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LightningSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "LightningSprite:create");
            if (!ok) { break; }
            LightningSprite* ret = LightningSprite::create(arg0, arg1);
            object_to_luaval<LightningSprite>(tolua_S, "LightningSprite",(LightningSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LightningSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            LightningSprite* ret = LightningSprite::create(arg0);
            object_to_luaval<LightningSprite>(tolua_S, "LightningSprite",(LightningSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "LightningSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "LightningSprite:createWithSpriteFrameName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        LightningSprite* ret = LightningSprite::createWithSpriteFrameName(arg0);
        object_to_luaval<LightningSprite>(tolua_S, "LightningSprite",(LightningSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "LightningSprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"LightningSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "LightningSprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        LightningSprite* ret = LightningSprite::createWithSpriteFrame(arg0);
        object_to_luaval<LightningSprite>(tolua_S, "LightningSprite",(LightningSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "LightningSprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_LightningSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    LightningSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_LightningSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new LightningSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"LightningSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "LightningSprite:LightningSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_LightningSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_LightningSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LightningSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_LightningSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"LightningSprite");
    tolua_cclass(tolua_S,"LightningSprite","LightningSprite","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"LightningSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_LightningSprite_constructor);
        tolua_function(tolua_S,"setIsDrawDebug",lua_cocos2dx_dnp_shader_LightningSprite_setIsDrawDebug);
        tolua_function(tolua_S,"draw",lua_cocos2dx_dnp_shader_LightningSprite_draw);
        tolua_function(tolua_S,"updateNGeneration",lua_cocos2dx_dnp_shader_LightningSprite_updateNGeneration);
        tolua_function(tolua_S,"setStartAndEnd",lua_cocos2dx_dnp_shader_LightningSprite_setStartAndEnd);
        tolua_function(tolua_S,"onDraw",lua_cocos2dx_dnp_shader_LightningSprite_onDraw);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_LightningSprite_setShader);
        tolua_function(tolua_S,"doJitter",lua_cocos2dx_dnp_shader_LightningSprite_doJitter);
        tolua_function(tolua_S,"getIsDrawDebug",lua_cocos2dx_dnp_shader_LightningSprite_getIsDrawDebug);
        tolua_function(tolua_S,"onDrawDebug",lua_cocos2dx_dnp_shader_LightningSprite_onDrawDebug);
        tolua_function(tolua_S,"genLighting",lua_cocos2dx_dnp_shader_LightningSprite_genLighting);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_LightningSprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_dnp_shader_LightningSprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(LightningSprite).name();
    g_luaType[typeName] = "LightningSprite";
    g_typeCast["LightningSprite"] = "LightningSprite";
    return 1;
}

int lua_cocos2dx_dnp_shader_ShatterSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    ShatterSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ShatterSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ShatterSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ShatterSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ShatterSprite_setShader'", nullptr);
            return 0;
        }
        bool ret = cobj->setShader();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ShatterSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ShatterSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ShatterSprite_startShatter(lua_State* tolua_S)
{
    int argc = 0;
    ShatterSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ShatterSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ShatterSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_ShatterSprite_startShatter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ShatterSprite:startShatter");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ShatterSprite_startShatter'", nullptr);
            return 0;
        }
        cobj->startShatter(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ShatterSprite:startShatter",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ShatterSprite_startShatter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_ShatterSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ShatterSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ShatterSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "ShatterSprite:create");
            if (!ok) { break; }
            ShatterSprite* ret = ShatterSprite::create(arg0, arg1);
            object_to_luaval<ShatterSprite>(tolua_S, "ShatterSprite",(ShatterSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ShatterSprite:create"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            ShatterSprite* ret = ShatterSprite::create(arg0);
            object_to_luaval<ShatterSprite>(tolua_S, "ShatterSprite",(ShatterSprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "ShatterSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ShatterSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ShatterSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ShatterSprite:createWithSpriteFrameName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrameName'", nullptr);
            return 0;
        }
        ShatterSprite* ret = ShatterSprite::createWithSpriteFrameName(arg0);
        object_to_luaval<ShatterSprite>(tolua_S, "ShatterSprite",(ShatterSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ShatterSprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ShatterSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::SpriteFrame* arg0;
        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "ShatterSprite:createWithSpriteFrame");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrame'", nullptr);
            return 0;
        }
        ShatterSprite* ret = ShatterSprite::createWithSpriteFrame(arg0);
        object_to_luaval<ShatterSprite>(tolua_S, "ShatterSprite",(ShatterSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ShatterSprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_ShatterSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    ShatterSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_ShatterSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new ShatterSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ShatterSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ShatterSprite:ShatterSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_ShatterSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_ShatterSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ShatterSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_ShatterSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ShatterSprite");
    tolua_cclass(tolua_S,"ShatterSprite","ShatterSprite","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"ShatterSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_ShatterSprite_constructor);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_ShatterSprite_setShader);
        tolua_function(tolua_S,"startShatter",lua_cocos2dx_dnp_shader_ShatterSprite_startShatter);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_ShatterSprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_dnp_shader_ShatterSprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(ShatterSprite).name();
    g_luaType[typeName] = "ShatterSprite";
    g_typeCast["ShatterSprite"] = "ShatterSprite";
    return 1;
}

int lua_cocos2dx_dnp_shader_GhostSprite_setShader(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_setShader'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_setShader'", nullptr);
            return 0;
        }
        cobj->setShader();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:setShader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_setShader'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_getDownSample(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_getDownSample'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_getDownSample'", nullptr);
            return 0;
        }
        double ret = cobj->getDownSample();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:getDownSample",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_getDownSample'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_visit(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_visit'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Renderer* arg0;
        cocos2d::Mat4 arg1;
        unsigned int arg2;

        ok &= luaval_to_object<cocos2d::Renderer>(tolua_S, 2, "cc.Renderer",&arg0, "GhostSprite:visit");

        ok &= luaval_to_mat4(tolua_S, 3, &arg1, "GhostSprite:visit");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "GhostSprite:visit");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_visit'", nullptr);
            return 0;
        }
        cobj->visit(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:visit",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_visit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_setDownSample(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_setDownSample'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "GhostSprite:setDownSample");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_setDownSample'", nullptr);
            return 0;
        }
        cobj->setDownSample(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:setDownSample",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_setDownSample'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_init(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_init'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "GhostSprite:init");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0, "GhostSprite:init");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "GhostSprite:init");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "GhostSprite:init");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "GhostSprite:init");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "GhostSprite:init");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Sprite* arg0;
            ok &= luaval_to_object<cocos2d::Sprite>(tolua_S, 2, "cc.Sprite",&arg0, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::Sprite* arg0;
            ok &= luaval_to_object<cocos2d::Sprite>(tolua_S, 2, "cc.Sprite",&arg0, "GhostSprite:init");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Sprite* arg0;
            ok &= luaval_to_object<cocos2d::Sprite>(tolua_S, 2, "cc.Sprite",&arg0, "GhostSprite:init");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "GhostSprite:init");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "GhostSprite:init");

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "GhostSprite:init",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_getRefSprite(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_getRefSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_getRefSprite'", nullptr);
            return 0;
        }
        cocos2d::Sprite* ret = cobj->getRefSprite();
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:getRefSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_getRefSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_onBiggerRTPassUnifoAndBindTex(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_onBiggerRTPassUnifoAndBindTex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "GhostSprite:onBiggerRTPassUnifoAndBindTex");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "GhostSprite:onBiggerRTPassUnifoAndBindTex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_onBiggerRTPassUnifoAndBindTex'", nullptr);
            return 0;
        }
        cobj->onBiggerRTPassUnifoAndBindTex(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:onBiggerRTPassUnifoAndBindTex",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_onBiggerRTPassUnifoAndBindTex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_onFilterXRTPassUnifoAndBindTex(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (GhostSprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_dnp_shader_GhostSprite_onFilterXRTPassUnifoAndBindTex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "GhostSprite:onFilterXRTPassUnifoAndBindTex");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "GhostSprite:onFilterXRTPassUnifoAndBindTex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_onFilterXRTPassUnifoAndBindTex'", nullptr);
            return 0;
        }
        cobj->onFilterXRTPassUnifoAndBindTex(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:onFilterXRTPassUnifoAndBindTex",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_onFilterXRTPassUnifoAndBindTex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"GhostSprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "GhostSprite:create"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_create'", nullptr);
            return 0;
        }
        GhostSprite* ret = GhostSprite::create(arg0);
        object_to_luaval<GhostSprite>(tolua_S, "GhostSprite",(GhostSprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "GhostSprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_dnp_shader_GhostSprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    GhostSprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_dnp_shader_GhostSprite_constructor'", nullptr);
            return 0;
        }
        cobj = new GhostSprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"GhostSprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "GhostSprite:GhostSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_dnp_shader_GhostSprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_dnp_shader_GhostSprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (GhostSprite)");
    return 0;
}

int lua_register_cocos2dx_dnp_shader_GhostSprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"GhostSprite");
    tolua_cclass(tolua_S,"GhostSprite","GhostSprite","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"GhostSprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_dnp_shader_GhostSprite_constructor);
        tolua_function(tolua_S,"setShader",lua_cocos2dx_dnp_shader_GhostSprite_setShader);
        tolua_function(tolua_S,"getDownSample",lua_cocos2dx_dnp_shader_GhostSprite_getDownSample);
        tolua_function(tolua_S,"visit",lua_cocos2dx_dnp_shader_GhostSprite_visit);
        tolua_function(tolua_S,"setDownSample",lua_cocos2dx_dnp_shader_GhostSprite_setDownSample);
        tolua_function(tolua_S,"init",lua_cocos2dx_dnp_shader_GhostSprite_init);
        tolua_function(tolua_S,"getRefSprite",lua_cocos2dx_dnp_shader_GhostSprite_getRefSprite);
        tolua_function(tolua_S,"onBiggerRTPassUnifoAndBindTex",lua_cocos2dx_dnp_shader_GhostSprite_onBiggerRTPassUnifoAndBindTex);
        tolua_function(tolua_S,"onFilterXRTPassUnifoAndBindTex",lua_cocos2dx_dnp_shader_GhostSprite_onFilterXRTPassUnifoAndBindTex);
        tolua_function(tolua_S,"create", lua_cocos2dx_dnp_shader_GhostSprite_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(GhostSprite).name();
    g_luaType[typeName] = "GhostSprite";
    g_typeCast["GhostSprite"] = "GhostSprite";
    return 1;
}
TOLUA_API int register_all_cocos2dx_dnp_shader(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"dnp",0);
	tolua_beginmodule(tolua_S,"dnp");

	lua_register_cocos2dx_dnp_shader_ShatterSprite(tolua_S);
	lua_register_cocos2dx_dnp_shader_GhostSprite(tolua_S);
	lua_register_cocos2dx_dnp_shader_LightningSprite(tolua_S);
	lua_register_cocos2dx_dnp_shader_LaserSprite(tolua_S);
	lua_register_cocos2dx_dnp_shader_TailSprite(tolua_S);
	lua_register_cocos2dx_dnp_shader_ColorAdjustSprite(tolua_S);
	lua_register_cocos2dx_dnp_shader_RippleSprite(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

