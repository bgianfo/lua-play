#include <stdio.h>
extern "C"
{
  #include <lua.h>
  #include <lualib.h>
  #include "lauxlib.h"
}

int main ( int argc, char *argv[] )
{
    /* initialize Lua */
    lua_State* L = luaL_newstate();

    /* load Lua base libraries */
    luaL_openlibs(L);

    /* run the script */
    luaL_dofile(L, "do-me.lua");

    /* cleanup Lua */
    lua_close(L);

    return 0;
}
