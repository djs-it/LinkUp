/*
** Lua binding: cocos2dx_extra_luabinding
** Generated automatically by tolua++-1.0.92 on Wed Jun  8 17:14:24 2016.
*/

#include "cocos2dx_extra_luabinding.h"
#include "CCLuaEngine.h"

using namespace cocos2d;




#include "CCCrypto.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extra;

/* function to release collected object via destructor */
#ifdef __cplusplus


#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Crypto");
 
}

/* method: encryptXXTEALua of class  Crypto */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extra_luabinding_Crypto_encryptXXTEA00
static int tolua_cocos2dx_extra_luabinding_Crypto_encryptXXTEA00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Crypto",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* plaintext = ((const char*)  tolua_tostring(tolua_S,2,0));
  int plaintextLength = ((int)  tolua_tonumber(tolua_S,3,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,4,0));
  int keyLength = ((int)  tolua_tonumber(tolua_S,5,0));
  {
     Crypto::encryptXXTEALua(plaintext,plaintextLength,key,keyLength);
   
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'encryptXXTEA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: decryptXXTEALua of class  Crypto */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extra_luabinding_Crypto_decryptXXTEA00
static int tolua_cocos2dx_extra_luabinding_Crypto_decryptXXTEA00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Crypto",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* ciphertext = ((const char*)  tolua_tostring(tolua_S,2,0));
  int ciphertextLength = ((int)  tolua_tonumber(tolua_S,3,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,4,0));
  int keyLength = ((int)  tolua_tonumber(tolua_S,5,0));
  {
     Crypto::decryptXXTEALua(ciphertext,ciphertextLength,key,keyLength);
   
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'decryptXXTEA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: encodeBase64Lua of class  Crypto */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extra_luabinding_Crypto_encodeBase6400
static int tolua_cocos2dx_extra_luabinding_Crypto_encodeBase6400(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Crypto",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* input = ((const char*)  tolua_tostring(tolua_S,2,0));
  int inputLength = ((int)  tolua_tonumber(tolua_S,3,0));
  {
     Crypto::encodeBase64Lua(input,inputLength);
   
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'encodeBase64'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: decodeBase64Lua of class  Crypto */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extra_luabinding_Crypto_decodeBase6400
static int tolua_cocos2dx_extra_luabinding_Crypto_decodeBase6400(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Crypto",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* input = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
     Crypto::decodeBase64Lua(input);
   
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'decodeBase64'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MD5Lua of class  Crypto */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extra_luabinding_Crypto_MD500
static int tolua_cocos2dx_extra_luabinding_Crypto_MD500(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Crypto",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* input = ((char*)  tolua_tostring(tolua_S,2,0));
  bool isRawOutput = ((bool)  tolua_toboolean(tolua_S,3,0));
  {
     Crypto::MD5Lua(input,isRawOutput);
   
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MD5'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MD5FileLua of class  Crypto */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_extra_luabinding_Crypto_MD5File00
static int tolua_cocos2dx_extra_luabinding_Crypto_MD5File00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Crypto",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
     Crypto::MD5FileLua(path);
   
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MD5File'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_cocos2dx_extra_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,"cc",0);
 tolua_beginmodule(tolua_S,"cc");
  tolua_cclass(tolua_S,"Crypto","Crypto","",NULL);
  tolua_beginmodule(tolua_S,"Crypto");
   tolua_function(tolua_S,"encryptXXTEA",tolua_cocos2dx_extra_luabinding_Crypto_encryptXXTEA00);
   tolua_function(tolua_S,"decryptXXTEA",tolua_cocos2dx_extra_luabinding_Crypto_decryptXXTEA00);
   tolua_function(tolua_S,"encodeBase64",tolua_cocos2dx_extra_luabinding_Crypto_encodeBase6400);
   tolua_function(tolua_S,"decodeBase64",tolua_cocos2dx_extra_luabinding_Crypto_decodeBase6400);
   tolua_function(tolua_S,"MD5",tolua_cocos2dx_extra_luabinding_Crypto_MD500);
   tolua_function(tolua_S,"MD5File",tolua_cocos2dx_extra_luabinding_Crypto_MD5File00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cocos2dx_extra_luabinding (lua_State* tolua_S) {
 return tolua_cocos2dx_extra_luabinding_open(tolua_S);
};
#endif

