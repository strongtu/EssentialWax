//
//  lualoadexts.c
//  TestLua
//
//  Created by ice on 5/6/14.
//
//
 
#include "lualoadexts.h"
 
// luasocket
#include "luasocket.h"
#include "mime.h"
 
static luaL_Reg luax_preload_list[] = {
    {"socket.core", luaopen_socket_core},
    {"mime.core", luaopen_mime_core},
    {NULL, NULL}
};
 
int luax_loadexts(lua_State *L)
{
    luaL_Reg* lib = luax_preload_list;
    luaL_findtable(L, LUA_GLOBALSINDEX, "package.preload", sizeof(luax_preload_list)/sizeof(luax_preload_list[0])-1);
    for (; lib->func; lib++) {
        lua_pushstring(L, lib->name);
        lua_pushcfunction(L, lib->func);
        lua_rawset(L, -3);
    }
    lua_pop(L, 1);
    return 0;
}